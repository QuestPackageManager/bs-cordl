#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/ITypeDescriptorFilterService.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* attributes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, attributes);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* events) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, events);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* properties) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, properties);
}
