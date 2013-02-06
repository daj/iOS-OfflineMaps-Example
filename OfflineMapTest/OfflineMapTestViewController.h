//
//  OfflineMapTestViewController.h
//  OfflineMapTest
//
//  Created by Thijs Scheepers on 07-09-11.
//  Copyright 2011 Label305. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RMMapView.h"

@interface OfflineMapTestViewController : UIViewController <RMMapViewDelegate> {
	RMMapView *mapview;
}

@property(nonatomic,retain) RMMapView *mapview;

@end
