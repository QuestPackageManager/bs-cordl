#pragma once
#include "Zenject/zzzz__MemoryPool_3_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::OnDespawned(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "OnDespawned",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "Reinitialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, item);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TValue>
inline ::System::Object* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TValue> constexpr ::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::PoolableMemoryPool_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
