//
//  LKContainerView.h
//  LvKe
//
//  Created by ziya on 2017/7/6.
//  Copyright © 2017年 lvke.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LKContainerView : UIView

@property (nonatomic, strong) UIColor *visibleBackgroundColor;

- (void)touchedContainer;

- (void)statusShow;

- (void)statusHide;

- (void)dismiss;

- (void)show;

@end
