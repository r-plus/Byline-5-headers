//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLSettingsViewController.h"

@class NSArray, NSString;

@interface BLSyncSettingsViewController : BLSettingsViewController
{
    NSString *_userDefaultsKey;
    NSArray *_numbers;
}

@property(retain, nonatomic) NSArray *numbers; // @synthesize numbers=_numbers;
@property(retain, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end

