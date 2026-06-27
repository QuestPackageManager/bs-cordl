#pragma once
// IWYU pragma private; include "System/Reflection/EventAttributes.hpp"
#include "System/Reflection/zzzz__EventAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::EventAttributes::EventAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::EventAttributes::EventAttributes()   {
}
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::SpecialName{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::RTSpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::ReservedMask{static_cast<int32_t>(0x400)};
