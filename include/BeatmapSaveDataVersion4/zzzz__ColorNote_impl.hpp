#pragma once
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty: "::BeatmapSaveDataCommon::NoteColorType", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty:
// "::BeatmapSaveDataCommon::NoteCutDirection", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::ColorNote::ColorNote(int32_t x, int32_t y, int32_t a, ::BeatmapSaveDataCommon::NoteColorType c, ::BeatmapSaveDataCommon::NoteCutDirection d) noexcept {
  this->x = x;
  this->y = y;
  this->a = a;
  this->c = c;
  this->d = d;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::ColorNote::ColorNote() {}
