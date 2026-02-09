#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoTimeSource.hpp"
#include "UnityEngine/Video/zzzz__VideoTimeSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoTimeSource::VideoTimeSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoTimeSource::VideoTimeSource()   {
}
constexpr ::UnityEngine::Video::VideoTimeSource  UnityEngine::Video::VideoTimeSource::AudioDSPTimeSource{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoTimeSource  UnityEngine::Video::VideoTimeSource::GameTimeSource{static_cast<int32_t>(0x1)};
