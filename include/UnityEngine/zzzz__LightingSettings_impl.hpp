#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightingSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightingSettings.LightingSettingsDontStripMe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightingSettings::*)()>(&::UnityEngine::LightingSettings::LightingSettingsDontStripMe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cc8664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightingSettings*>::get(),
                                                                               "LightingSettingsDontStripMe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::LightingSettings::LightingSettingsDontStripMe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightingSettings*>::get(),
                                                                             "LightingSettingsDontStripMe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightingSettings::LightingSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
