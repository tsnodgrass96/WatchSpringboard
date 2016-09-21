//
//  LMSpringboardItemView.h
//  WatchSpringboard
//
//
//  Copyright (c) 2015 Trevor Snodgrass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMSpringboardItemView : UIView

@property (readonly) UIImageView* icon;
@property (readonly) UILabel* label;
@property (nonatomic) CGFloat scale;
- (void)setScale:(CGFloat)scale animated:(BOOL)animated;
@property (nonatomic) BOOL isFolderLike;

@property (nonatomic, copy) NSString* bundleIdentifier;

- (void)setTitle:(NSString*)title;

@end
