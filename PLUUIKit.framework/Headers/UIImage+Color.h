//
//  UIImage+Color.h
//  Push
//
//  Created by 张雁军 on 2017/10/16.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, UCGradientDirection) {
    UCGradientHorizontal,
    UCGradientVertical,
};

@interface UIImage (Color)

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *(^)(UIColor *color, CGSize size))make;

+ (UIImage *)verticalGradientImageWithStartColor:(UIColor *)startColor endColor:(UIColor *)endColor size:(CGSize)size;

+ (UIImage *(^)(UIColor *startColor,UIColor *endColor, CGSize size))verticalGradient;

@end
