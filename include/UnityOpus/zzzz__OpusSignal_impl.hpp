#pragma once
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::OpusSignal::OpusSignal(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityOpus::OpusSignal::OpusSignal() {}
constexpr ::UnityOpus::OpusSignal UnityOpus::OpusSignal::Auto{ static_cast<int32_t>(0xfffffc18) };
constexpr ::UnityOpus::OpusSignal UnityOpus::OpusSignal::Voice{ static_cast<int32_t>(0xbb9) };
constexpr ::UnityOpus::OpusSignal UnityOpus::OpusSignal::Music{ static_cast<int32_t>(0xbba) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
