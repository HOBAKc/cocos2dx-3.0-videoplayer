#include "AppDelegate.h"
#include "HelloWorldScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() {

}

bool AppDelegate::applicationDidFinishLaunching() {
	// initialize director
	auto director = Director::getInstance();
	auto eglView = EGLView::getInstance();

	director->setOpenGLView(eglView);

	// turn on display FPS
	director->setDisplayStats(true);

	// Setup the config
	Config::getConfig()->screenWidth = eglView->getFrameSize().width;
	Config::getConfig()->screenHeight = eglView->getFrameSize().height;
	eglView->setDesignResolutionSize(Config::getConfig()->screenWidth, Config::getConfig()->screenHeight, ResolutionPolicy::kResolutionShowAll);
	director->setContentScaleFactor(1536.0f / Config::getConfig()->screenHeight);

	// set FPS. the default value is 1.0/60 if you don't call this
	director->setAnimationInterval(1.0 / 60);

	// Setup Audio Manager
	AudioManager::getInstance()->playBG();

	// create a scene. it's an autorelease object
	auto scene = HelloWorld::createScene();

	// run
	director->runWithScene(scene);

	return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
	Director::getInstance()->stopAnimation();

	// if you use SimpleAudioEngine, it must be pause
	SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
	SimpleAudioEngine::getInstance()->pauseAllEffects();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
	Director::getInstance()->startAnimation();

	// if you use SimpleAudioEngine, it must resume here
	SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
	SimpleAudioEngine::getInstance()->resumeAllEffects();
}
