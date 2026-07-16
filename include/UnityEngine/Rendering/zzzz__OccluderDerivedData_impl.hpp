#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderDerivedData.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDerivedData_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderDerivedData.FromParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OccluderDerivedData (*)(::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(
    &::UnityEngine::Rendering::OccluderDerivedData::FromParameters)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6828aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderDerivedData>(),
                                                                                           { "FromParameters", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::OccluderDerivedData UnityEngine::Rendering::OccluderDerivedData::FromParameters(::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderDerivedData>(),
                                                                                         { "FromParameters", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OccluderDerivedData>(nullptr, ___internal_method, occluderSubviewUpdate);
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
