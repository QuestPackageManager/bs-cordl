#pragma once
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CursorPositionStylePainterParameters_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CursorPositionStylePainterParameters.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CursorPositionStylePainterParameters (*)(
    ::UnityEngine::UIElements::VisualElement*, ::StringW)>(&::UnityEngine::UIElements::CursorPositionStylePainterParameters::GetDefault)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x350bc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(), "GetDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CursorPositionStylePainterParameters.GetTextNativeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextNativeSettings (::UnityEngine::UIElements::CursorPositionStylePainterParameters::*)(
    float_t)>(&::UnityEngine::UIElements::CursorPositionStylePainterParameters::GetTextNativeSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x350bdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(), "GetTextNativeSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::CursorPositionStylePainterParameters UnityEngine::UIElements::CursorPositionStylePainterParameters::GetDefault(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                                                                 ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(), "GetDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CursorPositionStylePainterParameters, false>(nullptr, ___internal_method, ve, text);
}
inline ::UnityEngine::UIElements::TextNativeSettings UnityEngine::UIElements::CursorPositionStylePainterParameters::GetTextNativeSettings(float_t scaling) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(), "GetTextNativeSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextNativeSettings, false>(this, ___internal_method, scaling);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cursorIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CursorPositionStylePainterParameters::CursorPositionStylePainterParameters(::UnityEngine::Rect rect, ::StringW text, ::UnityW<::UnityEngine::Font> font,
                                                                                                                int32_t fontSize, ::UnityEngine::FontStyle fontStyle, ::UnityEngine::TextAnchor anchor,
                                                                                                                float_t wordWrapWidth, bool richText, int32_t cursorIndex) noexcept {
  this->rect = rect;
  this->text = text;
  this->font = font;
  this->fontSize = fontSize;
  this->fontStyle = fontStyle;
  this->anchor = anchor;
  this->wordWrapWidth = wordWrapWidth;
  this->richText = richText;
  this->cursorIndex = cursorIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CursorPositionStylePainterParameters::CursorPositionStylePainterParameters() {}
