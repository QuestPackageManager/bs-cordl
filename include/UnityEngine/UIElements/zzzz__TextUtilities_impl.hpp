#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextUtilities_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.PostProcessMeasuredSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::UnityEngine::Vector2, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t,
                                           ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t)>(&::UnityEngine::UIElements::TextUtilities::PostProcessMeasuredSize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x7131ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "PostProcessMeasuredSize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.MeasureVisualElementTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::StringW, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode,
                                                                                  float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, ::System::Nullable_1<float_t>)>(
    &::UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x7132144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "MeasureVisualElementTextSize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.MeasureVisualElementTextSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::by_ref<::UnityEngine::TextCore::Text::RenderedText const>, float_t,
                                                                                  ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode,
                                                                                  ::System::Nullable_1<float_t>)>(&::UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x71323e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                { "MeasureVisualElementTextSize",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText const>>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x71325bc;

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
  constexpr static std::size_t addrs = 0x7132328;

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
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x7132674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                           { "GetTextSettingsFrom", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsAdvancedTextEnabledForPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForPanel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7132714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                           { "IsAdvancedTextEnabledForPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x7130578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(), { "IsAdvancedTextEnabledForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextCoreSettingsForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::TextCoreSettings (*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x71327e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "GetTextCoreSettingsForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextWrappingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextWrappingMode (*)(::UnityEngine::UIElements::WhiteSpace, bool)>(
    &::UnityEngine::UIElements::TextUtilities::toTextWrappingMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7132c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "toTextWrappingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::TextOverflow (*)(
    ::UnityEngine::UIElements::TextOverflow, ::UnityEngine::UIElements::OverflowInternal, ::UnityEngine::UIElements::TextOverflowPosition)>(&::UnityEngine::UIElements::TextUtilities::toTextCore)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7132c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                             { "toTextCore",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::TextOverflow>(), ::i2c::type_of<::UnityEngine::UIElements::OverflowInternal>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::TextOverflowPosition>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::PostProcessMeasuredSize(::UnityEngine::UIElements::TextElement* te, ::UnityEngine::Vector2 measuredSize, float_t width,
                                                                                              ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                                              ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "PostProcessMeasuredSize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, te, measuredSize, width, widthMode, height, heightMode, pixelsPerPoint);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te, ::StringW textToMeasure, float_t width,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode,
                                                                                                   ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "MeasureVisualElementTextSize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, te, textToMeasure, width, widthMode, height, heightMode, fontsize);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te,
                                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText const> textToMeasure,
                                                                                                   float_t width, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode,
                                                                                                   ::System::Nullable_1<float_t> fontsize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "MeasureVisualElementTextSize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::RenderedText const>>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement_MeasureMode>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, te, textToMeasure, width, widthMode, height, heightMode, fontsize);
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
inline bool UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForPanel(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                         { "IsAdvancedTextEnabledForPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, panel);
}
inline bool UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                                                         { "IsAdvancedTextEnabledForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::TextCoreSettings UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve, bool ignoreColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "GetTextCoreSettingsForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TextCoreSettings>(nullptr, ___internal_method, ve, ignoreColors);
}
inline ::UnityEngine::TextCore::Text::TextWrappingMode UnityEngine::UIElements::TextUtilities::toTextWrappingMode(::UnityEngine::UIElements::WhiteSpace whiteSpace, bool isSingleLineInputField) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "toTextWrappingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::WhiteSpace>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextWrappingMode>(nullptr, ___internal_method, whiteSpace, isSingleLineInputField);
}
inline ::UnityEngine::TextCore::TextOverflow UnityEngine::UIElements::TextUtilities::toTextCore(::UnityEngine::UIElements::TextOverflow textOverflow,
                                                                                                ::UnityEngine::UIElements::OverflowInternal overflow,
                                                                                                ::UnityEngine::UIElements::TextOverflowPosition position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextUtilities*>(),
                                                           { "toTextCore",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextOverflow>(), ::i2c::type_of<::UnityEngine::UIElements::OverflowInternal>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::TextOverflowPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextOverflow>(nullptr, ___internal_method, textOverflow, overflow, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextUtilities::TextUtilities() {}
