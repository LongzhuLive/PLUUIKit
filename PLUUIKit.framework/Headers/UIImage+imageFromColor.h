//
//  UIImage+imageFromColor.h
//  TGA
//
//  Created by li.chenglong on 16/8/8.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage(imageFromColor)

- (UIImage*)imageWithChangeColor:(UIColor*)color;

+ (UIImage *)imageFromColor:(UIColor *)color;

// 黑白图片
+ (UIImage*)grayscale:(UIImage*)anImage type:(int)typ;

+ (UIImage*)grayImage:(UIImage*)sourceImage;

//生成宽高均为1像素的图片
+ (UIImage *)singleLineImageWithColor:(UIColor *) color;

@end
