//
//  UIImage+Crop.h
//  TGA
//
//  Created by qiuji on 16/1/29.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Crop)

//缩放图片
- (instancetype) scaleToSize: (CGSize) size;

//绘制图片圆角
- (UIImage *)imageWithBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)color;

//截取指定位置的图片
- (UIImage *)croppedImage:(CGRect)bounds ;
@end
