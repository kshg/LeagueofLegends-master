//
//  SecondViewController.h
//  简书:http://www.jianshu.com/users/c1bb6aa0e422
//
//  Created by lanou3g on 15-7-21.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BaseViewController.h"

@interface VideoListViewController : BaseViewController

@property (nonatomic , copy) NSString * string;

@property (nonatomic , copy) NSString * name;

@property (nonatomic , copy) NSString *searchName;


//加载数据

-(void)loadData;

@end
