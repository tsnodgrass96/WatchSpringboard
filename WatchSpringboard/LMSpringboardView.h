//
//  LMSpringboardView.h
//  WatchSpringboard
//
//
//  Copyright (c) 2015 Trevor Snodgrass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMSpringboardView : UIScrollView

@property (copy,nonatomic) NSArray* itemViews;
@property (nonatomic) NSUInteger itemDiameter;
@property (nonatomic) NSUInteger itemPadding;
@property (nonatomic) double minimumItemScaling;
@property (nonatomic) double minimumZoomLevelToLaunchApp;
@property (readonly) UITapGestureRecognizer* doubleTapGesture;

- (void)showAllContentAnimated:(BOOL)animated;
- (NSUInteger)indexOfItemClosestToPoint:(CGPoint)pointInSelf;
- (void)centerOnIndex:(NSUInteger)index zoomScale:(CGFloat)zoomScale animated:(BOOL)animated;

- (void)doIntroAnimation;

@end
