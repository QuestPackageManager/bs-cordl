#pragma once
// IWYU pragma private; include "System/Collections/Generic/InsertionBehavior.hpp"
#include "System/Collections/Generic/zzzz__InsertionBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::InsertionBehavior::InsertionBehavior(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::InsertionBehavior::InsertionBehavior()   {
}
constexpr ::System::Collections::Generic::InsertionBehavior  System::Collections::Generic::InsertionBehavior::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Collections::Generic::InsertionBehavior  System::Collections::Generic::InsertionBehavior::OverwriteExisting{static_cast<uint8_t>(0x1u)};
constexpr ::System::Collections::Generic::InsertionBehavior  System::Collections::Generic::InsertionBehavior::ThrowOnExisting{static_cast<uint8_t>(0x2u)};
