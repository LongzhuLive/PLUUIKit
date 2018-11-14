//
//  UIView+Layer.h
//  longzhu-iPhone
//
//  Created by Ever on 2018/3/22.
//  Copyright © 2018年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

#define K_DEFAULT_SHADOW_RADIUS (3)

@interface UIView (Layer)

/**
 *  显示指定位置圆角
 *
 *  @param corners 位置
 *  @param radius  圆角半径
 */
- (void)showCorner:(UIRectCorner)corners radius:(CGFloat)radius;

/**
 显示阴影（使用默认配置）
 */
- (void)showShadow;

/**
 设置圆角和阴影(阴影使用默认配置)

 @param cornerRadius 圆角大小
 */
- (void)showCornerAndShadow:(CGFloat)cornerRadius;

@end
