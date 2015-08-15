//
//  GravatarUrlBuilder.h
//  PicChat
//
//  Created by Lohit Talasila on 2015-05-22.
//

#import <Foundation/Foundation.h>

@interface GravatarUrlBuilder : NSObject

+ (NSURL *)getGravatarUrl:(NSString *)email;

@end
