#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();
	
	// 'layer' is an autorelease object
	auto layer = HelloWorld::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
			return false;
	}
	MenuItemFont *vidFont = MenuItemFont::create("Click to play Video", CC_CALLBACK_1(HelloWorld::menuCallback, this));

	Menu *pMenu = Menu::create(vidFont, NULL);
	this->addChild(pMenu, 1);

	return true;
}


void HelloWorld::menuCallback(Object* pSender)
{
	WrapperClass::getShared()->playVideo("sampleVideo");
}
