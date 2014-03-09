//
//  WXClient.h
//  SimpleWeather
//
//  Created by 中坂 雄平 on 2014/03/08.
//  Copyright (c) 2014年 中坂 雄平. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

@interface WXClient : NSObject

@property (nonatomic, strong) NSURLSession *session;

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end