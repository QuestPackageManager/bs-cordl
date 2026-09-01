#pragma once
// IWYU pragma private; include "Unity\Collections\NativeKeyValueArrays_2.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeKeyValueArrays_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename TKey, typename TValue> inline int32_t Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::_ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                            ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator, options);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Jobs::JobHandle Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename TKey, typename TValue> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Keys", ty: "::Unity::Collections::NativeArray_1<TKey>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Values", ty:
// "::Unity::Collections::NativeArray_1<TValue>", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::NativeKeyValueArrays_2(::Unity::Collections::NativeArray_1<TKey> Keys,
                                                                                             ::Unity::Collections::NativeArray_1<TValue> Values) noexcept {
  this->Keys = Keys;
  this->Values = Values;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>::NativeKeyValueArrays_2() {}
