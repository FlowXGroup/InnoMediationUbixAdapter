# InnoMediationUbixAdapter

InnoMediation 自定义 Adapter（预编译），对接 **FLNAdSDK**（后台 `sdkName`: `ubix`）。

## 版本

| Adapter | FLNAdSDK | InnoMediationSDK |
|---------|----------|------------------|
| `6.2.0.18.0004` | `6.2.0.18` | `4.1.1.05191` |

## 接入

```ruby
platform :ios, '13.0'
use_frameworks!

# FLNAdSDK 不在 CocoaPods trunk，需声明 git 源
pod 'FLNAdSDK', :git => 'https://github.com/FlowXGroup/FLNAdSDK-iOS.git', :tag => '6.2.0.18'
pod 'InnoMediationUbixAdapter',
  :git => 'https://github.com/FlowXGroup/InnoMediationUbixAdapter.git',
  :tag => '6.2.0.18.0004'
```

- **InnoMediationSDK `4.1.1.05191`（或兼容版本）**：由宿主 App **手动链入**（本 Pod 不包含聚合 SDK）
- **FLNAdSDK / Ubix Adapter**：由 CocoaPods 拉取

若同名 tag 曾重建，安装前清缓存：

```bash
pod cache clean InnoMediationUbixAdapter --all
pod update InnoMediationUbixAdapter --no-repo-update
```

## 仓库内容

- `dist/InnoMediationUbixAdapter.xcframework`（预编译）
- `InnoMediationUbixAdapter.podspec`
- 不含 Adapter 源码

## License

Copyright © FlowXGroup. All rights reserved.
