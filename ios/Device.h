
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDeviceSpec.h"

@interface Device : NSObject <NativeDeviceSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Device : NSObject <RCTBridgeModule>
#endif

@end
