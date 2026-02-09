#pragma once
// IWYU pragma private; include "System/Reflection/MonoEventInfo.hpp"
#include "System/Reflection/zzzz__EventAttributes_impl.hpp"
#include "System/Reflection/zzzz__MonoEventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "reflected_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "add_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "remove_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "raise_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "attrs", ty: "::System::Reflection::EventAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "other_methods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MonoEventInfo::MonoEventInfo(::System::Type*  declaring_type, ::System::Type*  reflected_type, ::StringW  name, ::System::Reflection::MethodInfo*  add_method, ::System::Reflection::MethodInfo*  remove_method, ::System::Reflection::MethodInfo*  raise_method, ::System::Reflection::EventAttributes  attrs, ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>  other_methods) noexcept  {
this->declaring_type = declaring_type;
this->reflected_type = reflected_type;
this->name = name;
this->add_method = add_method;
this->remove_method = remove_method;
this->raise_method = raise_method;
this->attrs = attrs;
this->other_methods = other_methods;
}
// Ctor Parameters []
constexpr ::System::Reflection::MonoEventInfo::MonoEventInfo()   {
}
