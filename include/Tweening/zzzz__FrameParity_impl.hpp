#pragma once
// IWYU pragma private; include "Tweening/FrameParity.hpp"
#include "Tweening/zzzz__FrameParity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tweening::FrameParity::FrameParity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tweening::FrameParity::FrameParity() {}
constexpr ::Tweening::FrameParity Tweening::FrameParity::AllFrames{ static_cast<int32_t>(0x0) };
constexpr ::Tweening::FrameParity Tweening::FrameParity::OddFrames{ static_cast<int32_t>(0x1) };
constexpr ::Tweening::FrameParity Tweening::FrameParity::EvenFrames{ static_cast<int32_t>(0x2) };
