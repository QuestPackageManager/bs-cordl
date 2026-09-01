#pragma once
// IWYU pragma private; include "System\Buffers\IMemoryOwner_1.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
template <typename T> inline ::System::Memory_1<T> System::Buffers::IMemoryOwner_1<T>::get_Memory() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::IMemoryOwner_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Buffers::IMemoryOwner_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Buffers::IMemoryOwner_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
