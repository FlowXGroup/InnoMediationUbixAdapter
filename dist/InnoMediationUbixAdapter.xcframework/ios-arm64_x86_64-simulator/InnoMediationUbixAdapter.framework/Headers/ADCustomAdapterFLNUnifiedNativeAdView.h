//
//  ADCustomAdapterFLNUnifiedNativeAdView.h
//  InnoAdsMediationDemo
//
//  Created by fan on 2026/3/31.
//

#import <UIKit/UIKit.h>
#import <FLNAdSDK/FLNUnifiedNativeAdView.h>
#import <FLNAdSDK/FLNUnifiedNativeAdDataObject.h>
#import <InnoMediationSDK/ADRFMediationAdapterNativeAdData.h>

NS_ASSUME_NONNULL_BEGIN

@class ADCustomAdapterFLNUnifiedNativeAdView;

@protocol ADCustomAdapterFLNUnifiedNativeAdViewDelegate <NSObject>
- (void)flnAdapter_unifiedNativeAdViewDidFinishRegister:(ADCustomAdapterFLNUnifiedNativeAdView *)view;
- (void)flnAdapter_unifiedNativeAdViewDidExpose:(ADCustomAdapterFLNUnifiedNativeAdView *)view;
- (void)flnAdapter_unifiedNativeAdViewDidClick:(ADCustomAdapterFLNUnifiedNativeAdView *)view;
- (void)flnAdapter_unifiedNativeAdViewDidCloseLandingPage:(ADCustomAdapterFLNUnifiedNativeAdView *)view;
- (void)flnAdapter_unifiedNativeAdViewDidClose:(ADCustomAdapterFLNUnifiedNativeAdView *)view;
@end

/// FLN 自渲染信息流承载视图（与 ADCustomAdapterFLNUnifiedNativeAd 配合）
@interface ADCustomAdapterFLNUnifiedNativeAdView : FLNUnifiedNativeAdView <ADRFMediationAdapterNativeAdViewDelegate, FLNUnifiedNativeAdViewDelegate>

@property (nonatomic, strong) FLNUnifiedNativeAdDataObject *flnDataObject;

/// InnoMediation 可能对广告视图做 KVC（如 mark），需声明避免崩溃
@property (nonatomic, strong, nullable) id mark;

@property (nonatomic, weak, nullable) id<ADCustomAdapterFLNUnifiedNativeAdViewDelegate> adapterDelegate;

@end

NS_ASSUME_NONNULL_END
