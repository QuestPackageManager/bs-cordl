#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ObjectListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
template<typename T>
inline void UnityEngine::UIElements::ObjectListPool_1___c<T>::setStaticF___9(::UnityEngine::UIElements::ObjectListPool_1___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectListPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>::get>(std::forward<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectListPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>::get>();
}
template<typename T>
inline void UnityEngine::UIElements::ObjectListPool_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>::get(),
                        "<.cctor>b__4_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::ObjectListPool_1___c<T>::ObjectListPool_1___c()   {
}
template<typename T>
inline void UnityEngine::UIElements::ObjectListPool_1<T>::setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get>(std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* UnityEngine::UIElements::ObjectListPool_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::ObjectListPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::ObjectListPool_1<T>::Release(::System::Collections::Generic::List_1<T>*  elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elements);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::ObjectListPool_1<T>::ObjectListPool_1()   {
}
