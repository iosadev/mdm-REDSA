//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface AdminQueryLogCellTableViewCell : UITableViewCell
{
    UILabel *_statusNumber;
    UILabel *_statusContent;
    UILabel *_statusAriseTime;
    UILabel *_statusLock;
}

@property(nonatomic) __weak UILabel *statusLock; // @synthesize statusLock=_statusLock;
@property(nonatomic) __weak UILabel *statusAriseTime; // @synthesize statusAriseTime=_statusAriseTime;
@property(nonatomic) __weak UILabel *statusContent; // @synthesize statusContent=_statusContent;
@property(nonatomic) __weak UILabel *statusNumber; // @synthesize statusNumber=_statusNumber;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

