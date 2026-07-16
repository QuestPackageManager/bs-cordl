#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowSliceData.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowSliceData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowSliceData::*)()>(&::UnityEngine::Rendering::Universal::ShadowSliceData::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68b66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowSliceData>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowSliceData::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowSliceData>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "shadowTransform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetX", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "splitData", ty: "::UnityEngine::Rendering::ShadowSplitData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowSliceData::ShadowSliceData(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                ::UnityEngine::Matrix4x4 shadowTransform, int32_t offsetX, int32_t offsetY, int32_t resolution,
                                                                                ::UnityEngine::Rendering::ShadowSplitData splitData) noexcept {
  this->viewMatrix = viewMatrix;
  this->projectionMatrix = projectionMatrix;
  this->shadowTransform = shadowTransform;
  this->offsetX = offsetX;
  this->offsetY = offsetY;
  this->resolution = resolution;
  this->splitData = splitData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowSliceData::ShadowSliceData() {}
