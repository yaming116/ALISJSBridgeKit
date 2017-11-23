//
//  NebulaSDKManager.h
//  alisports.sportsman
//
//  Created by alisports on 2017/10/31.
//  Copyright © 2017年 alisports. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import <NebulaSDK/NebulaSDK.h>
#import <NebulaSDK/NBPluginBase.h>

#import <ALISJSBridgeKit/ALISJSBridgeKit.h>

@interface NebulaSDKManager : ALSJSBridgeBasePlugin

+ (NebulaSDKManager *)sharedInstanse;

/**
 
 从外部添加的JS
 @return key =JSName value = block
 */
- (NSDictionary *)addedExtraJSHandersDic;

- (NSDictionary *)JSHandersDicForClassStr:(NSString *)classString;

@end
