#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_2.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue>
inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue> inline TValue BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::GetValue(::ArrayW<TValue, ::Array<TValue>*> storage, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, storage, i);
}
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::SetValue(::ArrayW<TValue, ::Array<TValue>*> storage, int32_t i, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage, i, value);
}
template <typename TKey, typename TValue> inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>* BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(dict));
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(info, context));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::SerializableDictionary_2() {}
