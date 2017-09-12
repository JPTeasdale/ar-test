//
//  Header.h
//  AR Test
//
//  Created by John Teasdale on 9/6/17.
//  Copyright © 2017 Teasdale Games LLC. All rights reserved.
//

#ifndef cvconvert_h
#define cvconvert_h

@interface CVConvert : NSObject {}

+ (cv::Mat)cvMatFromUIImage;
+ (cv::Mat)cvMatGrayFromUIImage;
+ (UIImage *)UIImageFromCVMat;

@end


#endif /* Header_h */
