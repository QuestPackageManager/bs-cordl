#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__OneOrMore_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::operator ::System::Collections::Generic::IReadOnlyList_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
template <typename TValue, typename TList>
constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::i___System__Collections__Generic__IReadOnlyList_1_TValue_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TValue, typename TList>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::i___System__Collections__Generic__IEnumerable_1_TValue_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TValue, typename TList> constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TValue, typename TList>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*
UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TValue, typename TList> inline int32_t UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), "get_Count",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline TValue UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, index);
}
template <typename TValue, typename TList> inline void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::_ctor(TValue single) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, single);
}
template <typename TValue, typename TList> inline void UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::_ctor(TList multiple) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiple);
}
template <typename TValue, typename TList>
inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>
UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TValue single) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), "op_Implicit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>, false>(nullptr, ___internal_method, single);
}
template <typename TValue, typename TList>
inline ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>
UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::op_Implicit___UnityEngine__InputSystem__Utilities__OneOrMore_2_TValue_TList_(TList multiple) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), "op_Implicit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>, false>(nullptr, ___internal_method, multiple);
}
template <typename TValue, typename TList> inline ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(), "GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IsSingle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Single", ty: "TValue", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "m_Multiple", ty: "TList", modifiers: "", def_value: Some("nullptr") }]
template <typename TValue, typename TList> constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::OneOrMore_2(bool m_IsSingle, TValue m_Single, TList m_Multiple) noexcept {
  this->m_IsSingle = m_IsSingle;
  this->m_Single = m_Single;
  this->m_Multiple = m_Multiple;
}
// Ctor Parameters []
template <typename TValue, typename TList> constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>::OneOrMore_2() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TValue, typename TList>
constexpr UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TValue, typename TList>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*
UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TValue, typename TList>
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue, typename TList> constexpr UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TValue, typename TList> constexpr ::System::IDisposable* UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TValue, typename TList> constexpr int32_t& UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename TValue, typename TList> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
template <typename TValue, typename TList> constexpr void UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
template <typename TValue, typename TList>
constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList>& UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename TValue, typename TList>
constexpr ::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> const& UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename TValue, typename TList>
constexpr void UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__set_m_List(::UnityEngine::InputSystem::Utilities::OneOrMore_2<TValue, TList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename TValue, typename TList> inline bool UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline void UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline TValue UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline ::System::Object* UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TValue, typename TList> inline void UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue, typename TList>
inline ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>* UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>());
}
template <typename TValue, typename TList> inline void UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue, typename TList> constexpr ::UnityEngine::InputSystem::Utilities::__OneOrMore_2__Enumerator<TValue, TList>::__OneOrMore_2__Enumerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
