#pragma once
#include "Zenject/zzzz__MemoryPool_4_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::OnDespawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, p3, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>* Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::PoolableMemoryPool_4<TParam1, TParam2, TParam3, TValue>::PoolableMemoryPool_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
