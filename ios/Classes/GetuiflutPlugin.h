#import <Flutter/Flutter.h>

@interface GetuiflutPlugin : NSObject<FlutterPlugin>
@property FlutterMethodChannel *channel;

+ (instancetype) sharedObject;
- (void)  saveDeviceToken:(NSData*) token;

@end
