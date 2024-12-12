#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IComponentChangeService.hpp"
#include "System/ComponentModel/Design/zzzz__IComponentChangeService_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanged(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member, ::System::Object* oldValue,
                                                                                        ::System::Object* newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, member, oldValue, newValue);
}
inline void System::ComponentModel::Design::IComponentChangeService::OnComponentChanging(::System::Object* component, ::System::ComponentModel::MemberDescriptor* member) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IComponentChangeService*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, member);
}
