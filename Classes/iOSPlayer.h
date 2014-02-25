//
//  iOSPlayer.h
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#import <UIKit/UIKit.h>
#import "EAGLView.h"
#include "AudioManager.h"

@interface CCEAGLView (DPVideoPlayer)

- (void)playVideo:(NSString *)path withPlayer:(MPMoviePlayerController *)player;
- (void)removeVideo:(MPMoviePlayerController *)player;

@end
