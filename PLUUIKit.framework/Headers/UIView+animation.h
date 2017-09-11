//
//  UIView+animation.h
//  TGA
//
//  Created by mafengxin on 16/3/30.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum {
    kGiftEffectRightToLeftStraight,
    kGiftEffectRightToLeftStop
}animationDirection;
@interface UIView (animation)
- (void)animationStartPoint:(CGPoint) point
                  direction:(animationDirection) direction
                   endRatio:(CGFloat) ratio
                       type:(UIViewAnimationOptions) type
                   duration:(NSTimeInterval) duration
                 completion:(void (^)(BOOL finished))completion;
@end
