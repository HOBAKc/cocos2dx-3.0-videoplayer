//
//  AppDelegate.cpp
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#include "AppDelegate.h"
#include "HelloWorldScene.h"

#define STATS false

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() {

}

bool AppDelegate::applicationDidFinishLaunching() {
	// Setup the director
	auto director = Director::getInstance();
	auto eglView = EGLView::getInstance();

	director->setOpenGLView(eglView);

	// turn on display FPS
	director->setDisplayStats(STATS);

	// Setup the config
	Config::getInstance()->screenWidth = eglView->getFrameSize().width;
	Config::getInstance()->screenHeight = eglView->getFrameSize().height;
	director->setContentScaleFactor(1536.0f / Config::getInstance()->screenHeight);

	// Set the frame rate
	director->setAnimationInterval(1.0 / 60);

	// Setup the audio manager
	AudioManager::getInstance()->playBG();

	// Setup the scene
	auto scene = HelloWorld::createScene();
	director->runWithScene(scene);

	return true;
}

void AppDelegate::applicationDidEnterBackground() {
	// Pause app on interrupt
	Director::getInstance()->stopAnimation();

	SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
	SimpleAudioEngine::getInstance()->pauseAllEffects();
}

void AppDelegate::applicationWillEnterForeground() {
	// Resume from interruption
	Director::getInstance()->startAnimation();

	SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
	SimpleAudioEngine::getInstance()->resumeAllEffects();
}
