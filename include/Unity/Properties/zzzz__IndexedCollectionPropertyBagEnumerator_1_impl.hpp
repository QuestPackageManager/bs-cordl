#pragma once
// IWYU pragma private; include "Unity\Properties\IndexedCollectionPropertyBagEnumerator_1.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_impl.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__IIndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer>
inline void Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::_ctor(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* impl, TContainer container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>(), ::i2c::type_of<TContainer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, impl, container);
}
template <typename TContainer> inline ::Unity::Properties::IProperty_1<TContainer>* Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TContainer>*>(*this, ___internal_method);
}
template <typename TContainer> inline ::System::Object* Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TContainer> inline bool Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
template <typename TContainer>
constexpr Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
template <typename TContainer>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*
Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TContainer___() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TContainer> constexpr Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TContainer> constexpr ::System::Collections::IEnumerator* Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TContainer> constexpr Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TContainer> constexpr ::System::IDisposable* Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Impl", ty: "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Previous",
// ty: "::Unity::Properties::IndexedCollectionSharedPropertyState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Container", ty: "TContainer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TContainer>
constexpr ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::IndexedCollectionPropertyBagEnumerator_1(
    ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl, ::Unity::Properties::IndexedCollectionSharedPropertyState m_Previous, TContainer m_Container,
    int32_t m_Position) noexcept {
  this->m_Impl = m_Impl;
  this->m_Previous = m_Previous;
  this->m_Container = m_Container;
  this->m_Position = m_Position;
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>::IndexedCollectionPropertyBagEnumerator_1() {}
