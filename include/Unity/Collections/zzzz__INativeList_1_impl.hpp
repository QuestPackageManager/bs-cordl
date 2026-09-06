#pragma once
// IWYU pragma private; include "Unity/Collections/INativeList_1.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
template <typename T> inline int32_t Unity::Collections::INativeList_1<T>::get_Capacity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::INativeList_1<T>::set_Capacity(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool Unity::Collections::INativeList_1<T>::get_IsEmpty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T Unity::Collections::INativeList_1<T>::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::INativeList_1<T>::set_Item(int32_t index, T value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline void Unity::Collections::INativeList_1<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeList_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::INativeList_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() noexcept {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::INativeList_1<T>::i___Unity__Collections__IIndexable_1_T_() noexcept {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(this));
}
