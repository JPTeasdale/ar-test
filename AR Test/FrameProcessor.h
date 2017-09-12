//
//  FrameProcessor.h
//  AR Test
//
//  Created by John Teasdale on 9/7/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#ifndef FrameProcessor_h
#define FrameProcessor_h
#import "VideoSource.h"

@interface FrameProcessor : NSObject<VideoSourceDelegate>

- (void)processFrame:(cv::Mat &)frame;

@end

#endif /* FrameProcessor_h */
