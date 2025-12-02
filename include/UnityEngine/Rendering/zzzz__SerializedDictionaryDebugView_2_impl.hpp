#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionaryDebugView_2.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___dict, value);
}
template <typename K, typename V> inline void UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::_ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<K, V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename K, typename V>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*>
UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>::get(), "get_Items",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
template <typename K, typename V>
inline ::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*
UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::New_ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>*>(dictionary));
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>::SerializedDictionaryDebugView_2() {}
