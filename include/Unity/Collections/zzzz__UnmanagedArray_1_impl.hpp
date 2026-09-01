#pragma once
// IWYU pragma private; include "Unity\Collections\UnmanagedArray_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__UnmanagedArray_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
template <typename T> inline int32_t Unity::Collections::UnmanagedArray_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnmanagedArray_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnmanagedArray_1<T>::_ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnmanagedArray_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator);
}
template <typename T> inline void Unity::Collections::UnmanagedArray_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnmanagedArray_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T* Unity::Collections::UnmanagedArray_1<T>::GetUnsafePointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnmanagedArray_1<T>>(), { "GetUnsafePointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template <typename T> inline ::by_ref<T> Unity::Collections::UnmanagedArray_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnmanagedArray_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::UnmanagedArray_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::UnmanagedArray_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::UnmanagedArray_1<T>::UnmanagedArray_1(::System::IntPtr m_pointer, int32_t m_length, ::Unity::Collections::AllocatorManager_AllocatorHandle m_allocator) noexcept {
  this->m_pointer = m_pointer;
  this->m_length = m_length;
  this->m_allocator = m_allocator;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnmanagedArray_1<T>::UnmanagedArray_1() {}
