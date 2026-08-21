//
//  ADCustomAdapterFLNNativeExpressAdView.h
//  InnoAdsMediationDemo
//
//  Created by fan on 2026/3/31.
//

#import <UIKit/UIKit.h>
#import <InnoMediationSDK/ADRFMediationCustomAdapterNativeAdView.h>
#import <InnoMediationSDK/ADRFMediationAdapterNativeAdData.h>
#import <FLNAdSDK/FLNNativeExpressAdView.h>

NS_ASSUME_NONNULL_BEGIN

@class ADCustomAdapterFLNNativeExpressAdView;
@protocol ADCustomAdapterFLNNativeExpressAdViewDelegate <NSObject>

- (void)customNativeExpressViewRenderSuccess:(ADCustomAdapterFLNNativeExpressAdView *)nativeView;

@end

/// 模板信息流承载视图：必须继承 ADRFMediationCustomAdapterNativeAdView，聚合 trackNativeAd* 才接收正确类型
@interface ADCustomAdapterFLNNativeExpressAdView : ADRFMediationCustomAdapterNativeAdView

/// InnoMediationSDK 会通过 KVC 读写 `mark`，自定义承载视图必须声明，否则崩溃：valueForUndefinedKey "mark"
@property (nonatomic, strong, nullable) id mark;

@property (nonatomic, weak, nullable) id<ADCustomAdapterFLNNativeExpressAdViewDelegate> delegate;
@property (nonatomic, strong) FLNNativeExpressAdView *flnNativeAdView;

@end

NS_ASSUME_NONNULL_END
