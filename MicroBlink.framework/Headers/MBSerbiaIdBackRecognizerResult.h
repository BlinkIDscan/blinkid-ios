//
//  MBSerbiaIdBackRecognizerResult.h
//  MicroBlinkDev
//
//  Created by Dino Gustin on 22/05/2018.
//

#import "MBLegacyMRTDRecognizerResult.h"

#import "MBFullDocumentImageResult.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Class representing values obtained when scanning back side of Serbian ID
 */
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBSerbiaIdBackRecognizerResult : MBLegacyMRTDRecognizerResult<NSCopying, MBFullDocumentImageResult>

MB_INIT_UNAVAILABLE



@end

NS_ASSUME_NONNULL_END