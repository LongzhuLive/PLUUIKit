//
//  PLUCateSelectedView.h
//  selecteddd
//
//  Created by songnaiyin on 16/11/15.
//  Copyright © 2016年 songnaiyin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LZScrollPageViewTitlesProto.h"

@protocol PLUCateSelectedViewDelegate;

@interface PLUCateSelectedView : UIView

@property (nonatomic, strong) NSArray<id<LZScrollPageViewTitlesProto>> *dataArr;

@property (nonatomic, assign) NSInteger currentIndex;

@property (nonatomic, weak) id<PLUCateSelectedViewDelegate>delegate;

@property (nonatomic, strong) UIColor *selectedColor;

@property (nonatomic, strong) UIColor *normalColor;

- (void)contentScrollViewDidScroll:(UIScrollView *)contentScrollView;

- (void)setContentOffsetX:(CGFloat)offsetX width:(CGFloat)width;

@end


@protocol PLUCateSelectedViewDelegate <NSObject>

@optional

-(void)cateSelectedView:(PLUCateSelectedView *)view didSelectedAtIndex:(NSInteger)index;

@end
