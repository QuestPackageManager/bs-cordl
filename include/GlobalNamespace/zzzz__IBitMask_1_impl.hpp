#pragma once
// IWYU pragma private; include "GlobalNamespace/IBitMask_1.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::IBitMask_1<T>::get_bitCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBitMask_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::IBitMask_1<T>::SetBits(int32_t offset, uint64_t bits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBitMask_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, offset, bits);
}
template <typename T> inline uint64_t GlobalNamespace::IBitMask_1<T>::GetBits(int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBitMask_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, offset, count);
}
/// @brief Convert operator to "::System::IEquatable_1<T>"
template <typename T> constexpr GlobalNamespace::IBitMask_1<T>::operator ::System::IEquatable_1<T>*() noexcept {
  return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<T>"
template <typename T> constexpr ::System::IEquatable_1<T>* GlobalNamespace::IBitMask_1<T>::i___System__IEquatable_1_T_() noexcept {
  return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(this));
}
