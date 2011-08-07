//
//  DailyShoot_iPadAppDelegate.h
//  DailyShoot-iPad
//
//  Created by Charles Feduke on 8/7/11.
//  Copyright 2011 Deployment Zone. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@class DetailViewController;

@interface DailyShoot_iPadAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UISplitViewController *splitViewController;

@property (nonatomic, retain) IBOutlet RootViewController *rootViewController;

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
