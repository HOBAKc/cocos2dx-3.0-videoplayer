//
//  Config.cpp
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#include "Config.h"

static Config *instance = NULL;

Config *Config::getInstance() {
	if (!instance) {
		instance = new Config();
	}
	return instance;
};
