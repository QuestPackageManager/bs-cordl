#pragma once
// IWYU pragma private; include "UnityEngine/ColorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorUtility_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUtility.DoTryParseHtmlColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color32>)>(&::UnityEngine::ColorUtility::DoTryParseHtmlColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6ac86ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "DoTryParseHtmlColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.TryParseHtmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ColorUtility::TryParseHtmlString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ac8870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "TryParseHtmlString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.ToHtmlStringRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Color)>(&::UnityEngine::ColorUtility::ToHtmlStringRGB)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x6ac88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "ToHtmlStringRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.DoTryParseHtmlColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Color32>)>(
    &::UnityEngine::ColorUtility::DoTryParseHtmlColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ac882c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                            { "DoTryParseHtmlColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ColorUtility::DoTryParseHtmlColor(::StringW htmlString, ::by_ref<::UnityEngine::Color32> color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "DoTryParseHtmlColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, htmlString, color);
}
inline bool UnityEngine::ColorUtility::TryParseHtmlString(::StringW htmlString, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "TryParseHtmlString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, htmlString, color);
}
inline ::StringW UnityEngine::ColorUtility::ToHtmlStringRGB(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "ToHtmlStringRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, color);
}
inline bool UnityEngine::ColorUtility::DoTryParseHtmlColor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> htmlString, ::by_ref<::UnityEngine::Color32> color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                          { "DoTryParseHtmlColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, htmlString, color);
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorUtility::ColorUtility() {}
