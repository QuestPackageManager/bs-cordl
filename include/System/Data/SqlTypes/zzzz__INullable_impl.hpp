#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/INullable.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
inline bool System::Data::SqlTypes::INullable::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::INullable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
