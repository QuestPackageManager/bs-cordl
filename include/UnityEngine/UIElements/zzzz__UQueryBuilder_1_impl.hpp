#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQueryBuilder_1.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::UQueryBuilder_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*
UnityEngine::UIElements::UQueryBuilder_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__UQueryBuilder_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_styleSelectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "get_styleSelectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_parts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "get_parts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::_ctor(::UnityEngine::UIElements::VisualElement* visualElement) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visualElement);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Class(::StringW classname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Class", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method, classname);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Name(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method, id);
}
/// @param name: ::StringW (default: nullptr)
/// @param className: ::StringW (default: nullptr)
template <typename T> template <typename T2> inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::OfType(::StringW name, ::StringW className) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "OfType",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(this, ___internal_method, name, className);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::SingleBaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "SingleBaseType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddClass(::StringW c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddName(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename T> template <typename T2> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
template <typename T2>
inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::AddRelationship(::UnityEngine::UIElements::StyleSelectorRelationship relationship) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "AddRelationship",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorRelationship>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(this, ___internal_method, relationship);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddPseudoStatesRuleIfNecessasy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "AddPseudoStatesRuleIfNecessasy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishSelector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "FinishSelector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::CurrentSelectorEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "CurrentSelectorEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishCurrentSelector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                                                                             "FinishCurrentSelector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Build() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Build",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::ToList(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "ToList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::UnityEngine::UIElements::UQueryBuilder_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryBuilder_1<T>>::get(), 2)));
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
