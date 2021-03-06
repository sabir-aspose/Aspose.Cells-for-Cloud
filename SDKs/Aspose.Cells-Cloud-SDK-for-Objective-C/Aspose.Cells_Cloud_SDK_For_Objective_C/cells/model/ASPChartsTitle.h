#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPFont.h"
#import "ASPLink.h"
#import "ASPDrawingLine.h"
#import "ASPDrawingArea.h"
#import "ASPLinkElement.h"


@protocol ASPChartsTitle
@end

@interface ASPChartsTitle : ASPObject


@property(nonatomic) NSNumber* isVisible;

@property(nonatomic) NSString* linkedSource;

@property(nonatomic) NSNumber* rotationAngle;

@property(nonatomic) NSString* text;

@property(nonatomic) NSString* textDirection;

@property(nonatomic) NSString* textHorizontalAlignment;

@property(nonatomic) NSString* textVerticalAlignment;

@property(nonatomic) ASPDrawingArea* area;

@property(nonatomic) NSNumber* autoScaleFont;

@property(nonatomic) NSString* backgroundMode;

@property(nonatomic) ASPDrawingLine* border;

@property(nonatomic) ASPFont* font;

@property(nonatomic) NSNumber* isAutomaticSize;

@property(nonatomic) NSNumber* isInnerMode;

@property(nonatomic) NSNumber* shadow;

@property(nonatomic) NSArray<ASPLinkElement>* shapeProperties;

@property(nonatomic) NSNumber* width;

@property(nonatomic) NSNumber* height;

@property(nonatomic) NSNumber* X;

@property(nonatomic) NSNumber* Y;

@property(nonatomic) ASPLink* link;

@end
