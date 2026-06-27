#pragma once
// IWYU pragma private; include "TMPro/TMP_ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_Stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stack;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_Stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stack;
}
template<typename T>
constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Stack, value);
}
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnGet;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnGet;
}
template<typename T>
constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_ActionOnGet, value);
}
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnRelease;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnRelease;
}
template<typename T>
constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_ActionOnRelease, value);
}
template<typename T>
constexpr int32_t& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countAll_k__BackingField;
}
template<typename T>
constexpr int32_t const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countAll_k__BackingField;
}
template<typename T>
constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set__countAll_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countAll_k__BackingField = value;
}
template<typename T>
inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "get_countAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline void TMPro::TMP_ObjectPool_1<T>::set_countAll(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "set_countAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "get_countActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "get_countInactive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline void TMPro::TMP_ObjectPool_1<T>::_ctor(::UnityEngine::Events::UnityAction_1<T>*  actionOnGet, ::UnityEngine::Events::UnityAction_1<T>*  actionOnRelease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionOnGet, actionOnRelease);
}
template<typename T>
inline T TMPro::TMP_ObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void TMPro::TMP_ObjectPool_1<T>::Release(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ObjectPool_1<T>*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template<typename T>
inline ::TMPro::TMP_ObjectPool_1<T>* TMPro::TMP_ObjectPool_1<T>::New_ctor(::UnityEngine::Events::UnityAction_1<T>*  actionOnGet, ::UnityEngine::Events::UnityAction_1<T>*  actionOnRelease)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_ObjectPool_1<T>*>(actionOnGet, actionOnRelease));
}
// Ctor Parameters []
template<typename T>
constexpr ::TMPro::TMP_ObjectPool_1<T>::TMP_ObjectPool_1()   {
}
