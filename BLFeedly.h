//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBCloud;

@interface BLFeedly : NSObject
{
    MBCloud *_cloud;
}

+ (id)globalSavedStreamIDWithUserID:(id)arg1;
+ (id)globalAllStreamIDWithUserID:(id)arg1;
+ (id)authTokenFromSignInRedirect:(id)arg1;
+ (id)signInURL;
@property(retain) MBCloud *cloud; // @synthesize cloud=_cloud;
- (void).cxx_destruct;
- (void)postMarkers:(id)arg1 itemIDs:(id)arg2 action:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)postMarkers:(id)arg1 streamID:(id)arg2 isCategory:(_Bool)arg3 lastReadItemID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getMarkers:(id)arg1 newerThan:(id)arg2 allowsCellularAccess:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getItems:(id)arg1 withIDs:(id)arg2 allowsCellularAccess:(_Bool)arg3 itemsHandler:(CDUnknownBlockType)arg4;
- (void)getStreamItemIDs:(id)arg1 streamID:(id)arg2 count:(unsigned long long)arg3 unreadOnly:(_Bool)arg4 newerThan:(id)arg5 allowsCellularAccess:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)getStreamItems:(id)arg1 streamID:(id)arg2 count:(unsigned long long)arg3 unreadOnly:(_Bool)arg4 newerThan:(id)arg5 continuation:(id)arg6 itemsHandler:(CDUnknownBlockType)arg7;
- (void)deleteSubscriptions:(id)arg1 feeds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)postSubscriptions:(id)arg1 feeds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptions:(id)arg1 allowsCellularAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getCategories:(id)arg1 allowsCellularAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSearchFeeds:(id)arg1 query:(id)arg2 locale:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postAuthToken:(id)arg1 isRefreshToken:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isCancelled;
- (void)invalidateAndCancel;
- (void)dealloc;
- (id)init;

@end
