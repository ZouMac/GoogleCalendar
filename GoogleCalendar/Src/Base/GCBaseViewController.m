//
//  GCBaseViewController.m
//  GoogleCalendar
//
//  Created by Zou Tan on 2019/2/18.
//  Copyright © 2019 Zou Tan. All rights reserved.
//

#import "GCBaseViewController.h"
#import "UIColor+Hex.h"

@interface GCBaseViewController ()

@end

@implementation GCBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor colorWithHexString:@"#ffffff" alpha:1];
}



@end
