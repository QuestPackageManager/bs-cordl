#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/PS4/XR/zzzz__PSVRSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::PS4::XR::PSVRSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PS4::XR::PSVRSettings::*)()>(&::UnityEngine::PS4::XR::PSVRSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c7d5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PS4::XR::PSVRSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::PS4::XR::PSVRSettings* UnityEngine::PS4::XR::PSVRSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::PS4::XR::PSVRSettings*>());
}
inline void UnityEngine::PS4::XR::PSVRSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PS4::XR::PSVRSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::PS4::XR::PSVRSettings::PSVRSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
