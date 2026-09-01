#pragma once
// IWYU pragma private; include "System\Buffers\ArrayMemoryPool_1.hpp"
#include "System/Buffers/zzzz__MemoryPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__ArrayMemoryPool_1_def.hpp"
#include "System/Buffers/zzzz__ArrayMemoryPool_1_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
template <typename T> constexpr ::ArrayW<T>& System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr ::ArrayW<T> const& System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr void System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::__cordl_internal_set__array(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____array = value;
}
template <typename T> inline void System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template <typename T> inline ::System::Memory_1<T> System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::get_Memory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>*>(), { "get_Memory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>>(this, ___internal_method);
}
template <typename T> inline void System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>* System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>*>(size));
}
/// @brief Convert operator to "::System::Buffers::IMemoryOwner_1<T>"
template <typename T> constexpr System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::operator ::System::Buffers::IMemoryOwner_1<T>*() noexcept {
  return static_cast<::System::Buffers::IMemoryOwner_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Buffers::IMemoryOwner_1<T>"
template <typename T> constexpr ::System::Buffers::IMemoryOwner_1<T>* System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::i___System__Buffers__IMemoryOwner_1_T_() noexcept {
  return static_cast<::System::Buffers::IMemoryOwner_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>::ArrayMemoryPool_1_ArrayMemoryPoolBuffer() {}
template <typename T> inline ::System::Buffers::IMemoryOwner_1<T>* System::Buffers::ArrayMemoryPool_1<T>::Rent(int32_t minimumBufferSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1<T>*>(), { "Rent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::IMemoryOwner_1<T>*>(this, ___internal_method, minimumBufferSize);
}
template <typename T> inline void System::Buffers::ArrayMemoryPool_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1<T>*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T> inline void System::Buffers::ArrayMemoryPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayMemoryPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Buffers::ArrayMemoryPool_1<T>* System::Buffers::ArrayMemoryPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ArrayMemoryPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::ArrayMemoryPool_1<T>::ArrayMemoryPool_1() {}
