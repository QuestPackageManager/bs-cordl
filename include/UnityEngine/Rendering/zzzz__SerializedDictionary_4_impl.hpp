#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SerializedDictionary_4.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_4_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template <typename K, typename V, typename SK, typename SV>
constexpr ::System::Collections::Generic::List_1<SK>*& UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_get_m_Keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
template <typename K, typename V, typename SK, typename SV>
constexpr ::System::Collections::Generic::List_1<SK>* const& UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_get_m_Keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
template <typename K, typename V, typename SK, typename SV>
constexpr void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<SK>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Keys = value;
}
template <typename K, typename V, typename SK, typename SV>
constexpr ::System::Collections::Generic::List_1<SV>*& UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
template <typename K, typename V, typename SK, typename SV>
constexpr ::System::Collections::Generic::List_1<SV>* const& UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
template <typename K, typename V, typename SK, typename SV>
constexpr void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::__cordl_internal_set_m_Values(::System::Collections::Generic::List_1<SV>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
template <typename K, typename V, typename SK, typename SV> inline SK UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::SerializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<SK>(this, ___internal_method, key);
}
template <typename K, typename V, typename SK, typename SV> inline SV UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::SerializeValue(V value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<SV>(this, ___internal_method, value);
}
template <typename K, typename V, typename SK, typename SV> inline K UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::DeserializeKey(SK serializedKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, serializedKey);
}
template <typename K, typename V, typename SK, typename SV> inline V UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::DeserializeValue(SV serializedValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, serializedValue);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV>
inline ::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>* UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template <typename K, typename V, typename SK, typename SV> constexpr UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template <typename K, typename V, typename SK, typename SV>
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename K, typename V, typename SK, typename SV> constexpr ::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::SerializedDictionary_4() {}
