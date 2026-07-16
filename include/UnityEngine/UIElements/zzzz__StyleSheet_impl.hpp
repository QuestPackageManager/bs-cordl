#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mediaQueries", ty:
// "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheet_ImportStruct::StyleSheet_ImportStruct(::UnityW<::UnityEngine::UIElements::StyleSheet> styleSheet, ::ArrayW<::StringW> mediaQueries) noexcept {
  this->styleSheet = styleSheet;
  this->mediaQueries = mediaQueries;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheet_ImportStruct::StyleSheet_ImportStruct() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType::StyleSheet_OrderedSelectorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType::StyleSheet_OrderedSelectorType() {}
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType UnityEngine::UIElements::StyleSheet_OrderedSelectorType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType UnityEngine::UIElements::StyleSheet_OrderedSelectorType::Name{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType UnityEngine::UIElements::StyleSheet_OrderedSelectorType::Type{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType UnityEngine::UIElements::StyleSheet_OrderedSelectorType::Class{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType UnityEngine::UIElements::StyleSheet_OrderedSelectorType::Length{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_importedWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c987e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithErrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c987e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_importedWithErrors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_importedWithWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c987f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c987f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_importedWithWarnings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_rules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleRule*> (::UnityEngine::UIElements::StyleSheet::*)()>(
    &::UnityEngine::UIElements::StyleSheet::get_rules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_rules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_rules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::ArrayW<::UnityEngine::UIElements::StyleRule*>)>(
    &::UnityEngine::UIElements::StyleSheet::set_rules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_rules", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleRule*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_complexSelectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> (::UnityEngine::UIElements::StyleSheet::*)()>(
    &::UnityEngine::UIElements::StyleSheet::get_complexSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_complexSelectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_complexSelectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>)>(
    &::UnityEngine::UIElements::StyleSheet::set_complexSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "set_complexSelectors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_flattenedRecursiveImports
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (::UnityEngine::UIElements::StyleSheet::*)()>(
    &::UnityEngine::UIElements::StyleSheet::get_flattenedRecursiveImports)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_flattenedRecursiveImports", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_contentHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(int32_t)>(&::UnityEngine::UIElements::StyleSheet::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_contentHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_isDefaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_isDefaultStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_isDefaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c98f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_isDefaultStyleSheet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c99030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.FlattenImportedStyleSheetsRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c99034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "FlattenImportedStyleSheetsRecursive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.FlattenImportedStyleSheetsRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleSheet*)>(
    &::UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6c990b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "FlattenImportedStyleSheetsRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.SetupReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::SetupReferences)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x6c98810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetupReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueKeyword (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadKeyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c992b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadFloat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c992bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<float_t>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadFloat)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c99378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "TryReadFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadDimension)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c99440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(
    ::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension>)>(&::UnityEngine::UIElements::StyleSheet::TryReadDimension)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c994f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
            { "TryReadDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadColor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c995bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c99620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                { "TryReadColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c9968c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c996f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "TryReadString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadEnum)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c9975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadEnum)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c997c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "TryReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadVariable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c9982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadVariable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadVariable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c99890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "TryReadVariable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadResourcePath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c998fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadResourcePath", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadResourcePath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c99960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "TryReadResourcePath", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadAssetReference)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c999cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadAssetReference", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadMissingAssetReferenceUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadMissingAssetReferenceUrl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c99a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                           { "ReadMissingAssetReferenceUrl", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::Object*>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadAssetReference)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c99a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                         { "TryReadAssetReference", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueFunction (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadFunction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c99b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFunctionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadFunctionName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c99b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFunctionName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadScalableImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::ScalableImage (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadScalableImage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c99dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadScalableImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.CustomStartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::StyleSheet::CustomStartsWith)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c991fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "CustomStartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c99e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ImportedWithErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ImportedWithErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_ImportedWithErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithErrors = value;
}
constexpr bool& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ImportedWithWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ImportedWithWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_ImportedWithWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithWarnings = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_Rules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rules;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_Rules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rules;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rules = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ComplexSelectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComplexSelectors;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ComplexSelectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComplexSelectors;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComplexSelectors = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floats;
}
constexpr ::ArrayW<float_t> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floats;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_floats(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___floats = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colors;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_colors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colors = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strings;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_strings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strings = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assets;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assets = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_imports() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imports;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_imports() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imports;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_imports(::ArrayW<::UnityEngine::UIElements::StyleSheet_ImportStruct> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___imports = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_FlattenedImportedStyleSheets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedImportedStyleSheets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const&
UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_FlattenedImportedStyleSheets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedImportedStyleSheets;
}
constexpr void
UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FlattenedImportedStyleSheets = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ContentHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_ContentHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_ContentHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentHash = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_scalableImages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalableImages;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_scalableImages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalableImages;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scalableImages = value;
}
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tables;
}
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const&
UnityEngine::UIElements::StyleSheet::__cordl_internal_get_tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tables;
}
constexpr void
UnityEngine::UIElements::StyleSheet::__cordl_internal_set_tables(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tables = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_nonEmptyTablesMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonEmptyTablesMask;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_nonEmptyTablesMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonEmptyTablesMask;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_nonEmptyTablesMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonEmptyTablesMask = value;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector*& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_firstRootSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstRootSelector;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_firstRootSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstRootSelector;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_firstRootSelector(::UnityEngine::UIElements::StyleComplexSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstRootSelector = value;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector*& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_firstWildCardSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstWildCardSelector;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_firstWildCardSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstWildCardSelector;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_firstWildCardSelector(::UnityEngine::UIElements::StyleComplexSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstWildCardSelector = value;
}
constexpr bool& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_IsDefaultStyleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDefaultStyleSheet;
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_IsDefaultStyleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDefaultStyleSheet;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_IsDefaultStyleSheet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDefaultStyleSheet = value;
}
inline void UnityEngine::UIElements::StyleSheet::setStaticF_kCustomPropertyMarker(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kCustomPropertyMarker", ::UnityEngine::UIElements::StyleSheet*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::StyleSheet::getStaticF_kCustomPropertyMarker() {
  return ::cordl_internals::getStaticField<::StringW, "kCustomPropertyMarker", ::UnityEngine::UIElements::StyleSheet*>();
}
inline bool UnityEngine::UIElements::StyleSheet::get_importedWithErrors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithErrors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_importedWithErrors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_importedWithErrors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleSheet::get_importedWithWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_importedWithWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_importedWithWarnings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleRule*> UnityEngine::UIElements::StyleSheet::get_rules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_rules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleRule*>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_rules", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleRule*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> UnityEngine::UIElements::StyleSheet::get_complexSelectors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_complexSelectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "set_complexSelectors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* UnityEngine::UIElements::StyleSheet::get_flattenedRecursiveImports() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_flattenedRecursiveImports", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleSheet::get_contentHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_contentHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_contentHash(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_contentHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleSheet::get_isDefaultStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_isDefaultStyleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::set_isDefaultStyleSheet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_isDefaultStyleSheet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline bool UnityEngine::UIElements::StyleSheet::TryCheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle,
                                                                ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                              { "TryCheckAccess",
                                                                                                { ::i2c::class_of<T>() },
                                                                                                { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>(),
                                                                                                  ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, list, type, handle, value);
}
template <typename T> inline T UnityEngine::UIElements::StyleSheet::CheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "CheckAccess",
                                                                                                           { ::i2c::class_of<T>() },
                                                                                                           { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>(),
                                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, list, type, handle);
}
inline void UnityEngine::UIElements::StyleSheet::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "FlattenImportedStyleSheetsRecursive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet* sheet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                         { "FlattenImportedStyleSheetsRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet);
}
inline void UnityEngine::UIElements::StyleSheet::SetupReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetupReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleValueKeyword UnityEngine::UIElements::StyleSheet::ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueKeyword>(this, ___internal_method, handle);
}
inline float_t UnityEngine::UIElements::StyleSheet::ReadFloat(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadFloat(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "TryReadFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheet::ReadDimension(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadDimension(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                       { "TryReadDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::Dimension>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StyleSheet::ReadColor(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadColor(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "TryReadColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadString(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadString(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "TryReadString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "TryReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadVariable(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadVariable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadVariable(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "TryReadVariable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadResourcePath", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "TryReadResourcePath", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::StyleSheet::ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadAssetReference", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, handle);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                         { "ReadMissingAssetReferenceUrl", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "TryReadAssetReference", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleSheet::ReadFunction(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueFunction>(this, ___internal_method, handle);
}
inline ::StringW UnityEngine::UIElements::StyleSheet::ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFunctionName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::StyleSheets::ScalableImage UnityEngine::UIElements::StyleSheet::ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadScalableImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::ScalableImage>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::CustomStartsWith(::StringW originalString, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "CustomStartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, originalString, pattern);
}
inline void UnityEngine::UIElements::StyleSheet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::StyleSheet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheet*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheet::StyleSheet() {}
