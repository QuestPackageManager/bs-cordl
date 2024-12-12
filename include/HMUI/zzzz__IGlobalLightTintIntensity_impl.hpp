#pragma once
// IWYU pragma private; include "HMUI/IGlobalLightTintIntensity.hpp"
#include "HMUI/zzzz__IGlobalLightTintIntensity_def.hpp"
inline float_t HMUI::IGlobalLightTintIntensity::get_globalLightTintIntensity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HMUI::IGlobalLightTintIntensity::set_globalLightTintIntensity(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
