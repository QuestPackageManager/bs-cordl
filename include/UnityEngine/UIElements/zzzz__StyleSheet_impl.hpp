#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleSheet_RebuildOptions::StyleSheet_RebuildOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheet_RebuildOptions::StyleSheet_RebuildOptions() {}
constexpr ::UnityEngine::UIElements::StyleSheet_RebuildOptions UnityEngine::UIElements::StyleSheet_RebuildOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::StyleSheet_RebuildOptions UnityEngine::UIElements::StyleSheet_RebuildOptions::Synchronous{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mediaQueries", ty:
// "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleSheet_ImportStruct::StyleSheet_ImportStruct(::UnityW<::UnityEngine::UIElements::StyleSheet> styleSheet, ::ArrayW<::StringW> mediaQueries) noexcept {
  this->styleSheet = styleSheet;
  this->mediaQueries = mediaQueries;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheet_ImportStruct::StyleSheet_ImportStruct() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
  constexpr static std::size_t addrs = 0x7115c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithErrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115c2c;

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
  constexpr static std::size_t addrs = 0x7115c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_importedWithWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_importedWithWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115c3c;

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
  constexpr static std::size_t addrs = 0x7115c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_rules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_flattenedRecursiveImports
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (::UnityEngine::UIElements::StyleSheet::*)()>(
    &::UnityEngine::UIElements::StyleSheet::get_flattenedRecursiveImports)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_flattenedRecursiveImports", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_contentHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(int32_t)>(&::UnityEngine::UIElements::StyleSheet::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "set_contentHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_tables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> (
    ::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_tables)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x7115c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_tables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.get_isDefaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::get_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_isDefaultStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.set_isDefaultStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(bool)>(&::UnityEngine::UIElements::StyleSheet::set_isDefaultStyleSheet)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x7115f50;

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
  constexpr static std::size_t addrs = 0x7116068;

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
  constexpr static std::size_t addrs = 0x71164ec;

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
  constexpr static std::size_t addrs = 0x7116568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "FlattenImportedStyleSheetsRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRule* (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::AddRule)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71166b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddRuleAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRule* (::UnityEngine::UIElements::StyleSheet::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheet::AddRuleAtIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71166c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRuleAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRule* (::UnityEngine::UIElements::StyleSheet::*)(::StringW)>(&::UnityEngine::UIElements::StyleSheet::AddRule)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71167a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRule", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddRuleAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRule* (::UnityEngine::UIElements::StyleSheet::*)(int32_t, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::AddRuleAtIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x71166c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRuleAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.RemoveRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleRule*)>(&::UnityEngine::UIElements::StyleSheet::RemoveRule)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x71167b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RemoveRule", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.RemoveRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(int32_t)>(&::UnityEngine::UIElements::StyleSheet::RemoveRule)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7116870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RemoveRule", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.SetRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::ArrayW<::UnityEngine::UIElements::StyleRule*>)>(
    &::UnityEngine::UIElements::StyleSheet::SetRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7116950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetRules", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleRule*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.RequestRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleSheet_RebuildOptions)>(
    &::UnityEngine::UIElements::StyleSheet::RequestRebuild)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x71157e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                           { "RequestRebuild", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet_RebuildOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.RebuildIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::RebuildIfNecessary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7116a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RebuildIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.SetupReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::SetupReferences)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x711606c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetupReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueKeyword)>(
    &::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7116a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueFunction)>(
    &::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7116a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(float_t)>(&::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7116a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleSheets::Dimension)>(
    &::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7116aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7116b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleSheets::ScalableImage)>(
    &::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7116b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::StringW)>(&::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7116be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7116c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheet::*)(::System::Enum*)>(&::UnityEngine::UIElements::StyleSheet::AddValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7116ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueKeyword (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadKeyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7116d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(
    ::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::StyleValueKeyword>)>(&::UnityEngine::UIElements::StyleSheet::TryReadKeyword)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7116d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "TryReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadFloat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x7116d58;

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
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x711526c;

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
  constexpr static std::size_t addrs = 0x7116e0c;

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
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7116ec0;

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
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x7116fb0;

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
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x71153d0;

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
  constexpr static std::size_t addrs = 0x71170f8;

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
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x711533c;

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
  constexpr static std::size_t addrs = 0x7117094;

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
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x711715c;

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
  constexpr static std::size_t addrs = 0x71171f0;

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
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7117254;

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
  constexpr static std::size_t addrs = 0x71172e8;

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
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x71151d8;

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
  constexpr static std::size_t addrs = 0x711734c;

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
  constexpr static std::size_t addrs = 0x71173b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                           { "ReadMissingAssetReferenceUrl", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadMissingAssetReferenceUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadMissingAssetReferenceUrl)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7117414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                { "TryReadMissingAssetReferenceUrl", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::Object*>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadAssetReference)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7115144;

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
  constexpr static std::size_t addrs = 0x71174a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(
    ::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::StyleValueFunction>)>(&::UnityEngine::UIElements::StyleSheet::TryReadFunction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x71174b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "TryReadFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueFunction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadFunctionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadFunctionName)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x71174c4;

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
  constexpr static std::size_t addrs = 0x711767c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadScalableImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadScalableImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(
    ::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage>)>(&::UnityEngine::UIElements::StyleSheet::TryReadScalableImage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x71176e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
            { "TryReadScalableImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadStylePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StylePropertyName (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadStylePropertyName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x711774c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                           { "ReadStylePropertyName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadStylePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(
    ::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::StylePropertyName>)>(&::UnityEngine::UIElements::StyleSheet::TryReadStylePropertyName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x71177c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
            { "TryReadStylePropertyName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StylePropertyName>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x7117870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::Length>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadLength)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x71178ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                         { "TryReadLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Angle (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadAngle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x7117990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::Angle>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadAngle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x7117a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                         { "TryReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Angle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.ReadTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TimeValue (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheet::ReadTimeValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7117b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadTimeValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.TryReadTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheet::*)(::UnityEngine::UIElements::StyleValueHandle, ::by_ref<::UnityEngine::UIElements::TimeValue>)>(
    &::UnityEngine::UIElements::StyleSheet::TryReadTimeValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x7117b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "TryReadTimeValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TimeValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(
    ::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::StyleValueKeyword)>(&::UnityEngine::UIElements::StyleSheet::WriteKeyword)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7117b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "WriteKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, float_t)>(
    &::UnityEngine::UIElements::StyleSheet::WriteFloat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7117ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "WriteFloat", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(
    ::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::StyleSheets::Dimension)>(&::UnityEngine::UIElements::StyleSheet::WriteDimension)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                         { "WriteDimension", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::StyleSheet::WriteColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                { "WriteColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::WriteString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "WriteString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteEnumAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::WriteEnumAsString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "WriteEnumAsString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::WriteVariable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "WriteVariable", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteResourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::WriteResourcePath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                             { "WriteResourcePath", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::Object*)>(
    &::UnityEngine::UIElements::StyleSheet::WriteAssetReference)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7117e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                { "WriteAssetReference", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteMissingAssetReferenceUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::StringW)>(
    &::UnityEngine::UIElements::StyleSheet::WriteMissingAssetReferenceUrl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7117f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                { "WriteMissingAssetReferenceUrl", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(
    ::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::StyleValueFunction)>(&::UnityEngine::UIElements::StyleSheet::WriteFunction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7117f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "WriteFunction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteScalableImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(
    ::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::StyleSheets::ScalableImage)>(&::UnityEngine::UIElements::StyleSheet::WriteScalableImage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x7117fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
            { "WriteScalableImage", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteStylePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(
    ::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::StylePropertyName)>(&::UnityEngine::UIElements::StyleSheet::WriteStylePropertyName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x7118014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
            { "WriteStylePropertyName", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteCommaSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>)>(
    &::UnityEngine::UIElements::StyleSheet::WriteCommaSeparator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x71180cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "WriteCommaSeparator", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::StyleSheet::WriteLength)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x71180dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                         { "WriteLength", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::Angle)>(
    &::UnityEngine::UIElements::StyleSheet::WriteAngle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x71181a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                         { "WriteAngle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.WriteTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)(::by_ref<::UnityEngine::UIElements::StyleValueHandle>, ::UnityEngine::UIElements::TimeValue)>(
    &::UnityEngine::UIElements::StyleSheet::WriteTimeValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x7118274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                            { "WriteTimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::TimeValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet.MarkAsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::MarkAsChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7116958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "MarkAsChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheet::*)()>(&::UnityEngine::UIElements::StyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x71182f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_RequiresRebuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresRebuild;
}
constexpr bool const& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_RequiresRebuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresRebuild;
}
constexpr void UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_RequiresRebuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresRebuild = value;
}
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
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>& UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_Tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tables;
}
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> const&
UnityEngine::UIElements::StyleSheet::__cordl_internal_get_m_Tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tables;
}
constexpr void
UnityEngine::UIElements::StyleSheet::__cordl_internal_set_m_Tables(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tables = value;
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
inline ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*> UnityEngine::UIElements::StyleSheet::get_tables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "get_tables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>>(this, ___internal_method);
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
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleSheet::AddRule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRule*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleSheet::AddRuleAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRuleAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRule*>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleSheet::AddRule(::StringW selector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRule", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRule*>(this, ___internal_method, selector);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleSheet::AddRuleAtIndex(int32_t index, ::StringW selector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddRuleAtIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRule*>(this, ___internal_method, index, selector);
}
inline bool UnityEngine::UIElements::StyleSheet::RemoveRule(::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RemoveRule", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rule);
}
inline void UnityEngine::UIElements::StyleSheet::RemoveRule(int32_t ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RemoveRule", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ruleIndex);
}
inline void UnityEngine::UIElements::StyleSheet::SetRules(::ArrayW<::UnityEngine::UIElements::StyleRule*> newRules) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetRules", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleRule*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRules);
}
inline void UnityEngine::UIElements::StyleSheet::RequestRebuild(::UnityEngine::UIElements::StyleSheet_RebuildOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                         { "RequestRebuild", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet_RebuildOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void UnityEngine::UIElements::StyleSheet::RebuildIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "RebuildIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheet::SetupReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "SetupReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleSheet::AddValueToArray(::by_ref<::ArrayW<T>> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "AddValueToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleSheet::InsertValueInArray(::by_ref<::ArrayW<T>> array, int32_t index, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "InsertValueInArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, index, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::UIElements::StyleValueKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, keyword);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::UIElements::StyleValueFunction function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, function);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::UIElements::StyleSheets::Dimension value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::UIElements::StyleSheets::ScalableImage value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheet::AddValue(::System::Enum* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "AddValue", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleValueKeyword UnityEngine::UIElements::StyleSheet::ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueKeyword>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleValueKeyword> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "TryReadKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
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
template <typename TEnum>
  requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum UnityEngine::UIElements::StyleSheet::ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadEnum", { ::i2c::class_of<TEnum>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEnum>() })));
  return ::cordl_internals::RunMethodRethrow<TEnum>(this, ___internal_method, handle);
}
template <typename TEnum>
  requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline bool UnityEngine::UIElements::StyleSheet::TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<TEnum> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "TryReadEnum", { ::i2c::class_of<TEnum>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<TEnum>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEnum>() })));
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
inline bool UnityEngine::UIElements::StyleSheet::TryReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "TryReadMissingAssetReferenceUrl", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
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
inline bool UnityEngine::UIElements::StyleSheet::TryReadFunction(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleValueFunction> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "TryReadFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueFunction>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
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
inline bool UnityEngine::UIElements::StyleSheet::TryReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
          { "TryReadScalableImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::ScalableImage>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::StylePropertyName UnityEngine::UIElements::StyleSheet::ReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadStylePropertyName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyName>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadStylePropertyName(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::StylePropertyName> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
          { "TryReadStylePropertyName", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StylePropertyName>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheet::ReadLength(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadLength(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::Length> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                       { "TryReadLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::StyleSheet::ReadAngle(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadAngle(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::Angle> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                       { "TryReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Angle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::TimeValue UnityEngine::UIElements::StyleSheet::ReadTimeValue(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "ReadTimeValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeValue>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleSheet::TryReadTimeValue(::UnityEngine::UIElements::StyleValueHandle handle, ::by_ref<::UnityEngine::UIElements::TimeValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "TryReadTimeValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TimeValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteKeyword(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleValueKeyword value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "WriteKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteFloat(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteFloat", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteDimension(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleSheets::Dimension dimension) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "WriteDimension", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, dimension);
}
inline void UnityEngine::UIElements::StyleSheet::WriteColor(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, color);
}
inline void UnityEngine::UIElements::StyleSheet::WriteString(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
template <typename TEnum> inline void UnityEngine::UIElements::StyleSheet::WriteEnum(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, TEnum value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "WriteEnum", { ::i2c::class_of<TEnum>() }, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<TEnum>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEnum>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteEnumAsString(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW valueStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteEnumAsString", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, valueStr);
}
inline void UnityEngine::UIElements::StyleSheet::WriteVariable(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW variableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteVariable", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, variableName);
}
inline void UnityEngine::UIElements::StyleSheet::WriteResourcePath(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                           { "WriteResourcePath", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, resourcePath);
}
inline void UnityEngine::UIElements::StyleSheet::WriteAssetReference(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "WriteAssetReference", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteMissingAssetReferenceUrl(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::StringW assetReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "WriteMissingAssetReferenceUrl", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, assetReference);
}
inline void UnityEngine::UIElements::StyleSheet::WriteFunction(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleValueFunction function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                          { "WriteFunction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, function);
}
inline void UnityEngine::UIElements::StyleSheet::WriteScalableImage(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StyleSheets::ScalableImage scalableImage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
          { "WriteScalableImage", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, scalableImage);
}
inline void UnityEngine::UIElements::StyleSheet::WriteStylePropertyName(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::StylePropertyName propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                       { "WriteStylePropertyName", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, propertyName);
}
inline void UnityEngine::UIElements::StyleSheet::WriteCommaSeparator(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                                                                         { "WriteCommaSeparator", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::StyleSheet::WriteLength(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::Length value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                       { "WriteLength", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteAngle(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::Angle value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                              { "WriteAngle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::WriteTimeValue(::by_ref<::UnityEngine::UIElements::StyleValueHandle> handle, ::UnityEngine::UIElements::TimeValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(),
                                       { "WriteTimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleValueHandle>>(), ::i2c::type_of<::UnityEngine::UIElements::TimeValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, value);
}
inline void UnityEngine::UIElements::StyleSheet::MarkAsChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheet*>(), { "MarkAsChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
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
