#pragma once
#include "GlobalNamespace/zzzz__SongPackDataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SongPackDataType::SongPackDataType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackDataType::SongPackDataType() {}
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::SingleBeatmapLevelPack{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::MultipleBeatmapLevelPacks{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::SinglePreviewBeatmapLevelPack{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::MultiplePreviewBeatmapLevelPacks{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::SingleBeatmapLevelPackCollection{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::SongPackDataType GlobalNamespace::SongPackDataType::MultipleBeatmapLevelPackCollections{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
