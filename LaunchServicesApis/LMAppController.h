//
//  LMAppController.h
//  WatchSpringboard
//
//
//  Copyright (c) 2015 Trevor Snodgrass. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMApp.h"

@interface LMAppController : NSObject

@property (nonatomic, readonly) NSArray* installedApplications;

- (BOOL)openAppWithBundleIdentifier:(NSString*)bundleIdentifier;

+ (instancetype)sharedInstance;

@end
