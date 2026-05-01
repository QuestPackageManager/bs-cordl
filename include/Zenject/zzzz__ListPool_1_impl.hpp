#pragma once
// IWYU pragma private; include "Zenject/ListPool_1.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> inline void Zenject::ListPool_1<T>::setStaticF__instance(::Zenject::ListPool_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::ListPool_1<T>*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<T>*>::get>(
      std::forward<::Zenject::ListPool_1<T>*>(value));
}
template <typename T> inline ::Zenject::ListPool_1<T>* Zenject::ListPool_1<T>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Zenject::ListPool_1<T>*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<T>*>::get>();
}
template <typename T> inline void Zenject::ListPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Zenject::ListPool_1<T>* Zenject::ListPool_1<T>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<T>*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ListPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void Zenject::ListPool_1<T>::OnDespawned(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<T>*>::get(), "OnDespawned", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline ::Zenject::ListPool_1<T>* Zenject::ListPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ListPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ListPool_1<T>::ListPool_1() {}
