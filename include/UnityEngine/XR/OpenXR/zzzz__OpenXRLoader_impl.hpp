#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoader.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoader_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoader::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67b6a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoader* UnityEngine::XR::OpenXR::OpenXRLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRLoader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoader::OpenXRLoader() {}
