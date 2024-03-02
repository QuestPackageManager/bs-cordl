#pragma once
#include "BeatmapSaveDataVersion4/zzzz__Chain_def.hpp"
// Ctor Parameters [CppParam { name: "tx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ty", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::Chain::Chain(int32_t tx, int32_t ty, int32_t c, float_t s) noexcept {
  this->tx = tx;
  this->ty = ty;
  this->c = c;
  this->s = s;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::Chain::Chain() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
