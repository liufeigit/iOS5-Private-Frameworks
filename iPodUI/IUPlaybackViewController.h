/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

@class MPAVItem, MPPlaybackTitlesView, MPTransitionController, MPViewController, UINavigationButton, UIView;

@interface IUPlaybackViewController : IUiPodViewController
{
    MPViewController *_activeViewController;
    UINavigationButton *_backButton;
    UIView *_backstop;
    MPPlaybackTitlesView *_titlesView;
    MPTransitionController *_transitionController;
    struct __CFBag *_ignoredChangeTypes;
    MPAVItem *_item;
    int _interfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    int _pendingInterfaceOrientation;
    unsigned int _exited:1;
    unsigned int _usingVideoOut:1;
    unsigned int _wantsVideoLayer:1;
}

@property(nonatomic) int orientation; // @synthesize orientation=_interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_reloadForTransitionFromItem:(id)arg1 toItem:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_reloadFeederForDataSource:(id)arg1;
- (void)_performTransition:(id)arg1 toController:(id)arg2;
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned int)arg1;
- (void)_backButtonAction:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)updateArtworkToImageAtTimeMarker:(id)arg1;
- (void)_accessorySplashViewWillAppearNotification:(id)arg1;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned int)arg2;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned int)arg2;
- (void)_transitionFinished:(id)arg1;
@property(nonatomic) BOOL wantsVideoLayer;
@property(nonatomic) BOOL usingVideoOut;
- (BOOL)shouldIgnoreChangeType:(unsigned int)arg1;
- (void)setWantsVideoLayer:(BOOL)arg1 item:(id)arg2;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldShowNowPlayingButton;
- (void)reloadData;
- (void)loadView;
- (void)deviceOrientationChanged:(int)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)isStatusBarHidden;
- (int)statusBarStyle;
- (void)performTransition:(id)arg1;
- (void)exitPlayerForAccessorySplash;
- (void)exitPlayerAnimated:(BOOL)arg1;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (id)createViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (id)createTransitionControllerForChangeToInterfaceOrientation:(int)arg1 fromInterfaceOrientation:(int)arg2;
- (id)createTransitionControllerForChangeToItem:(id)arg1 fromItem:(id)arg2;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (id)player;
- (void)dealloc;
- (id)init;

@end

