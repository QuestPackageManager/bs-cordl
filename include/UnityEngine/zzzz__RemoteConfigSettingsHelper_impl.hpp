#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettingsHelper_def.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettingsHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag::__RemoteConfigSettingsHelper__Tag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag::__RemoteConfigSettingsHelper__Tag() {}
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kUnknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kIntVal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kInt64Val{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kUInt64Val{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kDoubleVal{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kBoolVal{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kStringVal{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kArrayVal{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kMixedArrayVal{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kMapVal{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::__RemoteConfigSettingsHelper__Tag UnityEngine::__RemoteConfigSettingsHelper__Tag::kMaxTags{ static_cast<int32_t>(0xa) };
// Ctor Parameters []
constexpr ::UnityEngine::RemoteConfigSettingsHelper::RemoteConfigSettingsHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
