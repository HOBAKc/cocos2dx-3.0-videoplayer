//
//  iOSPlayer.m
//  videoPlayer
//
//  Created by Dill Pixel 2 on 2/24/14.
//
//

#import <MediaPlayer/MediaPlayer.h>
#import "iOSPlayer.h"


DPiOSPlayer *playerInstance = nil;

@implementation DPiOSPlayer

- (void)playVideo:(NSString *)path withView:(UIView *) view{
	NSURL *url;
// Local File
//	url = [NSURL fileURLWithPath:path];

// HTTP Download Link
//	url = [NSURL URLWithString:@"http://ff1d56741af732f1488c-5d3ef947316355c15b99158374bf2058.r4.cf2.rackcdn.com/video.mp4"];

// HTTPS Download Link
//	url = [NSURL URLWithString:@"https://34b9c2f4f9bb74a4743b-5d3ef947316355c15b99158374bf2058.ssl.cf2.rackcdn.com/video.mp4"];

// Streaming Link
//	url = [NSURL URLWithString:@"http://ad8179187e2cf7e7cbe3-5d3ef947316355c15b99158374bf2058.r4.stream.cf2.rackcdn.com/video.mp4"];

// iOS Streaming Link
	url = [NSURL URLWithString:@"http://0be1262fe8a25a0164ca-5d3ef947316355c15b99158374bf2058.iosr.cf2.rackcdn.com/video.mp4"];


	dpPlayer = [[MPMoviePlayerController alloc] initWithContentURL:url];
	[[dpPlayer view] setFrame: [view bounds]];
	[dpPlayer setFullscreen:YES];
	[dpPlayer setScalingMode:MPMovieScalingModeNone];
	[dpPlayer setControlStyle:MPMovieControlStyleFullscreen];
	[view addSubview:[dpPlayer view]];
	[dpPlayer play];

	[[NSNotificationCenter defaultCenter] addObserver:self
																					 selector:@selector(exitFullscreen)
																							 name:MPMoviePlayerDidExitFullscreenNotification
																						 object:nil];

	[[NSNotificationCenter defaultCenter] addObserver:self
																					 selector:@selector(videoEnded)
																							 name:MPMoviePlayerPlaybackDidFinishNotification
																						 object:nil];
}

- (void)exitFullscreen {
	[self removeVideo];
}

- (void)videoEnded {
	[self removeVideo];
}

- (void)removeVideo {
	if ([dpPlayer playbackState] == MPMoviePlaybackStatePaused) {
		[[dpPlayer view] removeFromSuperview];
		dpPlayer = nil;

		[[NSNotificationCenter defaultCenter] removeObserver:self name:MPMoviePlayerDidExitFullscreenNotification object:nil];
		[[NSNotificationCenter defaultCenter] removeObserver:self name:MPMoviePlayerPlaybackDidFinishNotification object:nil];
		AudioManager::getInstance()->playBG();
	}
}

+ (DPiOSPlayer *)getInstance {
	if (!playerInstance) {
		playerInstance = [[DPiOSPlayer alloc] init];
	}
	return playerInstance;
}

@end
