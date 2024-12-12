#pragma once
// IWYU pragma private; include "BGNet/Core/ITimeProvider.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
inline int64_t BGNet::Core::ITimeProvider::GetTimeMs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t BGNet::Core::ITimeProvider::GetTicks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
