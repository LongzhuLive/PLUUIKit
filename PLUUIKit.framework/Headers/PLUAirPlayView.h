//
//  PLUAirPlayView.h
//  TGA
//
//  Created by qiuji on 16/1/5.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

typedef enum : NSUInteger {
    //icon_airplay.png
    eAirPlayStyleDefault,
    //icon_airplay2.png
    eAirPlayStyleDefault1,
} AirPlayStyle;

@interface PLUAirPlayView : MPVolumeView
/**
 *  生成AirplayView
 *
 *  @param frame
 *  @param style
 *  @param superView 
 *
 *  @return <#return value description#>
 */
+(instancetype)addAirPlayViewWithFrame:(CGRect)frame
                                 style:(AirPlayStyle)style
                           toSuperView:(UIView *)superView;


@end
