//
//  PXBitmapImporter.h
//  Pixen
//
//  Created by Andy Matuschak on 8/25/05.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PXBitmapImporter : NSObject {

}

+ sharedBitmapImporter;
- (NSArray *)colorsInBMPData:(NSData *)data;

@end
