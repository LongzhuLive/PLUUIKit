//
//  PLUBlurView.h
//  PLUVod
//
//  Created by plu-dev on 15/8/27.
//  Copyright (c) 2015年 DarrenYau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLUBlurView : UIView

- (void)setUIBarStyle: (UIBarStyle)style;

// Use the following property to set the tintColor. Set it to nil to reset.
@property (nonatomic, strong) UIColor *blurTintColor;

@end
