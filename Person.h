//
//  Person.h
//  WS1YZ
//
//  Created by Youssef Zouhari on 24/04/15.
//  Copyright (c) 2015 Youssef Zouhari. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "Address.h"

@interface Person : NSObject
@property (nonatomic, copy) NSString *picture;
@property (nonatomic, copy) NSString *surname;
@property (nonatomic, copy) NSString *lastname;
@property (nonatomic) CLLocationCoordinate2D locationCoordinate;
@property (nonatomic) Address* address;
@property (nonatomic, copy) NSString * phoneNumber;
@end
