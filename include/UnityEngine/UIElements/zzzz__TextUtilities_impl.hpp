#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextUtilities.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::TextElement*, ::ByRef<::UnityEngine::TextCore::Text::RenderedText>, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode,
                                           float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6adbb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "MeasureVisualElementTextSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement_MeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement_MeasureMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6ad67b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsFontAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TextUtilities::IsFontAssigned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6adbca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextSettingsFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextCore::Text::TextSettings> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ad6d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6ad73c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsAdvancedTextEnabledForElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextCoreSettingsForElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::TextCoreSettings (*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x6adbd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextCoreSettingsForElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextWrappingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextWrappingMode (*)(::UnityEngine::UIElements::WhiteSpace)>(
    &::UnityEngine::UIElements::TextUtilities::toTextWrappingMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad82a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextWrappingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WhiteSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::WhiteSpace (*)(::UnityEngine::UIElements::WhiteSpace, bool)>(
    &::UnityEngine::UIElements::TextUtilities::toTextCore)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6ad6b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WhiteSpace>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.toTextCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::TextOverflow (*)(
    ::UnityEngine::UIElements::TextOverflow, ::UnityEngine::UIElements::OverflowInternal)>(&::UnityEngine::UIElements::TextUtilities::toTextCore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad6b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextOverflow>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::OverflowInternal>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize(::UnityEngine::UIElements::TextElement* te,
                                                                                                   ::ByRef<::UnityEngine::TextCore::Text::RenderedText> textToMeasure, float_t width,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                                                                   ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "MeasureVisualElementTextSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::RenderedText>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement_MeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement_MeasureMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, te, textToMeasure, width, widthMode, height, heightMode);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::UIElements::TextUtilities::GetFontAsset(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>, false>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve);
}
inline ::UnityW<::UnityEngine::TextCore::Text::TextSettings> UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::TextSettings>, false>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsAdvancedTextEnabledForElement(::UnityEngine::UIElements::TextElement* te) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsAdvancedTextEnabledForElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, te);
}
inline ::UnityEngine::UIElements::UIR::TextCoreSettings UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve, bool ignoreColors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextCoreSettingsForElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TextCoreSettings, false>(nullptr, ___internal_method, ve, ignoreColors);
}
inline ::UnityEngine::TextCore::Text::TextWrappingMode UnityEngine::UIElements::TextUtilities::toTextWrappingMode(::UnityEngine::UIElements::WhiteSpace whiteSpace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextWrappingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WhiteSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextWrappingMode, false>(nullptr, ___internal_method, whiteSpace);
}
inline ::UnityEngine::TextCore::WhiteSpace UnityEngine::UIElements::TextUtilities::toTextCore(::UnityEngine::UIElements::WhiteSpace whiteSpace, bool isInputField) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WhiteSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::WhiteSpace, false>(nullptr, ___internal_method, whiteSpace, isInputField);
}
inline ::UnityEngine::TextCore::TextOverflow UnityEngine::UIElements::TextUtilities::toTextCore(::UnityEngine::UIElements::TextOverflow textOverflow,
                                                                                                ::UnityEngine::UIElements::OverflowInternal overflow) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "toTextCore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextOverflow>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::OverflowInternal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextOverflow, false>(nullptr, ___internal_method, textOverflow, overflow);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextUtilities::TextUtilities() {}
