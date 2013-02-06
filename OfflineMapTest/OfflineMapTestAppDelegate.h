//
//  OfflineMapTestAppDelegate.h
//  OfflineMapTest
//
//  Created by Thijs Scheepers on 07-09-11.
//  Copyright 2011 Label305. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OfflineMapTestViewController;

@interface OfflineMapTestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet OfflineMapTestViewController *viewController;

@end
