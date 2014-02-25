//
//  iOSWrapper.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#ifndef __videoPlayer__iOSWrapper__
#define __videoPlayer__iOSWrapper__

//#include <MediaPlayer/MediaPlayer.h>
//#include <EAGLView.h>
#include "cocos2d.h"
#include "AudioManager.h"
#include "Config.h"

using namespace cocos2d;

class iOSWrapper: public Object {
public:
	// Instance Methods
	void playVideo(const char *vidPath);

	// Static Methods
	static iOSWrapper *getInstance();
};

#endif /* defined(__videoPlayer__iOSWrapper__) */
