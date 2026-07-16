#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/SelectorMatchRecord.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d1384c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d13860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
            { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t styleSheetIndexInStack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sheet, styleSheetIndexInStack);
}
inline int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a,
                                                                                  ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
          { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleSheetIndexInStack", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, int32_t styleSheetIndexInStack,
                                                                                           ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept {
  this->sheet = sheet;
  this->styleSheetIndexInStack = styleSheetIndexInStack;
  this->complexSelector = complexSelector;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord() {}
