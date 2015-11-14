//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BLFeedlyFeed : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSURL *_visualURL;
    NSNumber *_subscribers;
    NSMutableDictionary *_categoryLabelsByID;
}

+ (id)feedWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *categoryLabelsByID; // @synthesize categoryLabelsByID=_categoryLabelsByID;
@property(retain, nonatomic) NSNumber *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) NSURL *visualURL; // @synthesize visualURL=_visualURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
