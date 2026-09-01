#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\GlobalIllumination\LightmapperUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightmapperUtils_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Cookie_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__DiscLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__PointLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__RectangleLight_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__SpotLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LightMode (*)(::UnityEngine::LightmapBakeType)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b2f50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                           { "Extract", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.ExtractIndirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)(::UnityEngine::Light*)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b2f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                           { "ExtractIndirect", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.ExtractInnerCone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*)>(&::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                           { "ExtractInnerCone", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.ExtractColorTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Light*)>(&::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractColorTemperature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b2f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                           { "ExtractColorTemperature", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.ApplyColorTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ApplyColorTemperature)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2f6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                            { "ApplyColorTemperature", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6b2f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                            { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6b2f8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                         { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6b2fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                         { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6b2fc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                         { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6b2fdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                         { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Light*, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie>)>(
    &::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b2ffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::GlobalIllumination::LightMode UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::LightmapBakeType baketype) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                         { "Extract", {}, { ::i2c::type_of<::UnityEngine::LightmapBakeType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::LightMode>(nullptr, ___internal_method, baketype);
}
inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect(::UnityEngine::Light* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(), { "ExtractIndirect", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(nullptr, ___internal_method, l);
}
inline float_t UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone(::UnityEngine::Light* l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                         { "ExtractInnerCone", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, l);
}
inline ::UnityEngine::Color UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractColorTemperature(::UnityEngine::Light* l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                                                                         { "ExtractColorTemperature", {}, { ::i2c::type_of<::UnityEngine::Light*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, l);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ApplyColorTemperature(::UnityEngine::Color cct,
                                                                                                   ::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor> lightColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                          { "ApplyColorTemperature", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cct, lightColor);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> dir) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                       { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, dir);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                       { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, point);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight> spot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                              { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, spot);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                       { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, rect);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight> disc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                              { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, disc);
}
inline void UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*>(),
                                              { "Extract", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, cookie);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::LightmapperUtils() {}
