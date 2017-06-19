/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#ifdef SD_WEBP

#import <UIKit/UIKit.h>

@interface UIImage (WebP)

+ (nullable UIImage *)sd_imageWithWebPData:(nullable NSData *)data;

@end

#endif
