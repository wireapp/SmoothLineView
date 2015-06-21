//
//  ENDDrawPathOperation.h
//  Pods
//
//  Created by Andreas Kompanez on 21.06.15.
//
//

#import <Foundation/Foundation.h>

#import "ENDDrawOperation.h"

@class ENDDrawPathShadow;
@class ENDBrush;



@interface ENDDrawPathOperation : NSObject <ENDDrawOperation>

@property (nonatomic, copy) ENDBrush *brush;

- (void)addSubpath:(UIBezierPath *)subpath;

@end
