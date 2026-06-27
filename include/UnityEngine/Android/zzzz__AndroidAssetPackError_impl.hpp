#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackError.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidAssetPackError::AndroidAssetPackError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPackError::AndroidAssetPackError()   {
}
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NoError{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AppUnavailable{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::PackUnavailable{static_cast<int32_t>(0xfffffffe)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InvalidRequest{static_cast<int32_t>(0xfffffffd)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::DownloadNotFound{static_cast<int32_t>(0xfffffffc)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::ApiNotAvailable{static_cast<int32_t>(0xfffffffb)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NetworkError{static_cast<int32_t>(0xfffffffa)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AccessDenied{static_cast<int32_t>(0xfffffff9)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InsufficientStorage{static_cast<int32_t>(0xfffffff6)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::PlayStoreNotFound{static_cast<int32_t>(0xfffffff5)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NetworkUnrestricted{static_cast<int32_t>(0xfffffff4)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AppNotOwned{static_cast<int32_t>(0xfffffff3)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InternalError{static_cast<int32_t>(0xffffff9c)};
