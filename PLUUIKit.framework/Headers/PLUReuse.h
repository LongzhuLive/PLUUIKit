//
//  PLUReuseArray.h
//  TGA
//
//  Created by mafengxin on 16/3/31.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PLUReuse : NSObject

- (void)registClass:(Class) rClass reuseId:(NSString *) reuseId;

- (id)getObjWithReuseId:(NSString *) reuseId;

- (void)releaseObj:(id)obj withReuseId:(NSString *) reuseId;

- (void)releaseObj:(id)obj;

- (void)removeAllObjects;

@end


@interface PLUReuseObj : NSObject
@property (nonatomic, strong) NSMutableSet *objs;
@property (nonatomic, copy) NSString *classStr;
@end
