#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InheritedData.hpp"
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InheritedData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::InheritedData (::UnityEngine::UIElements::InheritedData::*)()>(&::UnityEngine::UIElements::InheritedData::Copy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c8aac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InheritedData::*)(::by_ref<::UnityEngine::UIElements::InheritedData>)>(
    &::UnityEngine::UIElements::InheritedData::CopyFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8aad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::InheritedData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::InheritedData, ::UnityEngine::UIElements::InheritedData)>(
    &::UnityEngine::UIElements::InheritedData::op_Equality)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6c8aad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::InheritedData>(), ::i2c::type_of<::UnityEngine::UIElements::InheritedData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InheritedData::*)(::UnityEngine::UIElements::InheritedData)>(
    &::UnityEngine::UIElements::InheritedData::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c8ad80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::InheritedData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InheritedData::*)(::System::Object*)>(&::UnityEngine::UIElements::InheritedData::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c8adcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { ::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InheritedData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::InheritedData::*)()>(&::UnityEngine::UIElements::InheritedData::GetHashCode)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6c8ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { ::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::InheritedData UnityEngine::UIElements::InheritedData::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::InheritedData>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InheritedData::CopyFrom(::by_ref<::UnityEngine::UIElements::InheritedData> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::InheritedData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::InheritedData::op_Equality(::UnityEngine::UIElements::InheritedData lhs, ::UnityEngine::UIElements::InheritedData rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::InheritedData>(), ::i2c::type_of<::UnityEngine::UIElements::InheritedData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::InheritedData::Equals(::UnityEngine::UIElements::InheritedData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::InheritedData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::InheritedData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::InheritedData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::InheritedData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
constexpr UnityEngine::UIElements::InheritedData::operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>"
constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*
UnityEngine::UIElements::InheritedData::i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__InheritedData_() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::InheritedData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
constexpr UnityEngine::UIElements::InheritedData::operator ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>* UnityEngine::UIElements::InheritedData::i___System__IEquatable_1___UnityEngine__UIElements__InheritedData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::InheritedData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontSize", ty: "::UnityEngine::UIElements::Length", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "textShadow", ty:
// "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityEditorTextRenderingMode", ty: "::UnityEngine::UIElements::EditorTextRenderingMode",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unityFont", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityFontDefinition", ty:
// "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityFontStyleAndWeight", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "unityParagraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityTextAlign", ty: "::UnityEngine::TextAnchor",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unityTextGenerator", ty: "::UnityEngine::TextGeneratorType", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "unityTextOutlineColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityTextOutlineWidth", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "visibility", ty: "::UnityEngine::UIElements::Visibility", modifiers: "", def_value: Some("{}") }, CppParam { name: "whiteSpace", ty: "::UnityEngine::UIElements::WhiteSpace",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::InheritedData::InheritedData(::UnityEngine::Color color, ::UnityEngine::UIElements::Length fontSize, ::UnityEngine::UIElements::Length letterSpacing,
                                                                  ::UnityEngine::UIElements::TextShadow textShadow, ::UnityEngine::UIElements::EditorTextRenderingMode unityEditorTextRenderingMode,
                                                                  ::UnityW<::UnityEngine::Font> unityFont, ::UnityEngine::UIElements::FontDefinition unityFontDefinition,
                                                                  ::UnityEngine::FontStyle unityFontStyleAndWeight, ::UnityEngine::UIElements::Length unityParagraphSpacing,
                                                                  ::UnityEngine::TextAnchor unityTextAlign, ::UnityEngine::TextGeneratorType unityTextGenerator,
                                                                  ::UnityEngine::Color unityTextOutlineColor, float_t unityTextOutlineWidth, ::UnityEngine::UIElements::Visibility visibility,
                                                                  ::UnityEngine::UIElements::WhiteSpace whiteSpace, ::UnityEngine::UIElements::Length wordSpacing) noexcept {
  this->color = color;
  this->fontSize = fontSize;
  this->letterSpacing = letterSpacing;
  this->textShadow = textShadow;
  this->unityEditorTextRenderingMode = unityEditorTextRenderingMode;
  this->unityFont = unityFont;
  this->unityFontDefinition = unityFontDefinition;
  this->unityFontStyleAndWeight = unityFontStyleAndWeight;
  this->unityParagraphSpacing = unityParagraphSpacing;
  this->unityTextAlign = unityTextAlign;
  this->unityTextGenerator = unityTextGenerator;
  this->unityTextOutlineColor = unityTextOutlineColor;
  this->unityTextOutlineWidth = unityTextOutlineWidth;
  this->visibility = visibility;
  this->whiteSpace = whiteSpace;
  this->wordSpacing = wordSpacing;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InheritedData::InheritedData() {}
