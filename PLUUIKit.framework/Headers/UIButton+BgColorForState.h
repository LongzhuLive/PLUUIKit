//
//  UIButton+BgColorForState.h
//  TGA
//
//  Created by JiWuChao on 16/5/20.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (BgColorForState)

/**
 *  设置某个状态下的按钮颜色
 *
 *  @param backgroundColor
 *  @param state
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor Forstate:(UIControlState)state;

@end
