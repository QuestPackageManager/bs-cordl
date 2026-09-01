#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SerializedDictionaryDebugView_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionaryDebugView_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
template <typename K, typename V> constexpr ::System::Collections::Generic::IDictionary_2<K, V>*& UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::__cordl_internal_get_dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dict;
}
template <typename K, typename V>
constexpr ::System::Collections::Generic::IDictionary_2<K, V>* const& UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::__cordl_internal_get_dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dict;
}
template <typename K, typename V> constexpr void UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::__cordl_internal_set_dict(::System::Collections::Generic::IDictionary_2<K, V>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dict = value;
}
template <typename K, typename V> inline void UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::_ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<K, V>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename K, typename V> inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>> UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>>>(this, ___internal_method);
}
template <typename K, typename V>
inline ::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*
UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::New_ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>(dictionary));
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::SerializedDictionaryDebugView_2() {}
