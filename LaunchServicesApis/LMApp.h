//
//  LMApp.h
//  WatchSpringboard
//
//
//  Copyright (c) 2015 Trevor Snodgrass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMApp : NSObject

@property (nonatomic, readonly) NSString* bundleIdentifier;
@property (nonatomic, readonly) NSString* name;
@property (nonatomic, readonly) UIImage* icon;

@property (nonatomic, readonly) BOOL isHiddenApp;

+ (instancetype)appWithPrivateProxy:(id)privateProxy;
+ (instancetype)appWithBundleIdentifier:(NSString*)bundleIdentifier;

@end
