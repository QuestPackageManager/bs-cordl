#pragma once
// IWYU pragma private; include "Unity\Collections\NativeReference_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeReference_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeReference_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline void Unity::Collections::NativeReference_1_ReadOnly<T>::_ctor(void* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1_ReadOnly<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template <typename T> inline T Unity::Collections::NativeReference_1_ReadOnly<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1_ReadOnly<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::NativeReference_1_ReadOnly<T>::NativeReference_1_ReadOnly(void* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeReference_1_ReadOnly<T>::NativeReference_1_ReadOnly() {}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, options);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::_ctor(T value, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, allocator);
}
template <typename T>
inline void Unity::Collections::NativeReference_1<T>::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::by_ref<::Unity::Collections::NativeReference_1<T>> reference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                          { "Allocate", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeReference_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allocator, reference);
}
template <typename T> inline T Unity::Collections::NativeReference_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::set_Value(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline bool Unity::Collections::NativeReference_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::NativeReference_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::CopyFrom(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "CopyFrom", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reference);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::CopyTo(::Unity::Collections::NativeReference_1<T> reference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "CopyTo", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reference);
}
template <typename T> inline bool Unity::Collections::NativeReference_1<T>::Equals(::Unity::Collections::NativeReference_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::NativeReference_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t Unity::Collections::NativeReference_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::NativeReference_1<T>::op_Equality(::Unity::Collections::NativeReference_1<T> left, ::Unity::Collections::NativeReference_1<T> right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool Unity::Collections::NativeReference_1<T>::op_Inequality(::Unity::Collections::NativeReference_1<T> left, ::Unity::Collections::NativeReference_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline void Unity::Collections::NativeReference_1<T>::Copy(::Unity::Collections::NativeReference_1<T> dst, ::Unity::Collections::NativeReference_1<T> src) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(),
                                              { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src);
}
template <typename T> inline ::Unity::Collections::NativeReference_1_ReadOnly<T> Unity::Collections::NativeReference_1<T>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeReference_1_ReadOnly<T>>(*this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::NativeReference_1_ReadOnly<T>
Unity::Collections::NativeReference_1<T>::op_Implicit___Unity__Collections__NativeReference_1_ReadOnly_T_(::Unity::Collections::NativeReference_1<T> nativeReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeReference_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Collections::NativeReference_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeReference_1_ReadOnly<T>>(nullptr, ___internal_method, nativeReference);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr Unity::Collections::NativeReference_1<T>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeReference_1<T>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::NativeReference_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::NativeReference_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>"
template <typename T> constexpr Unity::Collections::NativeReference_1<T>::operator ::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>* Unity::Collections::NativeReference_1<T>::i___System__IEquatable_1___Unity__Collections__NativeReference_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
// modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::NativeReference_1<T>::NativeReference_1(void* m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept {
  this->m_Data = m_Data;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeReference_1<T>::NativeReference_1() {}
