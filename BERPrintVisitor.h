//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BERVisitor.h"

@class NSMutableString;

@interface BERPrintVisitor : BERVisitor
{
    unsigned long long indentLevel;
    _Bool isIndenting;
    NSMutableString *string;
}

@property(retain, nonatomic) NSMutableString *string; // @synthesize string;
@property(nonatomic) _Bool isIndenting; // @synthesize isIndenting;
@property(nonatomic) unsigned long long indentLevel; // @synthesize indentLevel;
- (void).cxx_destruct;
- (void)decreaseIndent;
- (void)increaseIndent;
- (void)berIndent;
- (id)visitBERInteriorNode:(id)arg1;
- (id)visitBERLeafNode:(id)arg1;
- (id)init;

@end
