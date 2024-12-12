#pragma once
// IWYU pragma private; include "Unity/Properties/IProperty.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline ::System::Type* Unity::Properties::IProperty::DeclaredValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IProperty*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
