#import "PPSSignatureView.h"
#import <UIKit/UIKit.h>
#import <React/RCTView.h>
#import <React/RCTBridge.h>

@class RSSignatureViewManager;

@interface RSSignatureView : RCTView
@property (nonatomic, strong) PPSSignatureView *sign;
@property (nonatomic, strong) RSSignatureViewManager *manager;
-(void) onSaveButtonPressed;
-(void) onClearButtonPressed;
-(void) saveImageWithWatermark:(NSString*)watermark;
-(void) erase;
@end
