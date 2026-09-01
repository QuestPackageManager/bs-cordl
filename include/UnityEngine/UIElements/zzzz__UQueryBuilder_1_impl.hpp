#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UQueryBuilder_1.hpp"
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
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_styleSelectors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "get_styleSelectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* UnityEngine::UIElements::UQueryBuilder_1<T>::get_parts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "get_parts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::_ctor(::UnityEngine::UIElements::VisualElement* visualElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, visualElement);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Class(::StringW classname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "Class", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>>(*this, ___internal_method, classname);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Name(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>>(*this, ___internal_method, id);
}
template <typename T> template <typename T2> inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::OfType(::StringW name, ::ArrayW<::StringW> classes) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(),
                                                           { "OfType", { ::i2c::class_of<T2>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>>(*this, ___internal_method, name, classes);
}
template <typename T> template <typename T2> inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::OfType(::StringW name, ::StringW className) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(),
                                                                                              { "OfType", { ::i2c::class_of<T2>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>>(*this, ___internal_method, name, className);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::SingleBaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "SingleBaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T>>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddClass(::StringW c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "AddClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddClasses(::ArrayW<::StringW> classes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "AddClasses", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, classes);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddName(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "AddName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
template <typename T> template <typename T2> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "AddType", { ::i2c::class_of<T2>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T>
template <typename T2>
inline ::UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::AddRelationship(::UnityEngine::UIElements::StyleSelectorRelationship relationship) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(),
                                                           { "AddRelationship", { ::i2c::class_of<T2>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorRelationship>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryBuilder_1<T2>>(*this, ___internal_method, relationship);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::AddPseudoStatesRuleIfNecessasy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "AddPseudoStatesRuleIfNecessasy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishSelector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "FinishSelector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::CurrentSelectorEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "CurrentSelectorEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishCurrentSelector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "FinishCurrentSelector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::UQueryBuilder_1<T>::ToList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "ToList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::UnityEngine::UIElements::UQueryBuilder_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryBuilder_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::UQueryBuilder_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*
UnityEngine::UIElements::UQueryBuilder_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__UQueryBuilder_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryBuilder_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelector*>*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Parts", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Element", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Matchers", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Relationship", ty:
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
