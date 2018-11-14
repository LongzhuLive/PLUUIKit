//
//  UIButton+Action.h
//  tga
//
//  Created by 张雁军 on 2017/8/15.
//  Copyright © 2017年 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ActionHandler)(id sender);

@interface UIButton (Action)

- (void)addAction:(ActionHandler)action forControlEvents:(UIControlEvents)controlEvents;

@end
