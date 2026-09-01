#pragma once
// IWYU pragma private; include "Unity\Collections\AllocatorHelper_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorHelper_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
template <typename T> inline ::by_ref<T> Unity::Collections::AllocatorHelper_1<T>::get_Allocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorHelper_1<T>>(), { "get_Allocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::AllocatorHelper_1<T>::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorHelper_1<T>>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, backingAllocator, isGlobal, globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorHelper_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorHelper_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::AllocatorHelper_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::AllocatorHelper_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_allocator", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_backingAllocator", ty:
// "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::AllocatorHelper_1<T>::AllocatorHelper_1(T* m_allocator, ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocator) noexcept {
  this->m_allocator = m_allocator;
  this->m_backingAllocator = m_backingAllocator;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorHelper_1<T>::AllocatorHelper_1() {}
