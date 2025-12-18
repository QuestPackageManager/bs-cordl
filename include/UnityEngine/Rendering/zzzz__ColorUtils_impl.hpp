#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ColorUtils_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.get_lensImperfectionExposureScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::ColorUtils::get_lensImperfectionExposureScale)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6605d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "get_lensImperfectionExposureScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.StandardIlluminantY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::StandardIlluminantY)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6605db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "StandardIlluminantY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.CIExyToLMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::CIExyToLMS)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6605de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "CIExyToLMS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ColorBalanceToLMSCoeffs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ColorBalanceToLMSCoeffs)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6605e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ColorBalanceToLMSCoeffs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareShadowsMidtonesHighlights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ColorUtils::PrepareShadowsMidtonesHighlights)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6605fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareShadowsMidtonesHighlights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareLiftGammaGain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ColorUtils::PrepareLiftGammaGain)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6606268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareLiftGammaGain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.PrepareSplitToning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> (*)(
    ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Vector4>, float_t)>(&::UnityEngine::Rendering::ColorUtils::PrepareSplitToning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6606628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareSplitToning", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.Luminance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::ByRef<::UnityEngine::Color>)>(&::UnityEngine::Rendering::ColorUtils::Luminance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66065f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "Luminance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeEV100
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeEV100)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66066b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeEV100", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ConvertEV100ToExposure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ConvertEV100ToExposure)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x660674c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ConvertEV100ToExposure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ConvertExposureToEV100
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ConvertExposureToEV100)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66067c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ConvertExposureToEV100",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeEV100FromAvgLuminance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeEV100FromAvgLuminance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6606884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeEV100FromAvgLuminance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ComputeISO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::ColorUtils::ComputeISO)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x660694c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeISO", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ToHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::ColorUtils::ToHex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6606988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ToHex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ColorUtils.ToRGBA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::UnityEngine::Rendering::ColorUtils::ToRGBA)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66069f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ToRGBA", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ColorUtils::setStaticF_s_LightMeterCalibrationConstant(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_LightMeterCalibrationConstant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::ColorUtils::getStaticF_s_LightMeterCalibrationConstant() {
  return ::cordl_internals::getStaticField<float_t, "s_LightMeterCalibrationConstant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get>();
}
inline void UnityEngine::Rendering::ColorUtils::setStaticF_s_LensAttenuation(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_LensAttenuation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::ColorUtils::getStaticF_s_LensAttenuation() {
  return ::cordl_internals::getStaticField<float_t, "s_LensAttenuation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get>();
}
inline float_t UnityEngine::Rendering::ColorUtils::get_lensImperfectionExposureScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "get_lensImperfectionExposureScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::ColorUtils::StandardIlluminantY(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "StandardIlluminantY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, x);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ColorUtils::CIExyToLMS(float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "CIExyToLMS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ColorUtils::ColorBalanceToLMSCoeffs(float_t temperature, float_t tint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ColorBalanceToLMSCoeffs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, temperature, tint);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
UnityEngine::Rendering::ColorUtils::PrepareShadowsMidtonesHighlights(::ByRef<::UnityEngine::Vector4> inShadows, ::ByRef<::UnityEngine::Vector4> inMidtones,
                                                                     ::ByRef<::UnityEngine::Vector4> inHighlights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareShadowsMidtonesHighlights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>, false>(nullptr, ___internal_method, inShadows, inMidtones,
                                                                                                                                                    inHighlights);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
UnityEngine::Rendering::ColorUtils::PrepareLiftGammaGain(::ByRef<::UnityEngine::Vector4> inLift, ::ByRef<::UnityEngine::Vector4> inGamma, ::ByRef<::UnityEngine::Vector4> inGain) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareLiftGammaGain", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>, false>(nullptr, ___internal_method, inLift, inGamma,
                                                                                                                                                    inGain);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> UnityEngine::Rendering::ColorUtils::PrepareSplitToning(::ByRef<::UnityEngine::Vector4> inShadows,
                                                                                                                                     ::ByRef<::UnityEngine::Vector4> inHighlights, float_t balance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "PrepareSplitToning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4>, false>(nullptr, ___internal_method, inShadows, inHighlights, balance);
}
inline float_t UnityEngine::Rendering::ColorUtils::Luminance(::ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "Luminance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, color);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeEV100(float_t aperture, float_t shutterSpeed, float_t ISO) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeEV100", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, aperture, shutterSpeed, ISO);
}
inline float_t UnityEngine::Rendering::ColorUtils::ConvertEV100ToExposure(float_t EV100) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ConvertEV100ToExposure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, EV100);
}
inline float_t UnityEngine::Rendering::ColorUtils::ConvertExposureToEV100(float_t exposure) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ConvertExposureToEV100",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, exposure);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeEV100FromAvgLuminance(float_t avgLuminance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeEV100FromAvgLuminance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, avgLuminance);
}
inline float_t UnityEngine::Rendering::ColorUtils::ComputeISO(float_t aperture, float_t shutterSpeed, float_t targetEV100) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ComputeISO", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, aperture, shutterSpeed, targetEV100);
}
inline uint32_t UnityEngine::Rendering::ColorUtils::ToHex(::UnityEngine::Color c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ToHex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color UnityEngine::Rendering::ColorUtils::ToRGBA(uint32_t hex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ColorUtils*>::get(), "ToRGBA", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, hex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ColorUtils::ColorUtils() {}
