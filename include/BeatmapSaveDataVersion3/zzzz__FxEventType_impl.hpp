#pragma once
#include "BeatmapSaveDataVersion3/zzzz__FxEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::FxEventType::FxEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FxEventType::FxEventType() {}
constexpr ::BeatmapSaveDataVersion3::FxEventType BeatmapSaveDataVersion3::FxEventType::Int{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::FxEventType BeatmapSaveDataVersion3::FxEventType::Float{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::FxEventType BeatmapSaveDataVersion3::FxEventType::Bool{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
