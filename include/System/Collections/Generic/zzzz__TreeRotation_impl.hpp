#pragma once
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::TreeRotation::TreeRotation(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::TreeRotation::TreeRotation() {}
constexpr ::System::Collections::Generic::TreeRotation System::Collections::Generic::TreeRotation::Left{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Collections::Generic::TreeRotation System::Collections::Generic::TreeRotation::LeftRight{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Collections::Generic::TreeRotation System::Collections::Generic::TreeRotation::Right{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Collections::Generic::TreeRotation System::Collections::Generic::TreeRotation::RightLeft{ static_cast<uint8_t>(0x3u) };
