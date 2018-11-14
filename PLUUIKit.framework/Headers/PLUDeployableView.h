//
//  PLUDeployableView.h
//  TGA
//
//  Created by mafengxin on 16/10/20.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    kDeployTypeHorizonUp,
    kDeployTypeHorizonDown,
    kDeployTypeVerticalLeft,
    kDeployTypeVerticalRight,
    kDeployTypeRound
} DeployType;

@class PLUDeployableView;

@protocol PLUDeployableViewDelegate <NSObject>

@optional

- (void)deployView:(PLUDeployableView *)deployView didDeselectItemAtIndex:(NSInteger) idx;

- (void)mainViewClick:(UITapGestureRecognizer *) touch;

@end

@protocol PLUDeployableViewDatasource <NSObject>

- (NSInteger)countOfViews:(PLUDeployableView *)deployableView;

- (UIView *)mainView:(PLUDeployableView *)deployableView;

- (UIView *)deployableView:(PLUDeployableView *)deployableView viewAtIdx:(NSInteger) idx;

@optional

- (CGSize)deployableView:(PLUDeployableView *)deployableView itemSizeAtIdx:(NSInteger)idx ;

@end

@interface PLUDeployableView : UIView

@property (nonatomic, weak, readonly) NSArray *deployedViews;

@property (nonatomic, weak) UIView *mainView;

@property (nonatomic, weak) id<PLUDeployableViewDelegate> delegate;

@property (nonatomic, weak) id<PLUDeployableViewDatasource> datasource;

@property (nonatomic, assign) DeployType deployType;

@property (nonatomic, assign) BOOL deployed;

@property (nonatomic, assign) CGFloat duration;

@property (nonatomic, assign) CGSize itemSize;

- (UIView *)viewAtIndex:(NSInteger)idx;

//展开
- (void)deploy:(BOOL)animated;

//收起
- (void)undeploy:(BOOL)animated;

//重载
- (void)reload:(BOOL)animated;

//移除
- (void)removeAllViews:(BOOL)animated;

- (UIView *)dequeueWithReuseId:(NSString *)reuseId;

- (void)registerClass:(Class)itemClass forReuseID:(NSString *) reuseId;

@end

