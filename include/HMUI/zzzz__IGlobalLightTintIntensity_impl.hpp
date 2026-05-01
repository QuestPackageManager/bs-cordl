#pragma once
// IWYU pragma private; include "HMUI/IGlobalLightTintIntensity.hpp"
#include "HMUI/zzzz__IGlobalLightTintIntensity_def.hpp"
//  Writing Method size for method: ::HMUI::IGlobalLightTintIntensity.get_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::IGlobalLightTintIntensity::*)()>(&::HMUI::IGlobalLightTintIntensity::get_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IGlobalLightTintIntensity.set_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IGlobalLightTintIntensity::*)(float_t)>(
    &::HMUI::IGlobalLightTintIntensity::set_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IGlobalLightTintIntensity*>::get(), 1));
    return ___internal_method;
  }
};
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
