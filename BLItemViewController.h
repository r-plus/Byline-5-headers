//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class BLNewsItem, NSString, NSURLRequest, UIBarButtonItem, UIProgressView, UIView, UIWebView;

@interface BLItemViewController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _visible;
    _Bool _restoringWebView;
    BLNewsItem *_newsItem;
    BLNewsItem *_nextNewsItem;
    BLNewsItem *_previousNewsItem;
    UIView *_shadowView;
    UIWebView *_webView;
    UIWebView *_nextWebView;
    UIWebView *_previousWebView;
    UIProgressView *_progressView;
    NSURLRequest *_loadingRequest;
    UIBarButtonItem *_openBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_sendBarButtonItem;
    UIBarButtonItem *_saveBarButtonItem;
    UIBarButtonItem *_saveSelectedBarButtonItem;
    UIBarButtonItem *_markBarButtonItem;
    UIBarButtonItem *_markSelectedBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *markSelectedBarButtonItem; // @synthesize markSelectedBarButtonItem=_markSelectedBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *markBarButtonItem; // @synthesize markBarButtonItem=_markBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *saveSelectedBarButtonItem; // @synthesize saveSelectedBarButtonItem=_saveSelectedBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *saveBarButtonItem; // @synthesize saveBarButtonItem=_saveBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *sendBarButtonItem; // @synthesize sendBarButtonItem=_sendBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *openBarButtonItem; // @synthesize openBarButtonItem=_openBarButtonItem;
@property(retain, nonatomic) NSURLRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIWebView *previousWebView; // @synthesize previousWebView=_previousWebView;
@property(retain, nonatomic) UIWebView *nextWebView; // @synthesize nextWebView=_nextWebView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool restoringWebView; // @synthesize restoringWebView=_restoringWebView;
@property(retain, nonatomic) BLNewsItem *previousNewsItem; // @synthesize previousNewsItem=_previousNewsItem;
@property(retain, nonatomic) BLNewsItem *nextNewsItem; // @synthesize nextNewsItem=_nextNewsItem;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) BLNewsItem *newsItem; // @synthesize newsItem=_newsItem;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)markAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)openAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (id)webViewForItem:(id)arg1;
- (void)scrollToTop;
- (void)updateBarButtonItems;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

