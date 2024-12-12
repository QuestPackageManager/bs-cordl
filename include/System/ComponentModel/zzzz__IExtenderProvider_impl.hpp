#pragma once
// IWYU pragma private; include "System/ComponentModel/IExtenderProvider.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline bool System::ComponentModel::IExtenderProvider::CanExtend(::System::Object* extendee) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IExtenderProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, extendee);
}
