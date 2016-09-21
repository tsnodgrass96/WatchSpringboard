//
//  LMViewControllerView.h
//  WatchSpringboard
//
//
//  Copyright (c) 2015 Trevor Snodgrass. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LMSpringboardItemView;
@class LMSpringboardView;

@interface LMViewControllerView : UIView

@property (readonly) LMSpringboardView* springboard;
@property (readonly) UIView* appView;
@property (readonly) UIButton* respringButton;
@property (readonly) BOOL isAppLaunched;

- (void)launchAppItem:(LMSpringboardItemView*)item;
- (void)quitApp;

@end
