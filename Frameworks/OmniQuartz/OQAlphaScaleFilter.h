// Copyright 2004-2011 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import "OQSimpleFilter.h"

extern NSString * const OQAlphaScaleFilterName;
extern NSString * const OQAlphaScaleFilterValueKey;

@interface OQAlphaScaleFilter : OQSimpleFilter <OQConcreteSimpleFilter>
{
    CIImage   *inputImage;
    NSNumber  *inputScale;
}
@end
