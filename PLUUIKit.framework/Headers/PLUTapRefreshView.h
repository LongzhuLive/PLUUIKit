//
//  PLUTapRefreshView.h
//  TGA
//
//  Created by PLU Engineer on 15/1/20.
//  Copyright (c) 2015年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    TapRefreshViewStateLoading = 0,
    TapRefreshViewStateNoData,
    TapRefreshViewStateSuccess,
    TapRefreshViewStateFailure
} TapRefreshViewState;


@class PLUTapRefreshView;

@protocol PLUTapRefreshViewDelegate <NSObject>

- (void)tapRefreshViewToRequestData;

@optional

//初始化view 不要在此写布局 并没有用
- (void)tapRefreshViewPrepare:(PLUTapRefreshView *)tapRefreshView;

//修改布局 有默认布局 用remake
- (void)tapRefreshViewLayoutSubviews:(PLUTapRefreshView *)tapRefreshView;

//加载中 
- (void)tapRefreshViewStateLoading:(PLUTapRefreshView *)tapRefreshView;

//加载失败
- (void)tapRefreshViewStateError:(PLUTapRefreshView *)tapRefreshView;

//加载成功
- (void)tapRefreshViewStateSuccess:(PLUTapRefreshView *)tapRefreshView;

//无数据
- (void)tapRefreshViewStateNodata:(PLUTapRefreshView *)tapRefreshView;

@end

@interface PLUTapRefreshView : UIView

@property (weak, nonatomic) id<PLUTapRefreshViewDelegate>delegate;

@property (nonatomic, assign) TapRefreshViewState state;

@property (nonatomic, strong, readonly) UILabel *retryLabel;

@property (nonatomic, strong, readonly) UILabel *tiplabel;

@property (nonatomic, strong, readonly) UIImageView *refreshStateView;

@property (nonatomic, assign) CGFloat imgScale;

//imageScale 图片缩放比 默认 img大小 loding中 90 * 135 其他113 *113;
- (instancetype)initWithFrame:(CGRect)frame andImgScale:(CGFloat)scale;
//title
- (void)setStatusTips:(NSString *)tips forState:(TapRefreshViewState)state;
//title
- (void)setSupplemet:(NSString *)tips forState:(TapRefreshViewState)state;

- (void)tapRefreshViewStateErrorTextColor;

@end
