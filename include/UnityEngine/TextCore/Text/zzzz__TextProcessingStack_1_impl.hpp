#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextProcessingStack_1.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::_ctor(::ArrayW<T> stack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stack);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::_ctor(int32_t capacity, int32_t rolloverSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, rolloverSize);
}
template <typename T> inline int32_t UnityEngine::TextCore::Text::TextProcessingStack_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::TextCore::Text::TextProcessingStack_1<T>::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::SetDefault(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>> stack, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(),
                                                           { "SetDefault", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stack, item);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::SetDefault(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "SetDefault", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline T UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Remove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Remove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Push(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Push", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline T UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::TextCore::Text::TextProcessingStack_1<T>::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::TextCore::Text::TextProcessingStack_1<T>::CurrentItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextProcessingStack_1<T>>(), { "CurrentItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_DefaultItem", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RolloverSize", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<T>::TextProcessingStack_1(::ArrayW<T> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize,
                                                                                         int32_t m_Count) noexcept {
  this->itemStack = itemStack;
  this->index = index;
  this->m_DefaultItem = m_DefaultItem;
  this->m_Capacity = m_Capacity;
  this->m_RolloverSize = m_RolloverSize;
  this->m_Count = m_Count;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<T>::TextProcessingStack_1() {}
