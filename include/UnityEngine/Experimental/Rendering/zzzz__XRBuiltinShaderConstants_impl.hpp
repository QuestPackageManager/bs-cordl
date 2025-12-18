#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRBuiltinShaderConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRBuiltinShaderConstants_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.UpdateBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool, int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::UpdateBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x658def8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "UpdateBuiltinShaderConstants",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.SetBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x658e300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "SetBuiltinShaderConstants",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.SetBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x658e454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "SetBuiltinShaderConstants",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::Update)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x658e4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoCameraProjection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoCameraProjection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoCameraProjection() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoCameraProjection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoCameraInvProjection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoCameraInvProjection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoCameraInvProjection() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoCameraInvProjection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixV() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixV",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvV() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvV",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixVP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixVP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixVP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixVP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvVP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvVP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvVP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvVP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoWorldSpaceCameraPos(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoWorldSpaceCameraPos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoWorldSpaceCameraPos() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoWorldSpaceCameraPos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_cameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_cameraProjMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_cameraProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_cameraProjMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invCameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invCameraProjMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invCameraProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invCameraProjMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_viewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_viewMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_viewMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_viewMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invViewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invViewMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invViewMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invViewMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_projMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_projMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_projMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invProjMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invProjMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_viewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_viewProjMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_viewProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_viewProjMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invViewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invViewProjMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invViewProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_invViewProjMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_worldSpaceCameraPos(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_worldSpaceCameraPos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_worldSpaceCameraPos() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_worldSpaceCameraPos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::UpdateBuiltinShaderConstants(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projMatrix,
                                                                                                         bool renderIntoTexture, int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "UpdateBuiltinShaderConstants",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewMatrix, projMatrix, renderIntoTexture, viewIndex);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "SetBuiltinShaderConstants",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "SetBuiltinShaderConstants",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::Update(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrPass, cmd, renderIntoTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::XRBuiltinShaderConstants() {}
