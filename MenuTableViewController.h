//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AppDelegate, BluetoothManager, FMDatabase, MainViewController, NSArray, NSMutableDictionary, NSString, UIAlertController, UINavigationController, UIStoryboard, UIStoryboardSegue, UITableView;

@interface MenuTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIStoryboard *sb;
    UIAlertController *updateVersionAlertController;
    UIAlertController *exitAppAlertController;
    UIAlertController *motionCampController;
    UIAlertController *cantEnterCampController;
    UIAlertController *unlockingAlertController;
    UIAlertController *wifiLockController;
    UIAlertController *registerController;
    UIAlertController *locationEnableController;
    UIAlertController *recentSignCampController;
    UIAlertController *enterCampHintController;
    UIAlertController *locationAlertController;
    UIAlertController *bluetoothAlertController;
    UIAlertController *hotspotAlertController;
    UIAlertController *violationAlertController;
    BluetoothManager *btManager;
    AppDelegate *appDelegate;
    _Bool hasEnterMotionCamp;
    FMDatabase *myDB;
    long long currentSelectItem;
    UIStoryboard *storyboard;
    UINavigationController *rootNavController;
    MainViewController *mainVC;
    UIStoryboardSegue *uiStorybaordSegue;
    NSArray *menuItems;
    UITableView *_menuTable;
    NSMutableDictionary *_viewControllerCache;
}

@property(retain, nonatomic) NSMutableDictionary *viewControllerCache; // @synthesize viewControllerCache=_viewControllerCache;
@property(retain, nonatomic) UITableView *menuTable; // @synthesize menuTable=_menuTable;
- (void).cxx_destruct;
- (void)switchToLocationSettingPage;
- (void)switchToHotSpotSettingPage;
- (void)swithToInstallProfilePage;
- (void)installProfile;
- (void)autoLockAction:(id)arg1;
- (void)showViewControllerForSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)changeCellLabelColor:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)checkManagerItem;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startProfile;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
