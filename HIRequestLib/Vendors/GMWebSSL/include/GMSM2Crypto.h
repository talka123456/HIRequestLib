//
//  GMSM2Crypto.hpp
//  GMWebSSL
//
//  Created by 曹荻华 on 2021/11/7.
//

#ifndef GMSM2Crypto_hpp
#define GMSM2Crypto_hpp

#import <Foundation/Foundation.h>

@interface GMSM2Crypto : NSObject

+ (NSUInteger) textLength:(NSString*)text;
+ (NSString*) encryptText:(NSString *)ncsPlainText publicKey:(NSString *)pubKey;
+ (NSString*) decryptText:(NSString *)ncsCipherText privateKey:(NSString *)priKey;

@end


#endif /* GMSM2Crypto_hpp */
