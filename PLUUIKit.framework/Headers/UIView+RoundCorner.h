//
//  UIImage+RoundCorner.h
//  PLUUIKit
//
//  Created by ma fengxin on 16/8/15.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (RoundCorner)
/**
 *  圆角半径 如果用autolayout 在view的bounds变为预期值后再设置圆角（layoutsubview）
                            或者初始化时就给定目标frame
                            或者手动调用refreshcorner
    layer的默认填充颜色为superviw.backgroundcolor backgroundcolor未设置则为whitecolor
 */
@property (nonatomic, strong) NSNumber *cornerRadiusPLU;
/**
 *  被切去部分的填充色
 */
@property (nonatomic, strong) UIColor *fillColorPLU;
/**
 *  圆角的layer 没有特殊需求不需要自己设置新的layer 在设置远郊半径时会自动生成
 */
@property (nonatomic, strong) CAShapeLayer *maskLayerPLU;
/**
 *  当view的bounds发生变化时需要调用此方法 否则显示区域不会发生变化
 */
- (void)refreshCorner;



@end
