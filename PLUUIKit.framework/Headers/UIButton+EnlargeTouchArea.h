//
//  UIButton+EnlargeTouchArea.h
//  TGA
//
//  Created by PLU Engineer on 15/3/19.
//  Copyright (c) 2015年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeTouchArea)
/**
 *  扩展button点击区域
 *
 *  @param top    <#top description#>
 *  @param right  <#right description#>
 *  @param bottom <#bottom description#>
 *  @param left   <#left description#>
 */
- (void) setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end
