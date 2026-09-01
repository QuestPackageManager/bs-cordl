#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\TextSpan.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::TextSpan.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::TextSpan::*)()>(&::UnityEngine::TextCore::TextSpan::ToString)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6bc21e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), { ::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::TextSpan::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "fontWeight", ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::TextSpan::TextSpan(int32_t startIndex, int32_t length, ::System::IntPtr fontAsset, int32_t fontSize, ::UnityEngine::Color32 color,
                                                      ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, int32_t linkID) noexcept {
  this->startIndex = startIndex;
  this->length = length;
  this->fontAsset = fontAsset;
  this->fontSize = fontSize;
  this->color = color;
  this->fontStyle = fontStyle;
  this->fontWeight = fontWeight;
  this->linkID = linkID;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::TextSpan::TextSpan() {}
