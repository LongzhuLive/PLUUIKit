//
//  UISlider+Touch.h
//  TGA
//
//  Created by plu-dev on 15/9/22.
//  Copyright (c) 2015年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UISlider (touch)
/**
 *  给Slider添加tap手势
 *
 *  @param target <#target description#>
 *  @param action <#action description#>
 */
- (void)addTapGestureWithTarget: (id)target
                         action: (SEL)action;
@end

