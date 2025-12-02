#pragma once
// IWYU pragma private; include "System/Collections/Generic/TreeSet_1.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__TreeSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename T> inline void System::Collections::Generic::TreeSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::TreeSet_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename T>
inline void System::Collections::Generic::TreeSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, siInfo, context);
}
template <typename T> inline bool System::Collections::Generic::TreeSet_1<T>::AddIfNotPresent(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::TreeSet_1<T>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::TreeSet_1<T>*>());
}
template <typename T> inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::TreeSet_1<T>*>(comparer));
}
template <typename T>
inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::TreeSet_1<T>*>(siInfo, context));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::TreeSet_1<T>::TreeSet_1() {}
