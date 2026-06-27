#pragma once
// IWYU pragma private; include "System/Reflection/MemberTypes.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MemberTypes::MemberTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::MemberTypes::MemberTypes()   {
}
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Constructor{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Event{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Field{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Method{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Property{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::TypeInfo{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Custom{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::NestedType{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::All{static_cast<int32_t>(0xbf)};
