//
//  FrameProcessor.m
//  AR Test
//
//  Created by John Teasdale on 9/7/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#import "FrameProcessor.h"
#include <opencv2/aruco.hpp>

@implementation FrameProcessor

- (void)processFrame:(cv::Mat &)frame {
    cv::cvtColor(frame, frame, cv::COLOR_BGRA2BGR);
    
    std::vector< int > ids, empty;
    std::vector< std::vector< cv::Point2f > > corners, rejected;
    cv::Ptr<cv::aruco::DetectorParameters> detectorParams = cv::aruco::DetectorParameters::create();
    cv::Ptr<cv::aruco::Dictionary> dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_6X6_250);
    
    try {
        cv::aruco::detectMarkers(frame, dictionary, corners, ids, detectorParams, rejected);
        cv::aruco::drawDetectedMarkers(frame, corners, ids);
        cv::aruco::drawDetectedMarkers(frame, rejected, empty, cv::Scalar(255, 0,0));
    } catch( cv::Exception& e )
    {
        printf("error\n");
    }
}

@end
