//
//  ViewController.h
//  AR Test
//
//  Created by John Teasdale on 9/6/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "VideoSource.h"

@interface ViewController : UIViewController
    <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    
    IBOutlet UIView *previewView;
    VideoSource *videoSource;
}
- (void) initializeCaptureSession;
@end

