#pragma once
// IWYU pragma private; include "Zenject/PoolableStaticMemoryPool_5.hpp"
#include "Zenject/zzzz__StaticMemoryPool_5_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_5_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::OnSpawned(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        "OnSpawned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, p3, p4, value);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline void Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::OnDespawned(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>::get(),
                        "OnDespawned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
inline ::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>* Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>*>());
}
// Ctor Parameters []
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
constexpr ::Zenject::PoolableStaticMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>::PoolableStaticMemoryPool_5()   {
}
