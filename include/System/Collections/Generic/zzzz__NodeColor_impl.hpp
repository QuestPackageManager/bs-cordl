#pragma once
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::NodeColor::NodeColor(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::NodeColor::NodeColor() {}
constexpr ::System::Collections::Generic::NodeColor System::Collections::Generic::NodeColor::Black{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Collections::Generic::NodeColor System::Collections::Generic::NodeColor::Red{ static_cast<uint8_t>(0x1u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
