//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Utility : NSObject
{
}

+ (_Bool)getUserDefaultIsThreeAlertModeValue;
+ (void)saveUserDefaultIsThreeAlertMode:(_Bool)arg1;
+ (long long)getUserDefaultUnlockMethodTypeValue;
+ (void)saveUserDefaultUnlockMethodType:(long long)arg1;
+ (long long)elapsedBootTime;
+ (long long)getUserDefaulttElapsedBootTimeValue;
+ (void)saveUserDefaultElapsedBootTimeStatus:(long long)arg1;
+ (id)getHintDayTime:(id)arg1;
+ (void)saveHintDayTime:(id)arg1 andKey:(id)arg2;
+ (void)saveHintEveryDayTime:(id)arg1;
+ (id)generateSHA256:(id)arg1;
+ (void)registerEveryDayAlerts;
+ (id)stringToDate:(id)arg1 andDateFormat:(id)arg2;
+ (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (void)cancelEveryDayNortifications;
+ (id)contentsAtPath:(id)arg1;
+ (id)cutPrefixPartString:(id)arg1;
+ (id)getAPPVersion;
+ (float)getOSVersion;
+ (unsigned long long)detectFreeSpace;
+ (_Bool)deleteFile:(id)arg1 andExtensionName:(id)arg2 andFilePath:(id)arg3;
+ (_Bool)isFileExistAtPath:(id)arg1 andExtensionName:(id)arg2 andFilePath:(id)arg3;
+ (_Bool)writeFile:(id)arg1 andExtensionName:(id)arg2 andFilePath:(id)arg3 andcontent:(id)arg4;
+ (_Bool)creatFile:(id)arg1 andExtensionName:(id)arg2 andFilePath:(id)arg3;
+ (id)getCachePath;
+ (void)clearUserDefault:(id)arg1;
+ (void)userdefaultTransferToKeyChain;
+ (void)newCampUserdefaultTransferToSqlLite;
+ (void)permanentUserdefaultTransferToSqlLite;
+ (_Bool)isEqualTimeCompareByJustDate:(id)arg1 andNow:(id)arg2;
+ (unsigned long long)conpareDetailDateIsEarlierOrLater:(id)arg1 andNow:(id)arg2;
+ (id)licenseDay:(id)arg1 withDays:(long long)arg2;
+ (_Bool)isLicenseCanUse:(id)arg1;
+ (long long)getDeviceSize;
+ (id)getBackupDeviceId;
+ (_Bool)backupDeviceIdToKeyChain:(id)arg1;
+ (_Bool)saveDeviceIdToKeyChain:(id)arg1;
+ (id)genDeviceID;
+ (_Bool)checkDeviceIdValid:(id)arg1;
+ (id)getDeviceIdAfter1_3_3;
+ (id)get_device_id;
+ (id)getSHA256DeviceID;
+ (id)getMobileconfigOldId;
+ (id)getDeviceIdBefore1_3;
+ (id)getMobileconfigId;
+ (void)create_deleteProfile_file:(id)arg1;
+ (void)create_unlock_file:(id)arg1;
+ (void)create_lock_file:(id)arg1;
+ (_Bool)getNetworkInterfaceInfo;
+ (id)getRdm16bitsChar;
+ (id)getWifiSessionKeyStringCompose:(id)arg1;
+ (id)parseFinalWifiSecurityResult:(id)arg1;
+ (id)parseSessionKey:(id)arg1;
+ (id)getWifiPhase1StringCompose:(id)arg1;
+ (id)composeAESParams:(id)arg1;
+ (id)base64EncodeURLSafe:(id)arg1;
+ (id)base64DecodeURLSafe:(id)arg1;
+ (id)decodePercentURLSafe:(id)arg1;
+ (id)encodePercentURLSafe:(id)arg1;
+ (id)getDeviceIdSHA256Encode;
+ (id)getSHA256DeviceID:(id)arg1;
+ (id)parseQRCodeData:(long long)arg1 andSplitData:(id)arg2;
+ (long long)getExceptCountDownValue;
+ (void)saveExceptCountDown:(long long)arg1;
+ (long long)getUserDefaultIsRegisterValue;
+ (void)saveUserDefaultIsRegister:(long long)arg1;
+ (void)saveNormalCampStyle:(long long)arg1;
+ (long long)getNormalCampStyleValue;
+ (id)getBackupIv;
+ (id)getIv;
+ (void)saveBackupIv:(id)arg1;
+ (void)saveIv:(id)arg1;
+ (id)getSessionQ;
+ (void)saveSessionQ:(id)arg1;
+ (id)getSessionKey;
+ (void)saveSessionKey:(id)arg1;
+ (id)getNewCampSitePolygonInfo;
+ (void)saveNewCampSitePolygonInfo:(id)arg1;
+ (id)getTransferSitePoygon;
+ (void)saveTransferSitePolygon:(id)arg1;
+ (id)getTransferSiteName;
+ (void)saveTransferSiteName:(id)arg1;
+ (id)getNewCampSiteName;
+ (void)saveNewCampSiteName:(id)arg1;
+ (void)saveNewCampSiteName:(id)arg1 andNewCampPolygonInfo:(id)arg2;
+ (id)getPermanentSiteName;
+ (void)savePermanentSiteName:(id)arg1;
+ (id)getSystemVersion;
+ (void)saveSystemVersion:(id)arg1;
+ (id)getSystemDate;
+ (void)saveSystemDate:(id)arg1;
+ (id)getSystemPhoneTag;
+ (void)saveSystemPhoneTag:(id)arg1;
+ (id)getPermanentPolygonInfo;
+ (void)savePermanentPolygonInfo:(id)arg1;
+ (void)savePermanentSiteName:(id)arg1 andPermanentPolygonInfo:(id)arg2;
+ (id)getRsaPublicExp;
+ (void)saveRsaPublicExp:(id)arg1;
+ (id)getRsaPublicMod;
+ (void)saveRsaPublicMod:(id)arg1;
+ (id)getAesKey;
+ (void)saveAesKey:(id)arg1;
+ (id)getAutoLockSchedule;
+ (void)saveAutoLockSchedule:(id)arg1;
+ (id)getIsAutoLockEnabled;
+ (void)saveIsAutoLockEnabled:(id)arg1;
+ (id)getUserDefaultLockHintText;
+ (void)saveUserDefaultLockHintText:(id)arg1;
+ (long long)getUserDefaultIsJBValue;
+ (void)saveUserDefaultIsJB:(long long)arg1;
+ (long long)getUserDefaultEventStatusValue;
+ (void)saveUserDefaultEventStatus:(long long)arg1;
+ (long long)getUserDefaultIsAdminModeValue;
+ (void)saveUserDefaultIsAdminMode:(long long)arg1;
+ (long long)getUserDefaultTransferSiteStatusModeValue;
+ (void)saveUserDefaultTransferSiteStatusMode:(long long)arg1;
+ (long long)getUserDefaultIsMobileInitialInstallValue;
+ (void)saveUserDefaultIsMobileInitialInstallStatus:(long long)arg1;
+ (long long)getUserDefaultIsUnLockingValue;
+ (void)saveUserDefaultIsUnlockingStatus:(long long)arg1;
+ (long long)getUserDefaultMobileLockValue;
+ (void)saveUserDefaultMobileLockStatus:(long long)arg1;
+ (id)getUserDefaultTitleValue;
+ (void)saveUserDefaultTitleStatus:(id)arg1;
+ (long long)getUserDefaultPageValue;
+ (void)saveUserDefaultPageStatus:(long long)arg1;
+ (void)createPermanentDBTable;
+ (_Bool)checkNotification;
+ (int)requestBatteryInfo;
+ (id)roundCornerOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;

@end
