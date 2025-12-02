#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDerivedData.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDerivedData_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderDerivedData.FromParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OccluderDerivedData (*)(::ByRef<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(
    &::UnityEngine::Rendering::OccluderDerivedData::FromParameters)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x660f5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderDerivedData>::get(), "FromParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::OccluderDerivedData UnityEngine::Rendering::OccluderDerivedData::FromParameters(::ByRef<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderDerivedData>::get(), "FromParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderDerivedData, false>(nullptr, ___internal_method, occluderSubviewUpdate);
}
// Ctor Parameters [CppParam { name: "viewProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewOriginWorldSpace", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "radialDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "facingDirWorldSpace", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OccluderDerivedData::OccluderDerivedData(::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector4 viewOriginWorldSpace,
                                                                             ::UnityEngine::Vector4 radialDirWorldSpace, ::UnityEngine::Vector4 facingDirWorldSpace) noexcept {
  this->viewProjMatrix = viewProjMatrix;
  this->viewOriginWorldSpace = viewOriginWorldSpace;
  this->radialDirWorldSpace = radialDirWorldSpace;
  this->facingDirWorldSpace = facingDirWorldSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderDerivedData::OccluderDerivedData() {}
