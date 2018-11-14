//
//  UIImage+LaunchImage.h
//  TGA
//
//  Created by DarrenYau on 2016/11/1.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (LaunchImage)

typedef NSString * PLULaunchImageOrentationString;

extern PLULaunchImageOrentationString const PLULaunchImageOrentationPortrait;   // Like
extern PLULaunchImageOrentationString const PLULaunchImageOrentationLandscape;  // Share

// @"Portrait";    //横屏请设置成 @"Landscape"
+ (UIImage *)launchImageWithOrentation:(PLULaunchImageOrentationString)viewOrientation;

@end
