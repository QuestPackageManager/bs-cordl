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
  ::cordl_internals::setStaticField<int32_t, "_Grain_Texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_Texture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Grain_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Grain_Params", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Grain_TilingParams(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Grain_TilingParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Grain_TilingParams() {
  return ::cordl_internals::getStaticField<int32_t, "_Grain_TilingParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__BlueNoise_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BlueNoise_Texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__BlueNoise_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_BlueNoise_Texture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__Dithering_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Dithering_Params", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__Dithering_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Dithering_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::setStaticF__SourceSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::getStaticF__SourceSize() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceSize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessUtils_ShaderConstants::PostProcessUtils_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureDithering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::PostProcessData*, int32_t, ::UnityEngine::Camera*,
                                                                                              ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66f3030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureDithering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureDithering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::PostProcessData*, int32_t, int32_t, int32_t,
                                                                                              ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x66f3094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureDithering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureFilmGrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::UnityEngine::Camera*, ::UnityEngine::Material*)>(
        &::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66f32b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureFilmGrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.ConfigureFilmGrain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, int32_t, int32_t, ::UnityEngine::Material*)>(
        &::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x66f331c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureFilmGrain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.SetSourceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x66e7374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "SetSourceSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessUtils.SetSourceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66e6824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "SetSourceSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, ::UnityEngine::Camera* camera,
                                                                                       ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureDithering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, index, camera, material);
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, int32_t cameraPixelWidth,
                                                                                       int32_t cameraPixelHeight, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureDithering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, index, cameraPixelWidth, cameraPixelHeight, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                    ::UnityEngine::Rendering::Universal::FilmGrain* settings, ::UnityEngine::Camera* camera,
                                                                                    ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureFilmGrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, settings, camera, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                    ::UnityEngine::Rendering::Universal::FilmGrain* settings, int32_t cameraPixelWidth, int32_t cameraPixelHeight,
                                                                                    ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "ConfigureFilmGrain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, settings, cameraPixelWidth, cameraPixelHeight, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "SetSourceSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, source);
}
inline void UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessUtils*>::get(), "SetSourceSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, source);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessUtils::PostProcessUtils() {}
