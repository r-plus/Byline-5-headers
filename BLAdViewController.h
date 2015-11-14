//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ADBannerViewDelegate.h"

@class ADBannerView, NSString, UIButton;

@interface BLAdViewController : UIViewController <ADBannerViewDelegate>
{
    UIViewController *_rootViewController;
    ADBannerView *_bannerView;
    UIButton *_upgradeButton;
}

@property(retain, nonatomic) UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)upgradeAction:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

