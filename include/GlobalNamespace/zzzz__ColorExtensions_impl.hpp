#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorExtensions_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.FromHtmlStringRGBA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color>)>(&::GlobalNamespace::ColorExtensions::FromHtmlStringRGBA)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3322edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "FromHtmlStringRGBA", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.GetColorFromHtmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::StringW)>(&::GlobalNamespace::ColorExtensions::GetColorFromHtmlString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33230b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "GetColorFromHtmlString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.SaturatedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::SaturatedColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x33230f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "SaturatedColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3323144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithMultipliedAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithMultipliedAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(),
                                                                                           { "ColorWithMultipliedAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3323154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithR", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithG)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332315c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithG", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3323164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.ColorWithValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::ColorWithValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x332316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithValue", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.MultiplyRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::MultiplyRGB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33231b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "MultiplyRGB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.LerpRGBUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorExtensions::LerpRGBUnclamped)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33231c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(),
                                                { "LerpRGBUnclamped", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions.IsEqualTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::GlobalNamespace::ColorExtensions::IsEqualTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33231f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "IsEqualTo", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorExtensions._FromHtmlStringRGBA_g__HtmlStringToFloat_0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::GlobalNamespace::ColorExtensions::_FromHtmlStringRGBA_g__HtmlStringToFloat_0_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3323040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "<FromHtmlStringRGBA>g__HtmlStringToFloat|0_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ColorExtensions::FromHtmlStringRGBA(::StringW htmlColor, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "FromHtmlStringRGBA", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, htmlColor, color);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::GetColorFromHtmlString(::StringW colorHtmlString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "GetColorFromHtmlString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, colorHtmlString);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::SaturatedColor(::UnityEngine::Color color, float_t saturation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "SaturatedColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, saturation);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithAlpha(::UnityEngine::Color color, float_t alpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, alpha);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithMultipliedAlpha(::UnityEngine::Color color, float_t alphaMultiplier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(),
                                                                                         { "ColorWithMultipliedAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, alphaMultiplier);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithR(::UnityEngine::Color color, float_t r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithR", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, r);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithG(::UnityEngine::Color color, float_t g) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithG", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, g);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithB(::UnityEngine::Color color, float_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, b);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::ColorWithValue(::UnityEngine::Color color, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "ColorWithValue", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color, value);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::MultiplyRGB(::UnityEngine::Color c, float_t m) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "MultiplyRGB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c, m);
}
inline ::UnityEngine::Color GlobalNamespace::ColorExtensions::LerpRGBUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(),
                                                           { "LerpRGBUnclamped", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, a, b, t);
}
inline bool GlobalNamespace::ColorExtensions::IsEqualTo(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(),
                                                                                         { "IsEqualTo", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline float_t GlobalNamespace::ColorExtensions::_FromHtmlStringRGBA_g__HtmlStringToFloat_0_0(::StringW htmlColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorExtensions*>(), { "<FromHtmlStringRGBA>g__HtmlStringToFloat|0_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, htmlColor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorExtensions::ColorExtensions() {}
