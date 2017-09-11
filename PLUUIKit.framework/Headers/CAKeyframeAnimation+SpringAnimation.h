//
//  CAKeyframeAnimation+SpringAnimation.h
//  PLUUIKit
//
//  Created by ziya on 2017/5/11.
//  Copyright © 2017年 plu-dev. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#import "PLUSpringConfig.h"

@interface CAKeyframeAnimation (SpringAnimation)

+ (instancetype)springAnimationWithConfig:(PLUSpringConfig *) config;

@end
