#pragma once
#include "System/Reflection/zzzz__PropertyAttributes_impl.hpp"
#include "System/Reflection/zzzz__MonoPropertyInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "get_method", ty: "::System::Reflection::MethodInfo*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "set_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "attrs", ty:
// "::System::Reflection::PropertyAttributes", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MonoPropertyInfo::MonoPropertyInfo(::System::Type* parent, ::System::Type* declaring_type, ::StringW name, ::System::Reflection::MethodInfo* get_method,
                                                                   ::System::Reflection::MethodInfo* set_method, ::System::Reflection::PropertyAttributes attrs) noexcept {
  this->parent = parent;
  this->declaring_type = declaring_type;
  this->name = name;
  this->get_method = get_method;
  this->set_method = set_method;
  this->attrs = attrs;
}
// Ctor Parameters []
constexpr ::System::Reflection::MonoPropertyInfo::MonoPropertyInfo() {}
