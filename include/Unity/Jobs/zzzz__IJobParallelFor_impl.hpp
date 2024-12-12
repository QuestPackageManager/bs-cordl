#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelFor.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
inline void Unity::Jobs::IJobParallelFor::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelFor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
