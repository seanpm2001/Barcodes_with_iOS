//
//  SalePlacemark.h
//  YardSale
//
//  Created by Oliver Drobnik on 21.05.14.
//  Copyright (c) 2014 Cocoanetics. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface SalePlacemark : MKPlacemark

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
