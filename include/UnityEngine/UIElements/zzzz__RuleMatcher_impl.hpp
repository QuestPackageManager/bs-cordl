#pragma once
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuleMatcher.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::RuleMatcher::*)()>(&::UnityEngine::UIElements::RuleMatcher::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f13194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::RuleMatcher::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "complexSelector", ty:
// "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept {
  this->sheet = sheet;
  this->complexSelector = complexSelector;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
