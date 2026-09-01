#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ColorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ColorUtils_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.get_lensImperfectionExposureScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::ColorUtils::get_lensImperfectionExposureScale)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67bcea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "get_lensImperfectionExposureScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.StandardIlluminantY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::StandardIlluminantY)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67bcf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "StandardIlluminantY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.CIExyToLMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::CIExyToLMS)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67bcf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "CIExyToLMS", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ColorBalanceToLMSCoeffs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ColorBalanceToLMSCoeffs)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x67bcfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ColorBalanceToLMSCoeffs", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareShadowsMidtonesHighlights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ColorUtils::PrepareShadowsMidtonesHighlights)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x67bd138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                            { "PrepareShadowsMidtonesHighlights",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareLiftGammaGain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ColorUtils::PrepareLiftGammaGain)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x67bd3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                            { "PrepareLiftGammaGain",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareSplitToning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, float_t)>(&::UnityEngine::Rendering::ColorUtils::PrepareSplitToning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67bd790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                            { "PrepareSplitToning", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.Luminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Rendering::ColorUtils::Luminance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67bd760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "Luminance", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeEV100
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeEV100)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67bd81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ComputeEV100", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ConvertEV100ToExposure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ConvertEV100ToExposure)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67bd8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ConvertEV100ToExposure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ConvertExposureToEV100
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ConvertExposureToEV100)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67bd92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ConvertExposureToEV100", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeEV100FromAvgLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeEV100FromAvgLuminance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67bd9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ComputeEV100FromAvgLuminance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeISO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeISO)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67bdab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                                                                                           { "ComputeISO", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ToHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::ColorUtils::ToHex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67bdaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ToHex", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ToRGBA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::UnityEngine::Rendering::ColorUtils::ToRGBA)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67bdb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ToRGBA", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ColorUtils::setStaticF_s_LightMeterCalibrationConstant(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_LightMeterCalibrationConstant", ::UnityEngine::Rendering::ColorUtils*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::ColorUtils::getStaticF_s_LightMeterCalibrationConstant() {
  return ::cordl_internals::getStaticField<float_t, "s_LightMeterCalibrationConstant", ::UnityEngine::Rendering::ColorUtils*>();
}
inline void UnityEngine::Rendering::ColorUtils::setStaticF_s_LensAttenuation(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_LensAttenuation", ::UnityEngine::Rendering::ColorUtils*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::ColorUtils::getStaticF_s_LensAttenuation() {
  return ::cordl_internals::getStaticField<float_t, "s_LensAttenuation", ::UnityEngine::Rendering::ColorUtils*>();
}
inline float_t UnityEngine::Rendering::ColorUtils::get_lensImperfectionExposureScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "get_lensImperfectionExposureScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::ColorUtils::StandardIlluminantY(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "StandardIlluminantY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ColorUtils::CIExyToLMS(float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "CIExyToLMS", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ColorUtils::ColorBalanceToLMSCoeffs(float_t temperature, float_t tint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ColorBalanceToLMSCoeffs", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, temperature, tint);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
UnityEngine::Rendering::ColorUtils::PrepareShadowsMidtonesHighlights(::by_ref<::UnityEngine::Vector4> inShadows, ::by_ref<::UnityEngine::Vector4> inMidtones,
                                                                     ::by_ref<::UnityEngine::Vector4> inHighlights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                          { "PrepareShadowsMidtonesHighlights",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>>(nullptr, ___internal_method, inShadows, inMidtones,
                                                                                                                                             inHighlights);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
UnityEngine::Rendering::ColorUtils::PrepareLiftGammaGain(::by_ref<::UnityEngine::Vector4> inLift, ::by_ref<::UnityEngine::Vector4> inGamma, ::by_ref<::UnityEngine::Vector4> inGain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                          { "PrepareLiftGammaGain",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>>(nullptr, ___internal_method, inLift, inGamma, inGain);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> UnityEngine::Rendering::ColorUtils::PrepareSplitToning(::by_ref<::UnityEngine::Vector4> inShadows,
                                                                                                                                     ::by_ref<::UnityEngine::Vector4> inHighlights, float_t balance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                          { "PrepareSplitToning", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4>>(nullptr, ___internal_method, inShadows, inHighlights, balance);
}
inline float_t UnityEngine::Rendering::ColorUtils::Luminance(::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "Luminance", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, color);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeEV100(float_t aperture, float_t shutterSpeed, float_t ISO) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                                                                                         { "ComputeEV100", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, aperture, shutterSpeed, ISO);
}
inline float_t UnityEngine::Rendering::ColorUtils::ConvertEV100ToExposure(float_t EV100) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ConvertEV100ToExposure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, EV100);
}
inline float_t UnityEngine::Rendering::ColorUtils::ConvertExposureToEV100(float_t exposure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ConvertExposureToEV100", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, exposure);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeEV100FromAvgLuminance(float_t avgLuminance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ComputeEV100FromAvgLuminance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, avgLuminance);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeISO(float_t aperture, float_t shutterSpeed, float_t targetEV100) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(),
                                                                                         { "ComputeISO", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, aperture, shutterSpeed, targetEV100);
}
inline uint32_t UnityEngine::Rendering::ColorUtils::ToHex(::UnityEngine::Color c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ToHex", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color UnityEngine::Rendering::ColorUtils::ToRGBA(uint32_t hex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ColorUtils*>(), { "ToRGBA", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, hex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ColorUtils::ColorUtils() {}
