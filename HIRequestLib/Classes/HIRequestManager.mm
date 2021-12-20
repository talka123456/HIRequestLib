//
//  TFBRequestManager.m
//  TFBRequestTest
//
//  Created by singers on 2019/8/6.
//  Copyright © 2019 singlers. All rights reserved.
//

#import "HIRequestManager.h"
#import "HIRequestLib-Swift.h"

@interface HIRequestManager ()

@end

@implementation HIRequestManager

+ (instancetype)sharedInstance
{
    static HIRequestManager *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[HIRequestManager alloc] init];
    });
    return sharedInstance;
}

+ (void)test
{
    [TestSwift test:@"test"];
}

@end
