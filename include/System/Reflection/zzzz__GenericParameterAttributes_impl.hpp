#pragma once
// IWYU pragma private; include "System/Reflection/GenericParameterAttributes.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::GenericParameterAttributes::GenericParameterAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::GenericParameterAttributes::GenericParameterAttributes()   {
}
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::VarianceMask{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Covariant{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Contravariant{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::SpecialConstraintMask{static_cast<int32_t>(0x1c)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::ReferenceTypeConstraint{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::NotNullableValueTypeConstraint{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::DefaultConstructorConstraint{static_cast<int32_t>(0x10)};
