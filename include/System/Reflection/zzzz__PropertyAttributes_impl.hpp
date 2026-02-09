#pragma once
// IWYU pragma private; include "System/Reflection/PropertyAttributes.hpp"
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PropertyAttributes::PropertyAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::PropertyAttributes::PropertyAttributes()   {
}
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::SpecialName{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::RTSpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::HasDefault{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved2{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved3{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved4{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::ReservedMask{static_cast<int32_t>(0xf400)};
