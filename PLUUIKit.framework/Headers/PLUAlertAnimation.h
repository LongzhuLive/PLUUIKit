//
//  PLUAlertAnimation.h
//  longzhu
//
//  Created by songnaiyin on 2017/3/31.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLUAlertAnimation : NSObject

+ (void)showAlertAnitionWithBgView:(UIView *)bgView contentView:(UIView *)contentView completion:(void (^)(BOOL finished))completion;

+ (void)hideAlertAnimationWithBgView:(UIView *)bgView contentView:(UIView *)contentView completion:(void (^)(BOOL finished))completion;

@end
