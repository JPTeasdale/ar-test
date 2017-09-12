//
//  VideoSource.h
//  AR Test
//
//  Created by John Teasdale on 9/7/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef VideoSource_h
#define VideoSource_h
@protocol VideoSourceDelegate<NSObject>

- (void)processFrame:(cv::Mat &)frame;

@end

@interface VideoSource : NSObject

- (void)start;
- (void)stop;

@property(nonatomic, strong) id<VideoSourceDelegate> delegate;
@property(nonatomic, strong) UIView *targetView;

@end

#endif /* VideoSource_h */
