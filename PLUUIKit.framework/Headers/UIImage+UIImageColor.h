//
//  UIImage+UIImageColor.h
//
//  Created by JiWuChao on 17/6/19.
//  Copyright © 2017年 longzhu.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (UIImageColor)

- (UIImage*)imageWithChangeColor:(UIColor*)color;

+ (UIImage *)imageFromColor:(UIColor *)color;

// 黑白图片
+ (UIImage*)grayscale:(UIImage*)anImage type:(int)typ;

+ (UIImage*)grayImage:(UIImage*)sourceImage;

@end
