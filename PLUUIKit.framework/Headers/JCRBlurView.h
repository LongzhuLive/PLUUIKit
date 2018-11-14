//
//  AMBlurView.h
//  blur
//
//  Created by Cesar Pinto Castillo on 7/1/13.
//  Copyright (c) 2013 Arctic Minds Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UITinyColorToolbar.h"

@interface JCRBlurView : UIView

// Use the following property to set the tintColor. Set it to nil to reset.
@property (nonatomic, strong) UIColor *blurTintColor;

- (void)setUIBarStyle: (UIBarStyle)style;

@end
