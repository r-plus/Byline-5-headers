//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLSettingsViewController.h"

@class NSMutableSet;

@interface BLNotificationSettingsViewController : BLSettingsViewController
{
    NSMutableSet *_selectedIdentifiers;
}

@property(retain, nonatomic) NSMutableSet *selectedIdentifiers; // @synthesize selectedIdentifiers=_selectedIdentifiers;
- (void).cxx_destruct;
- (void)accessoryAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)awakeFromNib;

@end

