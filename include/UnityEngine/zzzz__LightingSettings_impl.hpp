#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightingSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightingSettings.LightingSettingsDontStripMe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightingSettings::*)()>(&::UnityEngine::LightingSettings::LightingSettingsDontStripMe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b6224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightingSettings*>::get(),
                                                                               "LightingSettingsDontStripMe", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::LightingSettings::LightingSettingsDontStripMe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightingSettings*>::get(),
                                                                             "LightingSettingsDontStripMe", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightingSettings::LightingSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
