#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/EnvironmentDepthUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthUtils_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils.ComputeNdcToLinearDepthParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(float_t, float_t)>(&::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a3ba94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                                                           { "ComputeNdcToLinearDepthParameters", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils.CalculateReprojection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Meta::XR::EnvironmentDepth::DepthFrameDesc)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateReprojection)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a3baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                                                           { "CalculateReprojection", {}, { ::i2c::type_of<::Meta::XR::EnvironmentDepth::DepthFrameDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils.CalculateDepthCameraMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateDepthCameraMatrices)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a3ce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                             { "CalculateDepthCameraMatrices",
                                                               {},
                                                               { ::i2c::type_of<::Meta::XR::EnvironmentDepth::DepthFrameDesc>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::setStaticF__scalingVector3(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "_scalingVector3", ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::getStaticF__scalingVector3() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_scalingVector3", ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>();
}
inline ::UnityEngine::Vector4 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters(float_t near, float_t far) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                                                         { "ComputeNdcToLinearDepthParameters", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, near, far);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateReprojection(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                                                         { "CalculateReprojection", {}, { ::i2c::type_of<::Meta::XR::EnvironmentDepth::DepthFrameDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, frameDesc);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateDepthCameraMatrices(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                            ::by_ref<::UnityEngine::Matrix4x4> viewMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>(),
                                                           { "CalculateDepthCameraMatrices",
                                                             {},
                                                             { ::i2c::type_of<::Meta::XR::EnvironmentDepth::DepthFrameDesc>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frameDesc, projMatrix, viewMatrix);
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::EnvironmentDepthUtils() {}
