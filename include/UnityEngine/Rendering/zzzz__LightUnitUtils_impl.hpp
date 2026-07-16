#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightUnitUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LightUnitUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightUnit_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.get_k_LuminanceToEvFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::LightUnitUtils::get_k_LuminanceToEvFactor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67c0cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "get_k_LuminanceToEvFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.get_k_EvToLuminanceFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::LightUnitUtils::get_k_EvToLuminanceFactor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c0d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "get_k_EvToLuminanceFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetNativeLightUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LightUnit (*)(::UnityEngine::LightType)>(&::UnityEngine::Rendering::LightUnitUtils::GetNativeLightUnit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67c0d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetNativeLightUnit", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.IsLightUnitSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LightType, ::UnityEngine::Rendering::LightUnit)>(&::UnityEngine::Rendering::LightUnitUtils::IsLightUnitSupported)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67c0dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                             { "IsLightUnitSupported", {}, { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetSolidAngleFromPointLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromPointLight)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c0e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetSolidAngleFromPointLight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetSolidAngleFromSpotLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromSpotLight)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x67c0e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetSolidAngleFromSpotLight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetSolidAngleFromPyramidLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromPyramidLight)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x67c0ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                                                           { "GetSolidAngleFromPyramidLight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetSolidAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LightType, bool, float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetSolidAngle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67c0fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                         { "GetSolidAngle", {}, { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetAreaFromRectangleLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetAreaFromRectangleLight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67c1078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromRectangleLight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetAreaFromRectangleLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::LightUnitUtils::GetAreaFromRectangleLight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67c1090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromRectangleLight", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetAreaFromDiscLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetAreaFromDiscLight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67c10a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromDiscLight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.GetAreaFromTubeLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::GetAreaFromTubeLight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67c10c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromTubeLight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.LumenToCandela
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::LumenToCandela)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c10dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LumenToCandela", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.CandelaToLumen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::CandelaToLumen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c10e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToLumen", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.LumenToNits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::LumenToNits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c10ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LumenToNits", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.NitsToLumen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::NitsToLumen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c10f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "NitsToLumen", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.LuxToCandela
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::LuxToCandela)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c10fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LuxToCandela", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.CandelaToLux
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LightUnitUtils::CandelaToLux)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c1108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToLux", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.Ev100ToNits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::Ev100ToNits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67c1114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "Ev100ToNits", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.NitsToEv100
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::NitsToEv100)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67c1134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "NitsToEv100", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.Ev100ToCandela
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::Ev100ToCandela)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67c11ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "Ev100ToCandela", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.CandelaToEv100
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LightUnitUtils::CandelaToEv100)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c11cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToEv100", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.ConvertIntensityInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Rendering::LightUnit, ::UnityEngine::Rendering::LightUnit, ::UnityEngine::LightType, float_t, float_t,
                                                                   float_t)>(&::UnityEngine::Rendering::LightUnitUtils::ConvertIntensityInternal)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x67c11d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                { "ConvertIntensityInternal",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(),
                                                    ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightUnitUtils.ConvertIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*, float_t, ::UnityEngine::Rendering::LightUnit, ::UnityEngine::Rendering::LightUnit)>(
    &::UnityEngine::Rendering::LightUnitUtils::ConvertIntensity)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67c16dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                             { "ConvertIntensity",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::LightUnit>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::LightUnitUtils::get_k_LuminanceToEvFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "get_k_LuminanceToEvFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::get_k_EvToLuminanceFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "get_k_EvToLuminanceFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnitUtils::GetNativeLightUnit(::UnityEngine::LightType lightType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetNativeLightUnit", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LightUnit>(nullptr, ___internal_method, lightType);
}
inline bool UnityEngine::Rendering::LightUnitUtils::IsLightUnitSupported(::UnityEngine::LightType lightType, ::UnityEngine::Rendering::LightUnit lightUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                           { "IsLightUnitSupported", {}, { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lightType, lightUnit);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromPointLight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetSolidAngleFromPointLight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromSpotLight(float_t spotAngle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetSolidAngleFromSpotLight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spotAngle);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetSolidAngleFromPyramidLight(float_t spotAngle, float_t aspectRatio) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                                                         { "GetSolidAngleFromPyramidLight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spotAngle, aspectRatio);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetSolidAngle(::UnityEngine::LightType lightType, bool spotReflector, float_t spotAngle, float_t aspectRatio) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                              { "GetSolidAngle", {}, { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lightType, spotReflector, spotAngle, aspectRatio);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetAreaFromRectangleLight(float_t rectSizeX, float_t rectSizeY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromRectangleLight", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rectSizeX, rectSizeY);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetAreaFromRectangleLight(::UnityEngine::Vector2 rectSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromRectangleLight", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rectSize);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetAreaFromDiscLight(float_t discRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromDiscLight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, discRadius);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::GetAreaFromTubeLight(float_t tubeLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "GetAreaFromTubeLight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, tubeLength);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::LumenToCandela(float_t lumen, float_t solidAngle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LumenToCandela", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lumen, solidAngle);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::CandelaToLumen(float_t candela, float_t solidAngle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToLumen", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, candela, solidAngle);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::LumenToNits(float_t lumen, float_t area) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LumenToNits", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lumen, area);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::NitsToLumen(float_t nits, float_t area) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "NitsToLumen", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, nits, area);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::LuxToCandela(float_t lux, float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "LuxToCandela", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lux, distance);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::CandelaToLux(float_t candela, float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToLux", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, candela, distance);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::Ev100ToNits(float_t ev100) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "Ev100ToNits", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ev100);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::NitsToEv100(float_t nits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "NitsToEv100", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, nits);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::Ev100ToCandela(float_t ev100) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "Ev100ToCandela", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ev100);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::CandelaToEv100(float_t candela) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(), { "CandelaToEv100", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, candela);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::ConvertIntensityInternal(float_t intensity, ::UnityEngine::Rendering::LightUnit fromUnit, ::UnityEngine::Rendering::LightUnit toUnit,
                                                                                ::UnityEngine::LightType lightType, float_t area, float_t luxAtDistance, float_t solidAngle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                           { "ConvertIntensityInternal",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(),
                                                               ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, intensity, fromUnit, toUnit, lightType, area, luxAtDistance, solidAngle);
}
inline float_t UnityEngine::Rendering::LightUnitUtils::ConvertIntensity(::UnityEngine::Light* light, float_t intensity, ::UnityEngine::Rendering::LightUnit fromUnit,
                                                                        ::UnityEngine::Rendering::LightUnit toUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightUnitUtils*>(),
                                                           { "ConvertIntensity",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::LightUnit>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::LightUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, light, intensity, fromUnit, toUnit);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightUnitUtils::LightUnitUtils() {}
