//
//  GMWebSSL.h
//  GMWebSSL
//
//  Created by 曹荻华 on 2021/11/7.
//

#import <Foundation/Foundation.h>

@interface GMWebSSL : NSObject

+(bool) GMWebInit;

+(bool) GMWebGet:(NSInteger) port withHostName:(NSString*)hostname withUri:(NSString*)uri withHttpHeader:(NSArray*)http_header withContentLength:(NSInteger*)pcontent_length withStatusCode:(NSInteger*)status_code withResponseHeader:(NSArray**) response_header withResponse:(NSData**) response;

+(bool) GMWebPost:(NSInteger) port withHostName:(NSString*)hostname withUri:(NSString*)uri withHttpHeader:(NSArray*)http_header withPostContentData:(NSData*) post_content_data withContentLength:(NSInteger*)pcontent_length withStatusCode:(NSInteger*)status_code withResponseHeader:(NSArray**) response_header withResponse:(NSData**) response;

@end
