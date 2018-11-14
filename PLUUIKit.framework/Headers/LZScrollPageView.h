//
//  LZScrollPageView.h
//  LZScrollPageView
//
//  Created by songnaiyin on 2017/6/15.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LZScrollPageViewTitlesProto.h"

@protocol LZScrollPageViewDataSource;

@protocol LZScrollPageViewDelegate;

@interface LZScrollPageView : UIView

@property (nonatomic, weak) id<LZScrollPageViewDataSource> dataSource;

@property (nonatomic, weak) id<LZScrollPageViewDelegate> delegate;

@property (nonatomic, assign) NSInteger currentIndex;

@property (nonatomic, strong) UIColor *selectedColor;

@property (nonatomic, strong) UIColor *normalColor;

@property (nonatomic, assign) BOOL isHideTabView;

- (void)reloadData;

- (UIView *)viewAtIndex:(NSInteger)idx;

- (instancetype)initWithFrame:(CGRect)frame isHideTabView:(BOOL)isHideTabView;

@end

@protocol LZScrollPageViewDataSource <NSObject>

- (NSArray<id<LZScrollPageViewTitlesProto>> *)titlesOfScrollPageView:(LZScrollPageView *)view;

- (UIView *)scrollPageView:(LZScrollPageView *)view pageViewAtIndex:(NSInteger)index;


@end


@protocol LZScrollPageViewDelegate <NSObject>

//- (void)scrollPageView:(LZScrollPageView *)view 

@optional

- (void)scrollPageView:(LZScrollPageView *)view didShowPageViewAtIndex:(NSInteger)index;

@end


