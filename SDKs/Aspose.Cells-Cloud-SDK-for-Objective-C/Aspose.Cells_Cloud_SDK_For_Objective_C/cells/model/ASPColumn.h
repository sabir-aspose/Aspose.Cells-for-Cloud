#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"
#import "ASPLinkElement.h"


@protocol ASPColumn
@end

@interface ASPColumn : ASPObject


@property(nonatomic) NSNumber* groupLevel;

@property(nonatomic) NSNumber* index;

@property(nonatomic) NSNumber* isHidden;

@property(nonatomic) NSNumber* width;

@property(nonatomic) ASPLinkElement* style;

@property(nonatomic) ASPLink* link;

@end
