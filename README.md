# InnoMediationUbixAdapter

预编译 Adapter（`dist/InnoMediationUbixAdapter.xcframework`），对接 **FLNAdSDK**（`sdkName`: `ubix`）。

## 版本

| Adapter | FLNAdSDK |
|---------|----------|
| `6.2.0.18.0004` | `6.2.0.18` |

## 本地接入（Demo）

```ruby
platform :ios, '13.0'
use_frameworks!

pod 'FLNAdSDK', :git => 'https://github.com/FlowXGroup/FLNAdSDK-iOS.git', :tag => '6.2.0.18'
pod 'InnoMediationUbixAdapter', :path => './UbixAdapterSDK'
```

- **InnoMediationSDK**：由 App 手动链入（不要用 Pod 再引一份）
- **FLNAdSDK / Ubix**：走 CocoaPods

## 打包

需已 `pod install`（提供 `Pods/FLNAdSDK`），然后：

```bash
./scripts/package_ubix_adapter_sdk.sh
```

产物：`UbixAdapterSDK/dist/InnoMediationUbixAdapter.xcframework`

## License

Copyright © FlowXGroup. All rights reserved.
