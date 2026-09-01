#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\XRBuiltinShaderConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRBuiltinShaderConstants_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.UpdateBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool, int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::UpdateBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x6745060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
            { "UpdateBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.SetBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6745468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                                                                                           { "SetBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.SetBuiltinShaderConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67455bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                                                                                           { "SetBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::Update)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x6745620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                         { "Update", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoCameraProjection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoCameraProjection", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoCameraProjection() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoCameraProjection", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoCameraInvProjection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoCameraInvProjection", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoCameraInvProjection() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoCameraInvProjection", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixV", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixV() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixV", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvV", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvV() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvV", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixVP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixVP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixVP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixVP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoMatrixInvVP(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoMatrixInvVP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoMatrixInvVP() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoMatrixInvVP", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_unity_StereoWorldSpaceCameraPos(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_StereoWorldSpaceCameraPos", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_unity_StereoWorldSpaceCameraPos() {
  return ::cordl_internals::getStaticField<int32_t, "unity_StereoWorldSpaceCameraPos", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_cameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_cameraProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_cameraProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_cameraProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invCameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invCameraProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invCameraProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invCameraProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_viewMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_viewMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_viewMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_viewMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invViewMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invViewMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invViewMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invViewMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_projMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_projMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_projMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invProjMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_viewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_viewProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_viewProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_viewProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_invViewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invViewProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_invViewProjMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_invViewProjMatrix", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::setStaticF_s_worldSpaceCameraPos(::ArrayW<::UnityEngine::Vector4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "s_worldSpaceCameraPos", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(
      std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::getStaticF_s_worldSpaceCameraPos() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "s_worldSpaceCameraPos", ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>();
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::UpdateBuiltinShaderConstants(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projMatrix,
                                                                                                         bool renderIntoTexture, int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
          { "UpdateBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewMatrix, projMatrix, renderIntoTexture, viewIndex);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                                                                                         { "SetBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::SetBuiltinShaderConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                                                                                         { "SetBuiltinShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::Update(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   bool renderIntoTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants*>(),
                       { "Update", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrPass, cmd, renderIntoTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRBuiltinShaderConstants::XRBuiltinShaderConstants() {}
