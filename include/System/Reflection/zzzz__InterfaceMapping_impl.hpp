#pragma once
// IWYU pragma private; include "System/Reflection/InterfaceMapping.hpp"
#include "System/Reflection/zzzz__InterfaceMapping_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "TargetType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "InterfaceType", ty: "::System::Type*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "TargetMethods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "InterfaceMethods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::InterfaceMapping::InterfaceMapping(::System::Type* TargetType, ::System::Type* InterfaceType,
                                                                   ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> TargetMethods,
                                                                   ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> InterfaceMethods) noexcept {
  this->TargetType = TargetType;
  this->InterfaceType = InterfaceType;
  this->TargetMethods = TargetMethods;
  this->InterfaceMethods = InterfaceMethods;
}
// Ctor Parameters []
constexpr ::System::Reflection::InterfaceMapping::InterfaceMapping() {}
