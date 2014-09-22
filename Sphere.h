//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Jennifer Huang on 9/22/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject {
    NSArray *_center;
    float _radius;
}

@property(nonatomic) float radius;
@property(nonatomic, strong) NSArray* center;

-(void)setCenter:(NSArray *)center radius:(float)radius;

@end
