//
//  WXCondition.h
//  SimpleWeather
//
//  Created by 中坂 雄平 on 2014/03/08.
//  Copyright (c) 2014年 中坂 雄平. All rights reserved.
//

#import <Mantle.h>

// 1
@interface WXCondition : MTLModel <MTLJSONSerializing>

// 2
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *humidity;
@property (nonatomic, strong) NSNumber *temperature;
@property (nonatomic, strong) NSNumber *tempHigh;
@property (nonatomic, strong) NSNumber *tempLow;
@property (nonatomic, strong) NSString *locationName;
@property (nonatomic, strong) NSData *sunrise;
@property (nonatomic, strong) NSData *sunset;
@property (nonatomic, strong) NSString *conditionDescription;
@property (nonatomic, strong) NSString *condition;
@property (nonatomic, strong) NSNumber *windBearing;
@property (nonatomic, strong) NSNumber *windSpeed;
@property (nonatomic, strong) NSString *icon;

// 3
- (NSString *)imageName;

@end
