//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSTimer, UIButton;

@interface BLStatusView : UIView
{
    _Bool _syncing;
    NSDate *_syncDate;
    UIButton *_button;
    NSTimer *_updateTimer;
}

+ (id)midnightBeforeDate:(id)arg1;
+ (id)localisedStringFromDate:(id)arg1 isSyncDate:(_Bool)arg2 timeIntervalUntilChange:(double *)arg3;
+ (id)localisedStringFromDate:(id)arg1;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSDate *syncDate; // @synthesize syncDate=_syncDate;
@property(nonatomic) _Bool syncing; // @synthesize syncing=_syncing;
- (void).cxx_destruct;
- (void)updateButton:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)awakeFromNib;

@end

