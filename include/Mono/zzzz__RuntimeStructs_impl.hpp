#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
// Ctor Parameters [CppParam { name: "default_vtable", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "xdomain_vtable", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "proxy_class", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "proxy_class_name", ty: "void*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::__RuntimeStructs__RemoteClass::__RuntimeStructs__RemoteClass(void* default_vtable, void* xdomain_vtable, ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> proxy_class,
                                                                               void* proxy_class_name, uint32_t interface_count) noexcept {
  this->default_vtable = default_vtable;
  this->xdomain_vtable = xdomain_vtable;
  this->proxy_class = proxy_class;
  this->proxy_class_name = proxy_class_name;
  this->interface_count = interface_count;
}
// Ctor Parameters []
constexpr ::Mono::__RuntimeStructs__RemoteClass::__RuntimeStructs__RemoteClass() {}
// Ctor Parameters []
constexpr ::Mono::__RuntimeStructs__MonoClass::__RuntimeStructs__MonoClass() {}
// Ctor Parameters [CppParam { name: "pklass", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "name", ty: "void*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "constraints", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Mono::__RuntimeStructs__GenericParamInfo::__RuntimeStructs__GenericParamInfo(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> pklass, void* name, uint16_t flags, uint32_t token,
                                                                                         ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>> constraints) noexcept {
  this->pklass = pklass;
  this->name = name;
  this->flags = flags;
  this->token = token;
  this->constraints = constraints;
}
// Ctor Parameters []
constexpr ::Mono::__RuntimeStructs__GenericParamInfo::__RuntimeStructs__GenericParamInfo() {}
// Ctor Parameters [CppParam { name: "data", ty: "::cordl_internals::Ptr<void*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Mono::__RuntimeStructs__GPtrArray::__RuntimeStructs__GPtrArray(::cordl_internals::Ptr<void*> data, int32_t len) noexcept {
  this->data = data;
  this->len = len;
}
// Ctor Parameters []
constexpr ::Mono::__RuntimeStructs__GPtrArray::__RuntimeStructs__GPtrArray() {}
// Ctor Parameters []
constexpr ::Mono::RuntimeStructs::RuntimeStructs() {}
