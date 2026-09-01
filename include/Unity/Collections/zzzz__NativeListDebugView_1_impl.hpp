#pragma once
// IWYU pragma private; include "Unity\Collections\NativeListDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeListDebugView_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*& Unity::Collections::NativeListDebugView_1<T>::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* const& Unity::Collections::NativeListDebugView_1<T>::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr void Unity::Collections::NativeListDebugView_1<T>::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
template <typename T> inline void Unity::Collections::NativeListDebugView_1<T>::_ctor(::Unity::Collections::NativeList_1<T> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListDebugView_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NativeListDebugView_1<T>::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListDebugView_1<T>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeListDebugView_1<T>* Unity::Collections::NativeListDebugView_1<T>::New_ctor(::Unity::Collections::NativeList_1<T> array) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::NativeListDebugView_1<T>*>(array));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeListDebugView_1<T>::NativeListDebugView_1() {}
