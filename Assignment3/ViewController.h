//
//  ViewController.h
//  Assignment3
//
//  Created by Build User on 2/4/14.
//  Copyright (c) 2014 Pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) BOOL allSelected;

@property (nonatomic, strong) NSMutableArray *cart;

@property (nonatomic, weak) IBOutlet UITableView *cartView;

@property (nonatomic, weak) IBOutlet UIButton *selectAll;

@property (nonatomic, weak) IBOutlet UIButton *selectNone;

@property (nonatomic, weak) IBOutlet UIButton *addBananas;

@property (nonatomic, weak) IBOutlet UIButton *clearFruit;

@property (nonatomic, weak) IBOutlet UIWebView *webView;

-(IBAction)selectAllOrNone:(id)sender;

@end
