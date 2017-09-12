//
//  ViewController.m
//  AR Test
//
//  Created by John Teasdale on 9/6/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#import "ViewController.h"
#import "FrameProcessor.h"
#include <opencv2/aruco.hpp>

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self->videoSource = [[VideoSource alloc] init];
    self->videoSource.delegate = [[FrameProcessor alloc] init];
    self->videoSource.targetView = self->previewView;
    [self->videoSource start];
    
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    [self->videoSource stop];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
@end
