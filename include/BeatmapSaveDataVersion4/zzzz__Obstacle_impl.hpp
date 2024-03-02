#pragma once
#include "BeatmapSaveDataVersion4/zzzz__Obstacle_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::Obstacle::Obstacle(int32_t x, int32_t y, float_t d, int32_t w, int32_t h) noexcept {
  this->x = x;
  this->y = y;
  this->d = d;
  this->w = w;
  this->h = h;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::Obstacle::Obstacle() {}
