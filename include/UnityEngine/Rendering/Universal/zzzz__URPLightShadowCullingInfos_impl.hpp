#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\URPLightShadowCullingInfos.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos.IsSliceValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::IsSliceValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68bb0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>(), { "IsSliceValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::URPLightShadowCullingInfos::IsSliceValid(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>(), { "IsSliceValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, i);
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
