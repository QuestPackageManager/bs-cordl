#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRDisplay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRDisplay_def.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRRenderTextureDesc_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::API::UnityXRDisplay.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, ::ByRef<uint32_t>)>(
    &::UnityEngine::XR::OpenXR::API::UnityXRDisplay::CreateTexture)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67be8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::API::UnityXRDisplay*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::API::UnityXRDisplay::CreateTexture(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc desc, ::ByRef<uint32_t> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::API::UnityXRDisplay*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, desc, id);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDisplay::UnityXRDisplay() {}
