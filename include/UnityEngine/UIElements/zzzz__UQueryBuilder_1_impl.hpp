#pragma once
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryBuilder_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::UQueryBuilder_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_styleSelectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "get_styleSelectors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_parts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "get_parts",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::_ctor(::UnityEngine::UIElements::VisualElement* visualElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visualElement);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Class(::StringW classname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Class", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method, classname);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Name(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Name", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method, id);
}
/// @param name: ::StringW (default: nullptr)
/// @param className: ::StringW (default: nullptr)
template <typename T> template <typename T2> inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::OfType(::StringW name, ::StringW className) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "OfType",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(this, ___internal_method, name, className);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::SingleBaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "SingleBaseType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddClass(::StringW c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddClass", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddName(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename T> template <typename T2> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
template <typename T2>
inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::AddRelationship(::UnityEngine::UIElements::StyleSelectorRelationship relationship) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddRelationship",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorRelationship>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(this, ___internal_method, relationship);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddPseudoStatesRuleIfNecessasy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "AddPseudoStatesRuleIfNecessasy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishSelector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "FinishSelector", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::CurrentSelectorEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "CurrentSelectorEmpty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishCurrentSelector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "FinishCurrentSelector", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Build() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Build",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::ToList(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "ToList", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::UnityEngine::UIElements::UQueryBuilder_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "m_Parts", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Element", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Matchers", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Relationship", ty:
// "::UnityEngine::UIElements::StyleSelectorRelationship", modifiers: "", def_value: Some("{}") }, CppParam { name: "pseudoStatesMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "negatedPseudoStatesMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::UQueryBuilder_1<T>::UQueryBuilder_1(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* m_StyleSelectors,
                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* m_Parts,
                                                                         ::UnityEngine::UIElements::VisualElement* m_Element,
                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers,
                                                                         ::UnityEngine::UIElements::StyleSelectorRelationship m_Relationship, int32_t pseudoStatesMask,
                                                                         int32_t negatedPseudoStatesMask) noexcept {
  this->m_StyleSelectors = m_StyleSelectors;
  this->m_Parts = m_Parts;
  this->m_Element = m_Element;
  this->m_Matchers = m_Matchers;
  this->m_Relationship = m_Relationship;
  this->pseudoStatesMask = pseudoStatesMask;
  this->negatedPseudoStatesMask = negatedPseudoStatesMask;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQueryBuilder_1<T>::UQueryBuilder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
