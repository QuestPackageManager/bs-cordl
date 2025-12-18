#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextSpan.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::TextSpan.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::TextSpan::*)()>(&::UnityEngine::TextCore::TextSpan::ToString)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x69f6920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::TextSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::TextSpan>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::TextSpan::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::TextSpan>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
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
