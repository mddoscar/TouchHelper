//
//  TouchHelper.h
//  Printer3D
//
//  Created by mac on 2017/1/10.
//  Copyright © 2017年 mdd.oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 解锁帮助类
 */
@interface TouchHelper : NSObject


+(BOOL) touchLockIsOpen;
+(NSString *) touchLockIsOpenStr;
+(void) setTouchLock:(BOOL) pLock;
+(void) checkTouchIdCallBack:(nullable void(^)(BOOL rState, NSError  * __nullable rError))pDoCallBack;


@end
