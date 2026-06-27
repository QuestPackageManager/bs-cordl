#pragma once
// IWYU pragma private; include "System/Reflection/MethodAttributes.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MethodAttributes::MethodAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::MethodAttributes::MethodAttributes()   {
}
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::MemberAccessMask{static_cast<int32_t>(0x7)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::PrivateScope{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Private{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::FamANDAssem{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Assembly{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Family{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::FamORAssem{static_cast<int32_t>(0x5)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Public{static_cast<int32_t>(0x6)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Static{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Final{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Virtual{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::HideBySig{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::CheckAccessOnOverride{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::VtableLayoutMask{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::ReuseSlot{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::NewSlot{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::Abstract{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::SpecialName{static_cast<int32_t>(0x800)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::PinvokeImpl{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::UnmanagedExport{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::RTSpecialName{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::HasSecurity{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::RequireSecObject{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::MethodAttributes  System::Reflection::MethodAttributes::ReservedMask{static_cast<int32_t>(0xd000)};
