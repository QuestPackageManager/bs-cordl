#pragma once
#include "GlobalNamespace/zzzz__OVREnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__OVREnumerable_1__Enumerator__CollectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::__OVREnumerable_1__Enumerator__CollectionType() {}
template <typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::None{ static_cast<int32_t>(0x0) };
template <typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::List{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Set{ static_cast<int32_t>(0x2) };
template <typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Queue{ static_cast<int32_t>(0x3) };
template <typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>::Enumerable{ static_cast<int32_t>(0x4) };
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVREnumerable_1__Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename T> inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::__OVREnumerable_1__Enumerator<T>::MoveNextList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "MoveNextList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::__OVREnumerable_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::__OVREnumerable_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__OVREnumerable_1__Enumerator<T>::ValidateAndThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>>::get(),
                                                                             "ValidateAndThrow", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type", ty:
// "::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_list", ty:
// "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_setEnumerator", ty:
// "::System::Collections::Generic::__HashSet_1__Enumerator<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queueEnumerator", ty:
// "::System::Collections::Generic::__Queue_1__Enumerator<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__OVREnumerable_1__Enumerator(int32_t _listIndex, ::GlobalNamespace::__OVREnumerable_1__Enumerator__CollectionType<T> _type,
                                                                                             int32_t _listCount, ::System::Collections::Generic::IEnumerator_1<T>* _enumerator,
                                                                                             ::System::Collections::Generic::IReadOnlyList_1<T>* _list,
                                                                                             ::System::Collections::Generic::__HashSet_1__Enumerator<T> _setEnumerator,
                                                                                             ::System::Collections::Generic::__Queue_1__Enumerator<T> _queueEnumerator) noexcept {
  this->_listIndex = _listIndex;
  this->_type = _type;
  this->_listCount = _listCount;
  this->_enumerator = _enumerator;
  this->_list = _list;
  this->_setEnumerator = _setEnumerator;
  this->_queueEnumerator = _queueEnumerator;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVREnumerable_1__Enumerator<T>::__OVREnumerable_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::OVREnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename T> inline ::GlobalNamespace::__OVREnumerable_1__Enumerator<T> GlobalNamespace::OVREnumerable_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVREnumerable_1__Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVREnumerable_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept {
  this->_enumerable = _enumerable;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
