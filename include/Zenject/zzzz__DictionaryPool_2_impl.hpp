#pragma once
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__DictionaryPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::setStaticF__instance(::Zenject::DictionaryPool_2<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::Zenject::DictionaryPool_2<TKey, TValue>*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get>(
      std::forward<::Zenject::DictionaryPool_2<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Zenject::DictionaryPool_2<TKey, TValue>*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DictionaryPool_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DictionaryPool_2<TKey, TValue>*, false>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::OnSpawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get(), "OnSpawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::OnDespawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2<TKey, TValue>*>::get(), "OnDespawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Zenject::DictionaryPool_2<TKey, TValue>::DictionaryPool_2() {}
