#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQueryState_1.hpp"
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
constexpr ::System::Collections::Generic::List_1<TElement>*& UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::__cordl_internal_get__matches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matches_k__BackingField;
}
template <typename T, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TElement>*> const&
UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::__cordl_internal_get__matches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matches_k__BackingField;
}
template <typename T, typename TElement>
constexpr void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::__cordl_internal_set__matches_k__BackingField(::System::Collections::Generic::List_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____matches_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TElement> inline ::System::Collections::Generic::List_1<TElement>* UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::get_matches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>::get(),
                                               "get_matches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*, false>(this, ___internal_method);
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::set_matches(::System::Collections::Generic::List_1<TElement>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>::get(),
                                               "set_matches", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TElement>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TElement>
inline bool UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher,
                                                                                                            ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, matcher, element);
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TElement>
inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>* UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>());
}
template <typename T, typename TElement> inline void UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T, typename TElement> constexpr ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, TElement>::__UQueryState_1__ListQueryMatcher_1() {}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__cordl_internal_get__callBack_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callBack_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__cordl_internal_get__callBack_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callBack_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__cordl_internal_set__callBack_k__BackingField(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callBack_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::get_callBack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(), "get_callBack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline bool UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher matcher, ::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, matcher, element);
}
template <typename T> inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>::__UQueryState_1__ActionQueryMatcher() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::_ctor(::UnityEngine::UIElements::UQueryState_1<T> queryState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryState_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queryState);
}
template <typename T> inline T UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "iterationList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "currentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__UQueryState_1__Enumerator(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* iterationList,
                                                                                                 int32_t currentIndex) noexcept {
  this->iterationList = iterationList;
  this->currentIndex = currentIndex;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>::__UQueryState_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::UIElements::UQueryState_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::UQueryState_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::UQueryState_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>* UnityEngine::UIElements::UQueryState_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__UQueryState_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UQueryState_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_Action(::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*, "s_Action",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(
      std::forward<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_Action() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ActionQueryMatcher<T>*, "s_Action",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template <typename T> inline void UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_List(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>*, "s_List",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(
      std::forward<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_List() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, T>*, "s_List",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template <typename T>
inline void
UnityEngine::UIElements::UQueryState_1<T>::setStaticF_s_EnumerationList(::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>(
      std::forward<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::UQueryState_1<T>::getStaticF_s_EnumerationList() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__UQueryState_1__ListQueryMatcher_1<T, ::UnityEngine::UIElements::VisualElement*>*, "s_EnumerationList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get>();
}
template <typename T>
inline void UnityEngine::UIElements::UQueryState_1<T>::_ctor(::UnityEngine::UIElements::VisualElement* element,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* matchers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, matchers);
}
template <typename T> inline ::UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryState_1<T>::RebuildOn(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), "RebuildOn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UQueryState_1<T>, false>(this, ___internal_method, element);
}
template <typename T> inline T UnityEngine::UIElements::UQueryState_1<T>::Single(::UnityEngine::UIElements::__UQuery__SingleQueryMatcher* matcher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), "Single", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__UQuery__SingleQueryMatcher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, matcher);
}
template <typename T> inline T UnityEngine::UIElements::UQueryState_1<T>::First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), "First",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::__UQueryState_1__Enumerator<T> UnityEngine::UIElements::UQueryState_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__UQueryState_1__Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::UIElements::UQueryState_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::UnityEngine::UIElements::UQueryState_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UQueryState_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::UQueryState_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::UQueryState_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UQueryState_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Matchers", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::UnityEngine::UIElements::UQueryState_1<T>::UQueryState_1(::UnityEngine::UIElements::VisualElement* m_Element,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RuleMatcher>* m_Matchers) noexcept {
  this->m_Element = m_Element;
  this->m_Matchers = m_Matchers;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UQueryState_1<T>::UQueryState_1() {}
