#pragma once
// IWYU pragma private; include "System\Collections\Generic\TreeSet_1.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__TreeSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename T> inline void System::Collections::Generic::TreeSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeSet_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::TreeSet_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeSet_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename T>
inline void System::Collections::Generic::TreeSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeSet_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, siInfo, context);
}
template <typename T> inline bool System::Collections::Generic::TreeSet_1<T>::AddIfNotPresent(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::TreeSet_1<T>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::TreeSet_1<T>*>());
}
template <typename T> inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::TreeSet_1<T>*>(comparer));
}
template <typename T>
inline ::System::Collections::Generic::TreeSet_1<T>* System::Collections::Generic::TreeSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::TreeSet_1<T>*>(siInfo, context));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::TreeSet_1<T>::TreeSet_1() {}
