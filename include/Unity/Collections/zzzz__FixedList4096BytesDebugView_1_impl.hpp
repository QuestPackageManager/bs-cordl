#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList4096BytesDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedList4096BytesDebugView_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::FixedList4096Bytes_1<T>& Unity::Collections::FixedList4096BytesDebugView_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::Unity::Collections::FixedList4096Bytes_1<T> const& Unity::Collections::FixedList4096BytesDebugView_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void Unity::Collections::FixedList4096BytesDebugView_1<T>::__cordl_internal_set_m_List(::Unity::Collections::FixedList4096Bytes_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> inline void Unity::Collections::FixedList4096BytesDebugView_1<T>::_ctor(::Unity::Collections::FixedList4096Bytes_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096BytesDebugView_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::FixedList4096BytesDebugView_1<T>::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096BytesDebugView_1<T>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::FixedList4096BytesDebugView_1<T>* Unity::Collections::FixedList4096BytesDebugView_1<T>::New_ctor(::Unity::Collections::FixedList4096Bytes_1<T> list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::FixedList4096BytesDebugView_1<T>*>(list));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList4096BytesDebugView_1<T>::FixedList4096BytesDebugView_1() {}
