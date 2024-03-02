#pragma once
#include "IgnoranceThirdparty/zzzz__Volatile_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__entries(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__modMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modMask;
}
template <typename T> constexpr int32_t const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__modMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modMask;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__modMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modMask = value;
}
template <typename T> constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__consumerCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumerCursor;
}
template <typename T> constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__consumerCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____consumerCursor;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____consumerCursor = value;
}
template <typename T> constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__producerCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producerCursor;
}
template <typename T> constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_get__producerCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____producerCursor;
}
template <typename T> constexpr void IgnoranceThirdparty::RingBuffer_1<T>::__cordl_internal_set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____producerCursor = value;
}
template <typename T> inline ::IgnoranceThirdparty::RingBuffer_1<T>* IgnoranceThirdparty::RingBuffer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::IgnoranceThirdparty::RingBuffer_1<T>*>(capacity));
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T IgnoranceThirdparty::RingBuffer_1<T>::get_Item(int64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::set_Item(int64_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline T IgnoranceThirdparty::RingBuffer_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "Dequeue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool IgnoranceThirdparty::RingBuffer_1<T>::TryDequeue(ByRef<T> obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "TryDequeue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline void IgnoranceThirdparty::RingBuffer_1<T>::Enqueue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "Enqueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t IgnoranceThirdparty::RingBuffer_1<T>::NextPowerOfTwo(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceThirdparty::RingBuffer_1<T>*>::get(), "NextPowerOfTwo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x);
}
// Ctor Parameters []
template <typename T> constexpr ::IgnoranceThirdparty::RingBuffer_1<T>::RingBuffer_1() {}
