#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPLightShadowCullingInfos.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos.IsSliceValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::IsSliceValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x669b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>::get(), "IsSliceValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::IsSliceValid(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>::get(), "IsSliceValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
// Ctor Parameters [CppParam { name: "slices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ShadowSliceData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "slicesValidMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::URPLightShadowCullingInfos(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ShadowSliceData> slices,
                                                                                                      uint32_t slicesValidMask) noexcept {
  this->slices = slices;
  this->slicesValidMask = slicesValidMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::URPLightShadowCullingInfos() {}
