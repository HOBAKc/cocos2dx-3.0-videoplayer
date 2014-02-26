//
//  HelloWorldScene.cpp
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#include "HelloWorldScene.h"

Scene* HelloWorld::createScene()
{
	auto scene = Scene::create();
	auto layer = HelloWorld::create();

	scene->addChild(layer);

	return scene;
}

bool HelloWorld::init()
{
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
	Wrapper::getInstance()->playVideo("sampleVideo");
}
