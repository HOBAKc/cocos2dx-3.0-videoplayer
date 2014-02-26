//
//  HelloWorldScene.h
//  videoPlayer
//
//  Created by radio8712 on 2/24/14.
//  Copyright (c) 2014 Dill Pixel. All rights reserved.
//

#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

// Cocos2dx
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
// Custom
#include "Wrapper.h"
#include "Config.h"

using namespace cocos2d;

class HelloWorld : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	
	void menuCallback(Object* pSender);
	
	// implement the "static create()" method manually
	CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
