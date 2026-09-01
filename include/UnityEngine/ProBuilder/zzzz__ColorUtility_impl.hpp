#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\ColorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ColorUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__CIELabColor_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__HSVColor_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__XYZColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.approx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::ProBuilder::ColorUtility::approx)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66ba038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "approx", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.GetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::ColorUtility::GetColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66ba0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "GetColor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.RGBToXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ColorUtility::RGBToXYZ)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66b9998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "RGBToXYZ", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.RGBToXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::ColorUtility::RGBToXYZ)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x66b9a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                                                           { "RGBToXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.XYZToCIE_Lab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::ProBuilder::XYZColor*)>(&::UnityEngine::ProBuilder::ColorUtility::XYZToCIE_Lab)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x66b9d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "XYZToCIE_Lab", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::XYZColor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.DeltaE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::ProBuilder::CIELabColor*, ::UnityEngine::ProBuilder::CIELabColor*)>(
    &::UnityEngine::ProBuilder::ColorUtility::DeltaE)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66ba190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                { "DeltaE", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::CIELabColor*>(), ::i2c::type_of<::UnityEngine::ProBuilder::CIELabColor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.HSVtoRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::ProBuilder::HSVColor*)>(&::UnityEngine::ProBuilder::ColorUtility::HSVtoRGB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66ba1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "HSVtoRGB", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::HSVColor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.HSVtoRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::ColorUtility::HSVtoRGB)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66ba254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                                                           { "HSVtoRGB", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.RGBtoHSV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::HSVColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ColorUtility::RGBtoHSV)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x66b9624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "RGBtoHSV", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.GetColorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ColorUtility::GetColorName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x66ba348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "GetColorName", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorUtility.CIELabFromRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::ColorUtility::CIELabFromRGB)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66ba548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                             { "CIELabFromRGB", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ColorUtility::setStaticF_ColorNameLookup(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>*, "ColorNameLookup", ::UnityEngine::ProBuilder::ColorUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>* UnityEngine::ProBuilder::ColorUtility::getStaticF_ColorNameLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ProBuilder::CIELabColor*>*, "ColorNameLookup",
                                           ::UnityEngine::ProBuilder::ColorUtility*>();
}
inline bool UnityEngine::ProBuilder::ColorUtility::approx(float_t lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "approx", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::ColorUtility::GetColor(::UnityEngine::Vector3 vec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "GetColor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, vec);
}
inline ::UnityEngine::ProBuilder::XYZColor* UnityEngine::ProBuilder::ColorUtility::RGBToXYZ(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "RGBToXYZ", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::XYZColor*>(nullptr, ___internal_method, col);
}
inline ::UnityEngine::ProBuilder::XYZColor* UnityEngine::ProBuilder::ColorUtility::RGBToXYZ(float_t r, float_t g, float_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                                                         { "RGBToXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::XYZColor*>(nullptr, ___internal_method, r, g, b);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::ColorUtility::XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor* xyz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "XYZToCIE_Lab", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::XYZColor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*>(nullptr, ___internal_method, xyz);
}
inline float_t UnityEngine::ProBuilder::ColorUtility::DeltaE(::UnityEngine::ProBuilder::CIELabColor* lhs, ::UnityEngine::ProBuilder::CIELabColor* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                              { "DeltaE", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::CIELabColor*>(), ::i2c::type_of<::UnityEngine::ProBuilder::CIELabColor*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::ColorUtility::HSVtoRGB(::UnityEngine::ProBuilder::HSVColor* hsv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "HSVtoRGB", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::HSVColor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, hsv);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::ColorUtility::HSVtoRGB(float_t h, float_t s, float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                                                         { "HSVtoRGB", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, h, s, v);
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::ColorUtility::RGBtoHSV(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "RGBtoHSV", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::HSVColor*>(nullptr, ___internal_method, color);
}
inline ::StringW UnityEngine::ProBuilder::ColorUtility::GetColorName(::UnityEngine::Color InColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(), { "GetColorName", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, InColor);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::ColorUtility::CIELabFromRGB(float_t R, float_t G, float_t B, float_t Scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorUtility*>(),
                                                           { "CIELabFromRGB", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*>(nullptr, ___internal_method, R, G, B, Scale);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ColorUtility::ColorUtility() {}
