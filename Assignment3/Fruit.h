//
//  Fruit.h
//  Assignment3
//
//  Created by Build User on 2/4/14.
//  Copyright (c) 2014 Pitt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fruit : NSObject

@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * shape;
@property (nonatomic, strong) NSString * color;
@property (nonatomic, strong) NSURL * url;

-initWithWithName:(NSString *) inName andColor:(NSString *) inColor andShape:(NSString *) inShape;

-(NSString *) description;

@end
