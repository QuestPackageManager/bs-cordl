#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ListBuffer_1.hpp"
#include "UnityEngine/Rendering/zzzz__ListBuffer_1_def.hpp"
template <typename T> inline T* UnityEngine::Rendering::ListBuffer_1<T>::get_BufferPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "get_BufferPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Rendering::ListBuffer_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Rendering::ListBuffer_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ListBuffer_1<T>::_ctor(T* bufferPtr, int32_t* countPtr, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPtr, countPtr, capacity);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::ListBuffer_1<T>::get_Item(::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "get_Item", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::ListBuffer_1<T>::GetUnchecked(::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "GetUnchecked", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline bool UnityEngine::Rendering::ListBuffer_1<T>::TryAdd(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "TryAdd", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ListBuffer_1<T>::CopyTo(T* dstBuffer, int32_t startDstIndex, int32_t copyCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstBuffer, startDstIndex, copyCount);
}
template <typename T> inline bool UnityEngine::Rendering::ListBuffer_1<T>::TryCopyTo(::UnityEngine::Rendering::ListBuffer_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "TryCopyTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListBuffer_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::Rendering::ListBuffer_1<T>::TryCopyFrom(T* srcPtr, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListBuffer_1<T>>(), { "TryCopyFrom", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, srcPtr, count);
}
// Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_CountPtr", ty: "int32_t*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Rendering::ListBuffer_1<T>::ListBuffer_1(T* m_BufferPtr, int32_t m_Capacity, int32_t* m_CountPtr) noexcept {
  this->m_BufferPtr = m_BufferPtr;
  this->m_Capacity = m_Capacity;
  this->m_CountPtr = m_CountPtr;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ListBuffer_1<T>::ListBuffer_1() {}
