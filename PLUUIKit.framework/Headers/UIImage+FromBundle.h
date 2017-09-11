//
//  UIImage+FromBundle.h
//  PLUUIKit
//
//  Created by sunshaobing on 16/8/1.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (FromBundle)

/**
 *  根据bundleName.bundle/imageFileName生成图片
 *
 *  @param bundleName    <#bundleName description#>
 *  @param imageFileName <#imageFileName description#>
 *
 *  @return <#return value description#>
 */
+(UIImage *)imageFromBundle: (NSString *)bundleName imageFileName: (NSString *)imageFileName;

@end
