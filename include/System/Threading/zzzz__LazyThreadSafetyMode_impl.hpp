#pragma once
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::LazyThreadSafetyMode::LazyThreadSafetyMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::LazyThreadSafetyMode::LazyThreadSafetyMode() {}
constexpr ::System::Threading::LazyThreadSafetyMode System::Threading::LazyThreadSafetyMode::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::LazyThreadSafetyMode System::Threading::LazyThreadSafetyMode::PublicationOnly{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::LazyThreadSafetyMode System::Threading::LazyThreadSafetyMode::ExecutionAndPublication{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
