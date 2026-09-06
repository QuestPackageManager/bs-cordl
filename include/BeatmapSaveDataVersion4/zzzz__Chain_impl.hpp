#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Chain.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Chain_def.hpp"
// Ctor Parameters [CppParam { name: "tx", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ty", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "c", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatmapSaveDataVersion4::Chain::Chain(int32_t tx, int32_t ty, int32_t c, float_t s) noexcept {
  this->tx = tx;
  this->ty = ty;
  this->c = c;
  this->s = s;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::Chain::Chain() {}
