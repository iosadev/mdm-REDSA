//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIToolbar, UIVisualEffectView;

@interface MBBackgroundView : UIView
{
    long long _style;
    UIColor *_color;
    UIVisualEffectView *_effectView;
    UIToolbar *_toolbar;
}

@property(retain) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateViewsForColor:(id)arg1;
- (void)updateForBackgroundStyle;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

