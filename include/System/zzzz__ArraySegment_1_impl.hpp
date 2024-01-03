#pragma once
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::__ArraySegment_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::__ArraySegment_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::__ArraySegment_1__Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::__ArraySegment_1__Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::__ArraySegment_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::__ArraySegment_1__Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::__ArraySegment_1__Enumerator<T>::_ctor(::System::ArraySegment_1<T> arraySegment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arraySegment);
}
template <typename T> inline bool System::__ArraySegment_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::__ArraySegment_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(), "get_Current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::__ArraySegment_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ArraySegment_1__Enumerator<T>>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::__ArraySegment_1__Enumerator<T>::__ArraySegment_1__Enumerator(::ArrayW<T, ::Array<T>*> _array, int32_t _start, int32_t _end, int32_t _current) noexcept {
  this->_array = _array;
  this->_start = _start;
  this->_end = _end;
  this->_current = _current;
}
// Ctor Parameters []
template <typename T> constexpr ::System::__ArraySegment_1__Enumerator<T>::__ArraySegment_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IList_1<T>*() {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IList_1_T_() {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__ICollection_1_T_() {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::ArraySegment_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::ArraySegment_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::ArraySegment_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::ArraySegment_1<T>::setStaticF__Empty_k__BackingField(::System::ArraySegment_1<T> value) {
  ::cordl_internals::setStaticField<::System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get>(
      std::forward<::System::ArraySegment_1<T>>(value));
}
template <typename T> inline ::System::ArraySegment_1<T> System::ArraySegment_1<T>::getStaticF__Empty_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get>();
}
template <typename T> inline ::System::ArraySegment_1<T> System::ArraySegment_1<T>::get_Empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "get_Empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>, false>(nullptr, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline void System::ArraySegment_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, offset, count);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::ArraySegment_1<T>::get_Array() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "get_Array",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::get_Offset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "get_Offset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::System::__ArraySegment_1__Enumerator<T> System::ArraySegment_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::__ArraySegment_1__Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> destination, int32_t destinationIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, destinationIndex);
}
template <typename T> inline bool System::ArraySegment_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool System::ArraySegment_1<T>::Equals(::System::ArraySegment_1<T> obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline T System::ArraySegment_1<T>::System_Collections_Generic_IList_T__get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IList<T>.get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IList<T>.set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline int32_t System::ArraySegment_1<T>::System_Collections_Generic_IList_T__IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IList<T>.IndexOf",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__Insert(int32_t index, T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IList<T>.Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IList<T>.RemoveAt",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline T System::ArraySegment_1<T>::System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IReadOnlyList<T>.get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.ICollection<T>.Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(),
                                                                             "System.Collections.Generic.ICollection<T>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.ICollection<T>.Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.ICollection<T>.Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::ArraySegment_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(), "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::ArraySegment_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline void System::ArraySegment_1<T>::ThrowInvalidOperationIfDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySegment_1<T>>::get(),
                                                                             "ThrowInvalidOperationIfDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ArraySegment_1<T>::ArraySegment_1(::ArrayW<T, ::Array<T>*> _array, int32_t _offset, int32_t _count) noexcept {
  this->_array = _array;
  this->_offset = _offset;
  this->_count = _count;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ArraySegment_1<T>::ArraySegment_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
