#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(
    ::UnityEngine::UIElements::StyleSheet*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e07c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(&::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e07c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t styleSheetIndexInStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, styleSheetIndexInStack);
}
inline int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a,
                                                                                  ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "styleSheetIndexInStack", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, int32_t styleSheetIndexInStack,
                                                                                           ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept {
  this->sheet = sheet;
  this->styleSheetIndexInStack = styleSheetIndexInStack;
  this->complexSelector = complexSelector;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
