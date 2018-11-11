//
//  Adress.m
//  WS1YZ
//
//  Created by Youssef Zouhari on 24/04/15.
//  Copyright (c) 2015 Youssef Zouhari. All rights reserved.
//

#import "Address.h"

@implementation Address




-(id)initFull:(NSString*)street houseNumber:(int)houseNumber zipCode:(NSString *)zipcode city:(NSString *)city  {
    if(self = [super init]){
        _street = [street copy];
        _houseNumber = houseNumber;
        _zipCode = [zipcode copy];
        _city = [city copy];
        
    }
    return self;
}


-(NSString *) getAddressString{
    return [NSString stringWithFormat:
            @"%@ %i\r%@ %@" , _street,_houseNumber, _zipCode, _city];
}
@end
