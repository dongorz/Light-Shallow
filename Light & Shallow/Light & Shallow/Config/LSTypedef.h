//
//  LSTypedef.h
//  Light & Shallow
//
//  Created by 王珑宾 on 2018/10/25.
//  Copyright © 2018年 Ronb X. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef LSTypedef_h
#define LSTypedef_h

typedef NS_ENUM(NSUInteger, LSWatermarkType)
{
    /* Use pictures as watermarks. */
    LSWatermarkTypeImage = 0,
    /* Use text as watermarks. */
    LSWatermarkTypeText = 1
};

#endif /* LSTypedef_h */