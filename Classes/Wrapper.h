//
//  Wrapper.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#ifndef __videoPlayer__Wrapper__
#define __videoPlayer__Wrapper__

#include "cocos2d.h"
#include "AudioManager.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS
#include "iOSWrapper.h"
#endif

using namespace cocos2d;

class Wrapper : public Object {
public:
	// Instance Methods
	void playVideo(const char *vidPath);

	// Static Methods
	static Wrapper *getInstance();
	
};

#endif /* defined(__videoPlayer__Wrapper__) */
