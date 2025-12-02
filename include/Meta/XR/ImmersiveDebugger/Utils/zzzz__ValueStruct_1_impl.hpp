#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ValueStruct_1.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueStruct_1_def.hpp"
// Ctor Parameters [CppParam { name: "ValueName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>::ValueStruct_1(::StringW ValueName, T Value) noexcept {
  this->ValueName = ValueName;
  this->Value = Value;
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>::ValueStruct_1() {}
