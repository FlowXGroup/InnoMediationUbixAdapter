//
//  ADCustomAdapterFLNNativeExpress.h
//  InnoAdsMediationDemo
//
//  Created by fan on 2026/3/31.
//

#import <Foundation/Foundation.h>
#import <InnoMediationSDK/ADRFMediationCustomAdapterNativeAd.h>
#import <FLNAdSDK/FLNNativeExpressAd.h>

NS_ASSUME_NONNULL_BEGIN

/// FLN 模板信息流适配器：继承 ADRFMediationCustomAdapterNativeAd，通过 trackNativeAd* 与聚合对齐；广告视图须为 ADRFMediationCustomAdapterNativeAdView 子类
@interface ADCustomAdapterFLNNativeExpress : ADRFMediationCustomAdapterNativeAd <FLNNativeExpressAdDelegate>

@end

NS_ASSUME_NONNULL_END
