//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SWRevealViewController;

@interface SWRevealView : UIView
{
    SWRevealViewController *_c;
    _Bool _disableLayout;
    UIView *_rearView;
    UIView *_rightView;
    UIView *_frontView;
}

@property(nonatomic) _Bool disableLayout; // @synthesize disableLayout=_disableLayout;
@property(readonly, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(readonly, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(readonly, nonatomic) UIView *rearView; // @synthesize rearView=_rearView;
- (void).cxx_destruct;
- (double)_adjustedDragLocationForLocation:(double)arg1;
- (void)_prepareForNewPosition:(long long)arg1;
- (void)_layoutRearViewsForLocation:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInsideD:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dragFrontViewToXLocation:(double)arg1;
- (double)frontLocationForPosition:(long long)arg1;
- (void)unloadRightView;
- (void)unloadRearView;
- (void)prepareRightViewForPosition:(long long)arg1;
- (void)prepareRearViewForPosition:(long long)arg1;
- (struct CGRect)hierarchycalFrameAdjustment:(struct CGRect)arg1;
- (void)reloadShadow;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

