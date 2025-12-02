#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionary_4.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___m_Keys, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_Values, value);
}
template <typename K, typename V, typename SK, typename SV> inline SK UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::SerializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<SK, false>(this, ___internal_method, key);
}
template <typename K, typename V, typename SK, typename SV> inline SV UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::SerializeValue(V value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<SV, false>(this, ___internal_method, value);
}
template <typename K, typename V, typename SK, typename SV> inline K UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::DeserializeKey(SK serializedKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, serializedKey);
}
template <typename K, typename V, typename SK, typename SV> inline V UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::DeserializeValue(SV serializedValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method, serializedValue);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV> inline void UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V, typename SK, typename SV>
inline ::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>* UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>*>());
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
