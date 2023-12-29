#pragma once
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderNoPreInit_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b01b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit* UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>());
}
inline void UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::OpenXRLoaderNoPreInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
