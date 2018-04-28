//
//  TVSEnvironment.h
//  TVSAccountSDK
//
//  Created by Rinc Liu on 18/11/2017.
//  Copyright © 2017 tencent. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 * @class TVSEnvironment
 * @warning 必须在调用 TVSAccountSDK 其他接口前设置！！
 * @brief TVS 环境设置接口
 */
@interface TVSEnvironment : NSObject

/*!
 * @brief 是否测试环境
 */
@property(nonatomic,assign) BOOL test;

/*!
 * @brief 是否开启日志
 */
@property(nonatomic,assign) BOOL logEnabled;

/*!
 * @brief 获得 TVS 环境类单例对象
 * @return TVS 环境类实例
 */
+(instancetype)shared;

@end
