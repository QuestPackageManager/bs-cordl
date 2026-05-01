#pragma once
// IWYU pragma private; include "System/Collections/Generic/IComparer_1.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template <typename T> inline int32_t System::Collections::Generic::IComparer_1<T>::Compare(T x, T y) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IComparer_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
