#pragma once
// IWYU pragma private; include "System/Enum_ParseFailureKind.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Enum__ParseFailureKind::__Enum__ParseFailureKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Enum__ParseFailureKind::__Enum__ParseFailureKind() {}
constexpr ::System::__Enum__ParseFailureKind System::__Enum__ParseFailureKind::None{ static_cast<int32_t>(0x0) };
constexpr ::System::__Enum__ParseFailureKind System::__Enum__ParseFailureKind::Argument{ static_cast<int32_t>(0x1) };
constexpr ::System::__Enum__ParseFailureKind System::__Enum__ParseFailureKind::ArgumentNull{ static_cast<int32_t>(0x2) };
constexpr ::System::__Enum__ParseFailureKind System::__Enum__ParseFailureKind::ArgumentWithParameter{ static_cast<int32_t>(0x3) };
constexpr ::System::__Enum__ParseFailureKind System::__Enum__ParseFailureKind::UnhandledException{ static_cast<int32_t>(0x4) };
