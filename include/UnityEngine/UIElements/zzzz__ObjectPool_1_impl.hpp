#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1___c<T>::setStaticF___9(::UnityEngine::UIElements::ObjectPool_1___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get>(std::forward<::UnityEngine::UIElements::ObjectPool_1___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectPool_1___c<T>* UnityEngine::UIElements::ObjectPool_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get>();
}
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1___c<T>::setStaticF___9__6_0(::System::Func_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<T>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get>(std::forward<::System::Func_1<T>*>(value));
}
template<typename T>
inline ::System::Func_1<T>* UnityEngine::UIElements::ObjectPool_1___c<T>::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<T>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get>();
}
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::UIElements::ObjectPool_1___c<T>::__ctor_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1___c<T>*>::get(),
                        "<.ctor>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectPool_1___c<T>* UnityEngine::UIElements::ObjectPool_1___c<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ObjectPool_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::ObjectPool_1___c<T>::ObjectPool_1___c()   {
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_m_Stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stack;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_m_Stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stack;
}
template<typename T>
constexpr void UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Stack, value);
}
template<typename T>
constexpr int32_t& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_m_MaxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxSize;
}
template<typename T>
constexpr int32_t const& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_m_MaxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxSize;
}
template<typename T>
constexpr void UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_set_m_MaxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxSize = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_CreateFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateFunc;
}
template<typename T>
constexpr ::System::Func_1<T>* const& UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_get_CreateFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateFunc;
}
template<typename T>
constexpr void UnityEngine::UIElements::ObjectPool_1<T>::__cordl_internal_set_CreateFunc(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___CreateFunc, value);
}
template<typename T>
inline int32_t UnityEngine::UIElements::ObjectPool_1<T>::get_maxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        "get_maxSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1<T>::set_maxSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        "set_maxSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1<T>::_ctor(::System::Func_1<T>*  CreateFunc, int32_t  maxSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, CreateFunc, maxSize);
}
template<typename T>
inline int32_t UnityEngine::UIElements::ObjectPool_1<T>::Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        "Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::UIElements::ObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::ObjectPool_1<T>::Release(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectPool_1<T>*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template<typename T>
inline ::UnityEngine::UIElements::ObjectPool_1<T>* UnityEngine::UIElements::ObjectPool_1<T>::New_ctor(::System::Func_1<T>*  CreateFunc, int32_t  maxSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ObjectPool_1<T>*>(CreateFunc, maxSize));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::ObjectPool_1<T>::ObjectPool_1()   {
}
