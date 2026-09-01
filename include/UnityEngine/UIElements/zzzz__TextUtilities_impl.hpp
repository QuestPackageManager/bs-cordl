#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextUtilities_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/TextCore/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.MeasureVisualElementTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::by_ref<::UnityEngine::TextCore::Text::RenderedText>, float_t,
                                                                                  ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(
    &::UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6ca73c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "MeasureVisualElementTextSize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6ca2078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "GetFontAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsFontAssigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TextUtilities::IsFontAssigned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ca7560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "IsFontAssigned", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextSettingsFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::TextSettings> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ca2618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                           { "GetTextSettingsFrom", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TextElement*)>(&::UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6ca2c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                           { "IsAdvancedTextEnabledForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextCoreSettingsForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::TextCoreSettings (*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x6ca7618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "GetTextCoreSettingsForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextWrappingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextWrappingMode (*)(::UnityEngine::UIElements::WhiteSpace)>(
    &::UnityEngine::UIElements::TextUtilities::toTextWrappingMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ca3b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "toTextWrappingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::WhiteSpace (*)(::UnityEngine::UIElements::WhiteSpace, bool)>(&::UnityEngine::UIElements::TextUtilities::toTextCore)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6ca23f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                           { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::TextOverflow (*)(::UnityEngine::UIElements::TextOverflow, ::UnityEngine::UIElements::OverflowInternal)>(
    &::UnityEngine::UIElements::TextUtilities::toTextCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextOverflow>(), ::i2c::type_of<::UnityEngine::UIElements::OverflowInternal>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te,
                                                                                                   ::by_ref<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "MeasureVisualElementTextSize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText>>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, te, textToMeasure, width, widthMode, height, heightMode);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::UIElements::TextUtilities::GetFontAsset(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "GetFontAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "IsFontAssigned", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline ::UnityW<::UnityEngine::TextCore::Text::TextSettings> UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "GetTextSettingsFrom", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::TextSettings>>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                         { "IsAdvancedTextEnabledForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, te);
}
inline ::UnityEngine::UIElements::UIR::TextCoreSettings UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve, bool ignoreColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "GetTextCoreSettingsForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TextCoreSettings>(nullptr, ___internal_method, ve, ignoreColors);
}
inline ::UnityEngine::TextCore::Text::TextWrappingMode UnityEngine::UIElements::TextUtilities::toTextWrappingMode(::UnityEngine::UIElements::WhiteSpace whiteSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "toTextWrappingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextWrappingMode>(nullptr, ___internal_method, whiteSpace);
}
inline ::UnityEngine::TextCore::WhiteSpace UnityEngine::UIElements::TextUtilities::toTextCore(::UnityEngine::UIElements::WhiteSpace whiteSpace, bool isInputField) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                         { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::WhiteSpace>(nullptr, ___internal_method, whiteSpace, isInputField);
}
inline ::UnityEngine::TextCore::TextOverflow UnityEngine::UIElements::TextUtilities::toTextCore(::UnityEngine::UIElements::TextOverflow textOverflow,
                                                                                                ::UnityEngine::UIElements::OverflowInternal overflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                              { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextOverflow>(), ::i2c::type_of<::UnityEngine::UIElements::OverflowInternal>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextOverflow>(nullptr, ___internal_method, textOverflow, overflow);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextUtilities::TextUtilities() {}
