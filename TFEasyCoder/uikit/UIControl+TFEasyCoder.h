//
//  UIControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIControl,UIControl *);

@interface UIControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIControl, UIControl *);
TF_EC_MINSTANCE_INT(UIControl,UIControl *);


TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIControl ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIControl ,long long,contentHorizontalAlignment);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIControl ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIControl ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIControl ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIControl ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIControl ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIControl ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIControl);


@end