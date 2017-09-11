//
//  PLUSpringConfig.h
//  PLUUIKit
//
//  Created by mafengxin on 16/10/8.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface PLUSpringConfig : NSObject

/* The mass of the object attached to the end of the spring. Must be greater
 * than 0. Defaults to one.
 * 质量
 */

@property (nonatomic, assign) CGFloat mass;

/* The spring stiffness coefficient. Must be greater than 0.
 * Defaults to 100.
 * 弹性系数
 */

@property (nonatomic, assign) CGFloat stiffness;

/* The damping coefficient. Must be greater than or equal to 0.
 * Defaults to 10.
 * 阻尼
 */

@property (nonatomic, assign) CGFloat damping;

/* The initial velocity of the object attached to the spring. Defaults
 * to zero, which represents an unmoving object. Negative values
 * represent the object moving away from the spring attachment point,
 * positive values represent the object moving towards the spring
 * attachment point.
 * 初速度
 */

@property (nonatomic, assign) CGFloat initialVelocity;

//动画播放速度倍率 默认1
@property (nonatomic, assign) CGFloat animationSpeed;

//可视为静止的最小值 默认 1 / scale 和maxDuration互斥 都不设置 则ignorePoint 具有默认值
@property (nonatomic, assign) CGFloat ignorePoint;

//期望动画时长, 和ignorePoint 互斥 不设置则依据ignorePoint生效
@property (nonatomic, assign) CGFloat maxDuration;

//是否触底反弹 true 不反弹 fale 反弹
@property (nonatomic, assign) BOOL noNegtive;

@property (nonatomic, assign) CGFloat fromValue;

@property (nonatomic, assign) CGFloat toValue;

@property (nonatomic, copy) NSString * _Nullable keyPath;

/* Returns the estimated duration required for the spring system to be
 * considered at rest. The duration is evaluated for the current animation
 * parameters.
 * 动画时长
 */
@property(nonatomic, assign, readonly) CFTimeInterval settlingDuration;

//时间点
@property (nonatomic, copy, readonly) NSArray<NSNumber *> * _Nullable keyTimes;
//转折点
@property (nonatomic, copy, readonly) NSArray<NSNumber *> * _Nullable values;

+ (_Nullable instancetype) springConfigWithKeyPath:( NSString * _Nonnull ) path;

- (void)reset;

@end
