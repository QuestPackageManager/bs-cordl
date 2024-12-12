#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IInterval.hpp"
#include "UnityEngine/Timeline/zzzz__IInterval_def.hpp"
inline int64_t UnityEngine::Timeline::IInterval::get_intervalStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IInterval*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::IInterval::get_intervalEnd() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IInterval*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
