//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, NSString;

@interface BLNewsList : NSManagedObject
{
}

- (id)feedlyStreamIDWithUserID:(id)arg1;
@property(readonly, nonatomic) NSString *localisedTitle;

// Remaining properties
@property(nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) NSSet *items; // @dynamic items;
@property(retain, nonatomic) NSString *markAsRead; // @dynamic markAsRead;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(nonatomic) _Bool subscription; // @dynamic subscription;
@property(nonatomic) _Bool subscriptionDirty; // @dynamic subscriptionDirty;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int unread; // @dynamic unread;

@end

