//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface LocateDebugModel : NSObject
{
    long long useCoordinateCount;
    double useHorizontalAccuracy;
    double cuseCeckHorizontalAccuracy;
    long long unlockMode;
    long long polygonSetCount;
    int usePolygonSetCount;
    _Bool isPointInPolygonIsInside;
    _Bool isPointInPolygonIsNearBoundary;
    NSString *pointX;
    NSString *pointY;
    _Bool isNearBoundaryAccuracy;
    NSString *initGetLocateTime;
    NSString *getLocateTime;
    NSString *useLocationTime;
    long long gpsUseCount;
    NSMutableArray *gpsAccuracyAry;
    NSString *exeFinishTime;
    NSString *campAccuracy;
    NSString *campDistance;
    NSString *minDistance;
    _Bool isInCamp;
    _Bool isTimeOut;
    NSMutableArray *gpsAccuracyInSideCalculateAry;
    NSMutableArray *gpsAccuracyNearCalculateAry;
    NSMutableArray *gpsAccuracyDinCalculateAry;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)init;
- (id)getMinDistance;
- (id)getCurrentTime;
- (_Bool)getIsTimeOut;
- (_Bool)getIsInCamp;
- (id)getCampDistance;
- (id)getCampAccuracy;
- (id)getExeFinishTime;
- (id)getGPSAccuracyInSideCalculateAry;
- (id)getGPSAccuracyNearCalculateAry;
- (id)getGPSAccuracyDinCalculateAry;
- (id)getGPSAccuracyAry;
- (long long)getGPSModeCount;
- (id)getUseLocationTime;
- (id)getInitGetLocationTime;
- (id)getInitUnLockTime;
- (_Bool)getisNearBoundaryAccuracy;
- (id)getPointY;
- (id)getPointX;
- (_Bool)getisPointInPolygonIsInside;
- (int)getUsePolygonSetCount;
- (long long)getPolygonSetCount;
- (long long)getUnlockMode;
- (double)getCuseCeckHorizontalAccuracy;
- (double)getUseHorizontalAccuracy;
- (long long)getUseCoordinateCount;
- (void)setIsTimeOut:(_Bool)arg1;
- (void)setIsInCamp:(_Bool)arg1;
- (void)setMinDistance:(id)arg1;
- (void)setCampDistance:(id)arg1;
- (void)setCampAccuracy:(id)arg1;
- (void)setExeFinishTime:(long long)arg1;
- (void)setGPSAccuracyDinCalculateAry:(double)arg1;
- (void)setGPSAccuracyNearCalculateAry:(double)arg1;
- (void)setGPSAccuracyInSideCalculateAry:(id)arg1;
- (void)setGPSAccuracyAry:(double)arg1;
- (void)setGPSModeCount:(long long)arg1;
- (void)setUseLocationTime:(long long)arg1;
- (void)setInitGetLocationTime:(long long)arg1;
- (void)setInitUnLockTime:(long long)arg1;
- (void)setisNearBoundaryAccuracy:(_Bool)arg1;
- (void)setPointY:(id)arg1;
- (void)setPointX:(id)arg1;
- (void)setisPointInPolygonIsInside:(_Bool)arg1;
- (void)setUsePolygonSetCount:(int)arg1;
- (void)setPolygonSetCount:(long long)arg1;
- (void)setUnlockMode:(long long)arg1;
- (void)setCuseCeckHorizontalAccuracy:(double)arg1;
- (void)setUseHorizontalAccuracy:(double)arg1;
- (void)setUseCoordinateCount:(long long)arg1;

@end

