#pragma once
// IWYU pragma private; include "System/Collections/Generic/ISet_1.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::Add(T item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::ISet_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::ISet_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::ISet_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void System::Collections::Generic::ISet_1<T>::SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool System::Collections::Generic::ISet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ISet_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::ISet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::ISet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::ISet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::ISet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::ISet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::ISet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
