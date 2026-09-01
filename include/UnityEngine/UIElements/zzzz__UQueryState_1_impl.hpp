#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UQueryState_1.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQuery_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename T, typename TElement>
constexpr ::System::Collections::Generic::List_1<TElement>*& UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::__cordl_internal_get__matches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matches_k__BackingField;
}
template <typename T, typename TElement>
constexpr ::System::Collections::Generic::List_1<TElement>* const& UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::__cordl_internal_get__matches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matches_k__BackingField;
}
template <typename T, typename TElement>
constexpr void UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::__cordl_internal_set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matches_k__BackingField = value;
}
template <typename T, typename TElement> inline ::System::Collections::Generic::List_1<TElement>* UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::get_matches() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>(), { "get_matches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*>(this, ___internal_method);
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::set_matches(::System::Collections::Generic::List_1<TElement>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>(),
                                                                                         { "set_matches", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<TElement>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T, typename TElement>
inline bool UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher,
                                                                                                         ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matcher, element);
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TElement>
inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>* UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>*>());
}
// Ctor Parameters []
template <typename T, typename TElement> constexpr ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, TElement>::UQueryState_1_ListQueryMatcher_1() {}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::__cordl_internal_get__callBack_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callBack_k__BackingField;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::__cordl_internal_get__callBack_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callBack_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::__cordl_internal_set__callBack_k__BackingField(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callBack_k__BackingField = value;
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::get_callBack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*>(), { "get_callBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template <typename T>
inline bool UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, matcher, element);
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>::UQueryState_1_ActionQueryMatcher() {}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1_Enumerator<T>::_ctor(::UnityEngine::UIElements::UQueryState_1<T> queryState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UQueryState_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queryState);
}
template <typename T> inline T UnityEngine::UIElements::UQueryState_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::UIElements::UQueryState_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryState_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::UQueryState_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::UQueryState_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UQueryState_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "currentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::UQueryState_1_Enumerator<T>::UQueryState_1_Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList,
                                                                                           int32_t currentIndex) noexcept {
  this->iterationList = iterationList;
  this->currentIndex = currentIndex;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQueryState_1_Enumerator<T>::UQueryState_1_Enumerator() {}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_Action(::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*, "s_Action", ::UnityEngine::UIElements::UQueryState_1<T>>(
      std::forward<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_Action() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQueryState_1_ActionQueryMatcher<T>*, "s_Action", ::UnityEngine::UIElements::UQueryState_1<T>>();
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_List(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>*, "s_List", ::UnityEngine::UIElements::UQueryState_1<T>>(
      std::forward<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_List() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, T>*, "s_List", ::UnityEngine::UIElements::UQueryState_1<T>>();
}
template <typename T>
inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_EnumerationList(::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList",
                                    ::UnityEngine::UIElements::UQueryState_1<T>>(
      std::forward<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_EnumerationList() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UQueryState_1_ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList",
                                           ::UnityEngine::UIElements::UQueryState_1<T>>();
}
template <typename T>
inline void UnityEngine::UIElements::UQueryState_1<T>::_ctor(::UnityEngine::UIElements::VisualElement* element,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, matchers);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryState_1<T>::RebuildOn(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "RebuildOn", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>>(*this, ___internal_method, element);
}
template <typename T> inline T UnityEngine::UIElements::UQueryState_1<T>::Single(::UnityEngine::UIElements::UQuery_SingleQueryMatcher* matcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "Single", {}, { ::i2c::type_of<::UnityEngine::UIElements::UQuery_SingleQueryMatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, matcher);
}
template <typename T> inline T UnityEngine::UIElements::UQueryState_1<T>::First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1<T>::ToList(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "ToList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, results);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::UQueryState_1<T>::ToList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "ToList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1_Enumerator<T> UnityEngine::UIElements::UQueryState_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::UnityEngine::UIElements::UQueryState_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UQueryState_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::UQueryState_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UQueryState_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::UIElements::UQueryState_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::UQueryState_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>* UnityEngine::UIElements::UQueryState_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__UQueryState_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Matchers", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::UQueryState_1<T>::UQueryState_1(::UnityEngine::UIElements::VisualElement* m_Element,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers) noexcept {
  this->m_Element = m_Element;
  this->m_Matchers = m_Matchers;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQueryState_1<T>::UQueryState_1() {}
