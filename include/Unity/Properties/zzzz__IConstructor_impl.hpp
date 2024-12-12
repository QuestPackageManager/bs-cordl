#pragma once
// IWYU pragma private; include "Unity/Properties/IConstructor.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
inline ::Unity::Properties::InstantiationKind Unity::Properties::IConstructor::get_InstantiationKind() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IConstructor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal_method);
}
