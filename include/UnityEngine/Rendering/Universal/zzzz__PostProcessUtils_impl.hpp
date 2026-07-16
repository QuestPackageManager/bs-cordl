#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Grain_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Grain_Texture", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_Texture", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Grain_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Grain_Params", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_Params", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Grain_TilingParams(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Grain_TilingParams", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_TilingParams() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_TilingParams", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__BlueNoise_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BlueNoise_Texture", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__BlueNoise_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_BlueNoise_Texture", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Dithering_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Dithering_Params", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Dithering_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Dithering_Params", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__SourceSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceSize", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__SourceSize() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceSize", ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::PostProcessUtils_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureDithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::PostProcessData*, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68a5bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                                                           { "ConfigureDithering",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureDithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::PostProcessData*, int32_t, int32_t, int32_t, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x68a5c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                                                           { "ConfigureDithering",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureFilmGrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::UnityEngine::Camera*,
                                                                ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68a5e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                { "ConfigureFilmGrain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(),
                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureFilmGrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, int32_t, int32_t,
                                                                ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x68a5edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                { "ConfigureFilmGrain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.SetSourceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6899f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                { "SetSourceSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.SetSourceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68993e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                { "SetSourceSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, ::UnityEngine::Camera* camera,
                                                                                       ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                                                         { "ConfigureDithering",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index, camera, material);
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, int32_t cameraPixelWidth,
                                                                                       int32_t cameraPixelHeight, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                                                                         { "ConfigureDithering",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index, cameraPixelWidth, cameraPixelHeight, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                    ::UnityEngine::Rendering::Universal::FilmGrain* settings, ::UnityEngine::Camera* camera,
                                                                                    ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                              { "ConfigureFilmGrain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(),
                                                  ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, settings, camera, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                    ::UnityEngine::Rendering::Universal::FilmGrain* settings, int32_t cameraPixelWidth, int32_t cameraPixelHeight,
                                                                                    ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                              { "ConfigureFilmGrain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, settings, cameraPixelWidth, cameraPixelHeight, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                              { "SetSourceSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessUtils*>(),
                                              { "SetSourceSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessUtils::PostProcessUtils() {}
