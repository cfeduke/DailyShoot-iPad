//
//  RootViewController.h
//  DailyShoot-iPad
//
//  Created by Charles Feduke on 8/7/11.
//  Copyright 2011 Deployment Zone. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface RootViewController : UITableViewController

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
