#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"
#import "ASPLinkElement.h"


@protocol ASPWorksheets
@end

@interface ASPWorksheets : ASPObject


@property(nonatomic) NSArray<ASPLinkElement>* worksheetList;

@property(nonatomic) ASPLink* link;

@end
