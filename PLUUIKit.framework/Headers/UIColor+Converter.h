//
//  UIColor+Converter.h
//  TGA
//
//  Created by qiuji on 16/1/29.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Converter)

/*!
 *  @brief 通过十六进制色号返回 UIColor
 *
 *  @param inColorString 十六进制色号
 *
 *  @return UIColor
 */
+ (UIColor *)colorFromHexRGB:(NSString *)hexColorString;
+ (UIColor *)colorFromHexRGB:(NSString *) inColorString alpha:(CGFloat) alpha;

@end
