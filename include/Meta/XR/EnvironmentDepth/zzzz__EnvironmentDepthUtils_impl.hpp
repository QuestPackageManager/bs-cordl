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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(float_t, float_t)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x588e548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "ComputeNdcToLinearDepthParameters",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils.CalculateReprojection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::Meta::XR::EnvironmentDepth::DepthFrameDesc)>(
    &::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateReprojection)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x588e5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "CalculateReprojection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::DepthFrameDesc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils.CalculateDepthCameraMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::ByRef<::UnityEngine::Matrix4x4>, ::ByRef<::UnityEngine::Matrix4x4>)>(
        &::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateDepthCameraMatrices)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x588f928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "CalculateDepthCameraMatrices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::DepthFrameDesc>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::setStaticF__scalingVector3(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "_scalingVector3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::getStaticF__scalingVector3() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_scalingVector3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get>();
}
inline ::UnityEngine::Vector4 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters(float_t near, float_t far) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "ComputeNdcToLinearDepthParameters",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, near, far);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateReprojection(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "CalculateReprojection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::DepthFrameDesc>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, frameDesc);
}
inline void Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::CalculateDepthCameraMatrices(::Meta::XR::EnvironmentDepth::DepthFrameDesc frameDesc, ::ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                                            ::ByRef<::UnityEngine::Matrix4x4> viewMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils*>::get(), "CalculateDepthCameraMatrices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::EnvironmentDepth::DepthFrameDesc>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frameDesc, projMatrix, viewMatrix);
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthUtils::EnvironmentDepthUtils() {}
