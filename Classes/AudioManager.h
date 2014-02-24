//
//  AudioManager.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#ifndef __videoPlayer__AudioManager__
#define __videoPlayer__AudioManager__

#include <iostream>
#include "cocos2d.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

class AudioManager : public Object {
public:
	// Instance Properties
	bool isMute;

	// Instance Methods
	void playBG();
	void stopBG();

	void unMute();
	void toggleMute();
	void save();

	// Static Methods
	static AudioManager *getInstance();
};

#endif /* defined(__videoPlayer__AudioManager__) */
