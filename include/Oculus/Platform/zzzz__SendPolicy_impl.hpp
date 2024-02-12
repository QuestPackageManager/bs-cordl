#pragma once
#include "Oculus/Platform/zzzz__SendPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::SendPolicy::SendPolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::SendPolicy::SendPolicy() {}
constexpr ::Oculus::Platform::SendPolicy Oculus::Platform::SendPolicy::Unreliable{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::SendPolicy Oculus::Platform::SendPolicy::Reliable{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::SendPolicy Oculus::Platform::SendPolicy::Unknown{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
