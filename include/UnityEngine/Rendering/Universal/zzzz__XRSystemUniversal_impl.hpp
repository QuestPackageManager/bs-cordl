#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRSystemUniversal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemUniversal_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassUniversal_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.BeginLateLatching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::BeginLateLatching)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x68e3538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                                                { "BeginLateLatching", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.EndLateLatching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::EndLateLatching)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68e3614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                                                { "EndLateLatching", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.UnmarkShaderProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::UnmarkShaderProperties)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68e36dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
            { "UnmarkShaderProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.MarkShaderProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XRPassUniversal*, bool)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::MarkShaderProperties)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x68e3768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                                                                                           { "MarkShaderProperties",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_projMatrix", ::UnityEngine::Rendering::Universal::XRSystemUniversal*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::XRSystemUniversal::getStaticF_s_projMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_projMatrix", ::UnityEngine::Rendering::Universal::XRSystemUniversal*>();
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::BeginLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                                              { "BeginLateLatching", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::EndLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                                              { "EndLateLatching", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::UnmarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                         ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
          { "UnmarkShaderProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::MarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass,
                                                                                       bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRSystemUniversal*>(),
                          { "MarkShaderProperties",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, xrPass, renderIntoTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRSystemUniversal::XRSystemUniversal() {}
