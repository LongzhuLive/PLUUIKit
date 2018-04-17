//
//  PLIBarrageView.h
//  BarrageRendererDemo
//
//  Created by plu-dev on 15/9/9.
//  Copyright (c) 2015年 ExBye Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLUBarrageTextItem.h"


typedef enum : NSUInteger {
    PLUBarrageViewAppearTypeMaskFromTop,
    PLUBarrageViewAppearTypeMaskFromBottom
} PLUBarrageViewAppearTypeMask;

@protocol PLUBarrageViewDelegate <NSObject>

@optional
- (void)onBarrageStart;
- (void)onBarrageStop;
- (void)onBarragePause;
- (void)onBarrageResume;

@end

@interface PLUBarrageView : UIView

@property (nonatomic, weak) id<PLUBarrageViewDelegate> delegate;

@property (nonatomic, readonly) BOOL isStart;

//最大显示行数,默认是13行，最大不能超过200行
@property (nonatomic, assign) NSUInteger maxDisplayLines;
//按照最大显示行数计算的推荐字体大小（推荐的弹幕字体大小按照这个来设置）
@property (nonatomic, readonly) CGFloat perferredSystemFontSize;
//设置哪几行显示[0,1,2]
@property (nonatomic, strong) NSArray<NSNumber *> *displayedLineArray;
//
@property (nonatomic, assign) PLUBarrageViewAppearTypeMask appearMask;

#pragma mark - Action
- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (BOOL)displayPLUBarrageTextItem: (PLUBarrageTextItem *)pluBarrageTextItem;


@end


@interface PLUBarrageView (Utils)

- (void)setDisplayLineArrayByRange: (NSRange)range;

@end


