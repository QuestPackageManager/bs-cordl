#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IValueProvider.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void Newtonsoft::Json::Serialization::IValueProvider::SetValue(::System::Object* target, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IValueProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::IValueProvider::GetValue(::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IValueProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, target);
}
