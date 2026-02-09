#pragma once
// IWYU pragma private; include "UnityEngine/Pool/CollectionPool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__CollectionPool_2_def.hpp"
#include "UnityEngine/Pool/zzzz__CollectionPool_2_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template<typename TCollection,typename TItem>
inline void UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::setStaticF___9(::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>::get>(std::forward<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>(value));
}
template<typename TCollection,typename TItem>
inline ::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>* UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>::get>();
}
template<typename TCollection,typename TItem>
inline void UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TCollection,typename TItem>
inline TCollection UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>::get(),
                        "<.cctor>b__5_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<TCollection, false>(this, ___internal_method);
}
template<typename TCollection,typename TItem>
inline void UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::__cctor_b__5_1(TCollection  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>::get(),
                        "<.cctor>b__5_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCollection>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l);
}
template<typename TCollection,typename TItem>
inline ::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>* UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>*>());
}
// Ctor Parameters []
template<typename TCollection,typename TItem>
constexpr ::UnityEngine::Pool::CollectionPool_2___c<TCollection,TItem>::CollectionPool_2___c()   {
}
template<typename TCollection,typename TItem>
inline void UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<TCollection>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>*>::get>(std::forward<::UnityEngine::Pool::ObjectPool_1<TCollection>*>(value));
}
template<typename TCollection,typename TItem>
inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<TCollection>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>*>::get>();
}
template<typename TCollection,typename TItem>
inline TCollection UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<TCollection, false>(nullptr, ___internal_method);
}
template<typename TCollection,typename TItem>
inline ::UnityEngine::Pool::PooledObject_1<TCollection> UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::Get(::ByRef<TCollection>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TCollection>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<TCollection>, false>(nullptr, ___internal_method, value);
}
template<typename TCollection,typename TItem>
inline void UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::Release(TCollection  toRelease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCollection>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template<typename TCollection,typename TItem>
constexpr ::UnityEngine::Pool::CollectionPool_2<TCollection,TItem>::CollectionPool_2()   {
}
