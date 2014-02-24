//
//  Config.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#ifndef __videoPlayer__Config__
#define __videoPlayer__Config__

#include "cocos2d.h"

using namespace cocos2d;

class Config {
public:
	// Instance Properties

	// DEVICE SPECIFIC
	// ***************
	float screenWidth;
	float screenHeight;
	float scaleFactor;


	// Static Methods
	static Config *getInstance();
};


#endif /* defined(__videoPlayer__Config__) */
