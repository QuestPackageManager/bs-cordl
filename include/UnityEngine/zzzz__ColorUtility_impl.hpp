#pragma once
// IWYU pragma private; include "UnityEngine/ColorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorUtility_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUtility.DoTryParseHtmlColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color32>)>(&::UnityEngine::ColorUtility::DoTryParseHtmlColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f24494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "DoTryParseHtmlColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.get_HtmlColorValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Color32> (*)()>(&::UnityEngine::ColorUtility::get_HtmlColorValues)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6f24618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "get_HtmlColorValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.get_HtmlColorNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::StringW> (*)()>(&::UnityEngine::ColorUtility::get_HtmlColorNames)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x6f24844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "get_HtmlColorNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.TryParseHtmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ColorUtility::TryParseHtmlString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f24c7c;

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
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f24ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "ToHtmlStringRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.ToHtmlStringRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::UnityEngine::Color const>)>(&::UnityEngine::ColorUtility::ToHtmlStringRGB)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6f24d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "ToHtmlStringRGB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.TryParseHtmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ColorUtility::TryParseHtmlString)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6f25054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                                                { "TryParseHtmlString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.IsHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::UnityEngine::ColorUtility::IsHexString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6f253cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "IsHexString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.TryParseHexColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ColorUtility::TryParseHexColor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6f254b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                                                             { "TryParseHexColor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.TryHexToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<uint8_t>)>(&::UnityEngine::ColorUtility::TryHexToByte)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6f25670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "TryHexToByte", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.HexDigitValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::UnityEngine::ColorUtility::HexDigitValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6f25768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "HexDigitValue", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUtility.DoTryParseHtmlColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Color32>)>(
    &::UnityEngine::ColorUtility::DoTryParseHtmlColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f245d4;

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
inline ::System::ReadOnlySpan_1<::UnityEngine::Color32> UnityEngine::ColorUtility::get_HtmlColorValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "get_HtmlColorValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Color32>>(nullptr, ___internal_method);
}
inline ::System::ReadOnlySpan_1<::StringW> UnityEngine::ColorUtility::get_HtmlColorNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "get_HtmlColorNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::StringW>>(nullptr, ___internal_method);
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
inline ::StringW UnityEngine::ColorUtility::ToHtmlStringRGB(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Color const> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "ToHtmlStringRGB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, color);
}
inline bool UnityEngine::ColorUtility::TryParseHtmlString(::System::ReadOnlySpan_1<char16_t> input, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                                                           { "TryParseHtmlString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, color);
}
inline bool UnityEngine::ColorUtility::IsHexString(::System::ReadOnlySpan_1<char16_t> span) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "IsHexString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span);
}
inline bool UnityEngine::ColorUtility::TryParseHexColor(::System::ReadOnlySpan_1<char16_t> hex, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(),
                                                           { "TryParseHexColor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hex, color);
}
inline bool UnityEngine::ColorUtility::TryHexToByte(::System::ReadOnlySpan_1<char16_t> span, ::by_ref<uint8_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "TryHexToByte", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, result);
}
inline int32_t UnityEngine::ColorUtility::HexDigitValue(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUtility*>(), { "HexDigitValue", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
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
