//
//  Adress.h
//  WS1YZ
//
//  Created by Youssef Zouhari on 24/04/15.
//  Copyright (c) 2015 Youssef Zouhari. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Address : NSObject

@property (nonatomic, copy) NSString *street;
@property (nonatomic) int houseNumber;
@property (nonatomic, copy) NSString *zipCode;
@property (nonatomic, copy) NSString *city;

-(id) initFull:(NSString*)street houseNumber:(int)houseNumber zipCode:(NSString*)zipcode city:(NSString*)city;

-(NSString *) getAddressString;

@end

