#pragma once
// IWYU pragma private; include "System/Reflection/TypeAttributes.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::TypeAttributes::TypeAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeAttributes::TypeAttributes()   {
}
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::VisibilityMask{static_cast<int32_t>(0x7)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NotPublic{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Public{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedPublic{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedPrivate{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedFamily{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedAssembly{static_cast<int32_t>(0x5)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedFamANDAssem{static_cast<int32_t>(0x6)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::NestedFamORAssem{static_cast<int32_t>(0x7)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::LayoutMask{static_cast<int32_t>(0x18)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::AutoLayout{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::SequentialLayout{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::ExplicitLayout{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::ClassSemanticsMask{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Class{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Interface{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Abstract{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Sealed{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::SpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Import{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::Serializable{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::WindowsRuntime{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::StringFormatMask{static_cast<int32_t>(0x30000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::AnsiClass{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::UnicodeClass{static_cast<int32_t>(0x10000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::AutoClass{static_cast<int32_t>(0x20000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::CustomFormatClass{static_cast<int32_t>(0x30000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::CustomFormatMask{static_cast<int32_t>(0xc00000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::BeforeFieldInit{static_cast<int32_t>(0x100000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::RTSpecialName{static_cast<int32_t>(0x800)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::HasSecurity{static_cast<int32_t>(0x40000)};
constexpr ::System::Reflection::TypeAttributes  System::Reflection::TypeAttributes::ReservedMask{static_cast<int32_t>(0x40800)};
