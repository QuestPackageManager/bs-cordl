#pragma once
// IWYU pragma private; include "Unity\Collections\NativeRingQueueDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeRingQueueDebugView_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeRingQueue_1_def.hpp"
#include "Unity/Collections/zzzz__NativeRingQueue_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*& Unity::Collections::NativeRingQueueDebugView_1<T>::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* const& Unity::Collections::NativeRingQueueDebugView_1<T>::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
template <typename T> constexpr void Unity::Collections::NativeRingQueueDebugView_1<T>::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
template <typename T> inline void Unity::Collections::NativeRingQueueDebugView_1<T>::_ctor(::Unity::Collections::NativeRingQueue_1<T> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDebugView_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeRingQueue_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NativeRingQueueDebugView_1<T>::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeRingQueueDebugView_1<T>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeRingQueueDebugView_1<T>* Unity::Collections::NativeRingQueueDebugView_1<T>::New_ctor(::Unity::Collections::NativeRingQueue_1<T> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::NativeRingQueueDebugView_1<T>*>(data));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeRingQueueDebugView_1<T>::NativeRingQueueDebugView_1() {}
