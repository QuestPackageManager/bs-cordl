#pragma once
// IWYU pragma private; include "System/Reflection/MethodImplAttributes.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MethodImplAttributes::MethodImplAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::MethodImplAttributes::MethodImplAttributes()   {
}
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::CodeTypeMask{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::IL{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Native{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::OPTIL{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Runtime{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::ManagedMask{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Unmanaged{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Managed{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::ForwardRef{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::PreserveSig{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::InternalCall{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Synchronized{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::NoInlining{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::AggressiveInlining{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::NoOptimization{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::MaxMethodImplVal{static_cast<int32_t>(0xffff)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::SecurityMitigations{static_cast<int32_t>(0x400)};
