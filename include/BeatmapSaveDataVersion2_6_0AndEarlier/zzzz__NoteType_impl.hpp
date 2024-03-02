#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::NoteType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::NoteType() {}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::NoteA{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::NoteB{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::GhostNote{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::Bomb{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteType::None{ static_cast<int32_t>(0xffffffff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
