#pragma once
// IWYU pragma private; include "GlobalNamespace/IDspTimeProvider.hpp"
#include "GlobalNamespace/zzzz__IDspTimeProvider_def.hpp"
inline double_t GlobalNamespace::IDspTimeProvider::get_dspTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDspTimeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
