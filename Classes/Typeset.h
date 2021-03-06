//
//  Typeset.h
//  Typeset
//
//  Created by apple on 15/5/25.
//  Copyright (c) 2015年 DeltaX. All rights reserved.
//

#ifndef Typesetting_Typesetting_h
#define Typesetting_Typesetting_h

#import <UIKit/UIKit.h>

//! Project version number for Typeset.
FOUNDATION_EXPORT double TypesetVersionNumber;

//! Project version string for Typeset.
FOUNDATION_EXPORT const unsigned char TypesetVersionString[];



#import "TypesetKit.h"
#import "TypesetKit+Color.h"
#import "TypesetKit+Match.h"
#import "NSString+Typeset.h"
#import "NSMutableAttributedString+Typeset.h"

#import "UILabel+Typeset.h"
#import "UITextField+Typeset.h"
#import "UITextView+Typeset.h"

#define TSBlock(block) ^(NSString *s) { return s.typeset.block.string; }

#endif
