#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoTimeReference.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeReference_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoTimeReference::VideoTimeReference(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoTimeReference::VideoTimeReference()   {
}
constexpr ::UnityEngine::Video::VideoTimeReference  UnityEngine::Video::VideoTimeReference::Freerun{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoTimeReference  UnityEngine::Video::VideoTimeReference::InternalTime{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoTimeReference  UnityEngine::Video::VideoTimeReference::ExternalTime{static_cast<int32_t>(0x2)};
