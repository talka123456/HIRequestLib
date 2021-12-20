//
//  HIViewController.m
//  HIRequestLib
//
//  Created by zongmumask on 11/16/2021.
//  Copyright (c) 2021 zongmumask. All rights reserved.
//

#import "HIViewController.h"
#import "HIRequestLib.h"

@interface HIViewController ()

@end

@implementation HIViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    [HIRequestManager test];
//    [HIRequestManager hashWithString:@"Hello"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
