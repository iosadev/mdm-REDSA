//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class AppDelegate, FMDatabase, NSString, UIAlertController, UIBarButtonItem, UIButton, UILabel, UITextField, UIView;

@interface UnLockViewController : UIViewController <UITextFieldDelegate>
{
    AppDelegate *appDelegate;
    NSString *passCode;
    int OTP;
    NSString *key;
    NSString *CHARS;
    UIAlertController *alertController;
    _Bool is_remove_allowed;
    FMDatabase *myDB;
    UIBarButtonItem *_sidebarButton;
    UILabel *_showCodeLb;
    UIButton *_pwdUnlockBtn;
    UIView *_pwdUnLockIconView;
    UILabel *_unlockHintLb;
    UITextField *_pwdTF;
}

@property(nonatomic) __weak UITextField *pwdTF; // @synthesize pwdTF=_pwdTF;
@property(nonatomic) __weak UILabel *unlockHintLb; // @synthesize unlockHintLb=_unlockHintLb;
@property(nonatomic) __weak UIView *pwdUnLockIconView; // @synthesize pwdUnLockIconView=_pwdUnLockIconView;
@property(nonatomic) __weak UIButton *pwdUnlockBtn; // @synthesize pwdUnlockBtn=_pwdUnlockBtn;
@property(nonatomic) __weak UILabel *showCodeLb; // @synthesize showCodeLb=_showCodeLb;
@property(nonatomic) __weak UIBarButtonItem *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (long long)search_index:(BOOL)arg1;
- (long long)decode:(id)arg1;
- (id)encode:(int)arg1;
- (_Bool)comparePassword:(id)arg1;
- (void)unLockAction:(id)arg1;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)dismissKeyboard;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)textColorTransferCheck:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

