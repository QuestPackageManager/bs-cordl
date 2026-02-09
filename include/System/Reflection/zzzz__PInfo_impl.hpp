#pragma once
// IWYU pragma private; include "System/Reflection/PInfo.hpp"
#include "System/Reflection/zzzz__PInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PInfo::PInfo(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::PInfo::PInfo()   {
}
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::Attributes{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::GetMethod{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::SetMethod{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::ReflectedType{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::DeclaringType{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::Name{static_cast<int32_t>(0x20)};
