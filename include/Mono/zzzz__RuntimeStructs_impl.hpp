#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "default_vtable", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "xdomain_vtable", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "proxy_class", ty: "::Mono::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "proxy_class_name", ty:
// "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::RuntimeStructs_RemoteClass::RuntimeStructs_RemoteClass(::System::IntPtr default_vtable, ::System::IntPtr xdomain_vtable, ::Mono::RuntimeStructs_MonoClass* proxy_class,
                                                                         ::System::IntPtr proxy_class_name, uint32_t interface_count) noexcept {
  this->default_vtable = default_vtable;
  this->xdomain_vtable = xdomain_vtable;
  this->proxy_class = proxy_class;
  this->proxy_class_name = proxy_class_name;
  this->interface_count = interface_count;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs_RemoteClass::RuntimeStructs_RemoteClass() {}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs_MonoClass::RuntimeStructs_MonoClass() {}
// Ctor Parameters [CppParam { name: "pklass", ty: "::Mono::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "constraints", ty: "::Mono::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::RuntimeStructs_GenericParamInfo::RuntimeStructs_GenericParamInfo(::Mono::RuntimeStructs_MonoClass* pklass, ::System::IntPtr name, uint16_t flags, uint32_t token,
                                                                                   ::Mono::RuntimeStructs_MonoClass* constraints) noexcept {
  this->pklass = pklass;
  this->name = name;
  this->flags = flags;
  this->token = token;
  this->constraints = constraints;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs_GenericParamInfo::RuntimeStructs_GenericParamInfo() {}
// Ctor Parameters [CppParam { name: "data", ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}") }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::RuntimeStructs_GPtrArray::RuntimeStructs_GPtrArray(::System::IntPtr* data, int32_t len) noexcept {
  this->data = data;
  this->len = len;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs_GPtrArray::RuntimeStructs_GPtrArray() {}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs::RuntimeStructs() {}
