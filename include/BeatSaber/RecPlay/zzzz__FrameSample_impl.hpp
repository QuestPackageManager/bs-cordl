#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/FrameSample.hpp"
#include "BeatSaber/RecPlay/zzzz__FrameSample_def.hpp"
// Ctor Parameters [CppParam { name: "previous", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "alpha", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::FrameSample::FrameSample(int32_t previous, int32_t next, float_t alpha) noexcept {
  this->previous = previous;
  this->next = next;
  this->alpha = alpha;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::FrameSample::FrameSample() {}
