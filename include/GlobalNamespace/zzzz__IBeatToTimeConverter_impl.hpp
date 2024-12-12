#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatToTimeConverter.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
inline float_t GlobalNamespace::IBeatToTimeConverter::ConvertBeatToTime(float_t beat) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConverter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
