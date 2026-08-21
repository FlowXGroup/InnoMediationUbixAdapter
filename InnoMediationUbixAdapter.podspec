Pod::Spec.new do |s|
  s.name             = 'InnoMediationUbixAdapter'
  # 与 +platformSDKVersion 一致：FLN sdkVersion + Adapter 后缀
  s.version          = '6.2.0.18.0004'
  s.summary          = 'InnoMediation Ubix Adapter for FLNAdSDK'
  s.description      = 'Prebuilt custom mediation adapter bridging InnoMediationSDK and FLNAdSDK (sdkName: ubix).'
  s.homepage         = 'https://github.com/FlowXGroup/InnoMediationUbixAdapter'
  s.license          = { :type => 'Copyright', :text => 'Copyright © FlowXGroup. All rights reserved.' }
  s.author           = { 'FlowXGroup' => 'https://github.com/FlowXGroup' }
  s.source           = { :git => 'https://github.com/FlowXGroup/InnoMediationUbixAdapter.git', :tag => s.version.to_s }

  s.ios.deployment_target = '13.0'
  s.requires_arc = true
  s.static_framework = true

  # 预编译产物；宿主自行手动链入 InnoMediationSDK
  s.vendored_frameworks = 'dist/InnoMediationUbixAdapter.xcframework'
  s.dependency 'FLNAdSDK', '6.2.0.18'

  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-ObjC'
  }
  s.user_target_xcconfig = {
    'OTHER_LDFLAGS' => '-ObjC'
  }
end
