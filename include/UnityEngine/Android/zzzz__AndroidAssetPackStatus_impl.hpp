#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackStatus.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidAssetPackStatus::AndroidAssetPackStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackStatus::AndroidAssetPackStatus()   {
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Pending{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Downloading{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Transferring{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Completed{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Failed{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Canceled{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::WaitingForWifi{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::NotInstalled{static_cast<int32_t>(0x8)};
