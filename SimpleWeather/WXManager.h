//
//  WXManager.h
//  SimpleWeather
//
//  Created by 中坂 雄平 on 2014/03/08.
//  Copyright (c) 2014年 中坂 雄平. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

//1
#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

//2
+ (instancetype)sharedManager;

//3
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

//4
- (void)findCurrentLocation;


@end
