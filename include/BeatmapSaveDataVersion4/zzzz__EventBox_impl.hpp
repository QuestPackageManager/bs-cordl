#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/EventBox.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
// Ctor Parameters [CppParam { name: "f", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "l", ty:
// "::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*,::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatmapSaveDataVersion4::EventBox::EventBox(int32_t f, int32_t e, ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> l) noexcept {
  this->f = f;
  this->e = e;
  this->l = l;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::EventBox::EventBox() {}
