#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BasicNode_1.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
template<typename T>
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>*& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>* const& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename T>
constexpr void UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___next, value);
}
template<typename T>
constexpr T& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr T const& UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr void UnityEngine::UIElements::UIR::BasicNode_1<T>::__cordl_internal_set_data(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___data, value);
}
template<typename T>
inline void UnityEngine::UIElements::UIR::BasicNode_1<T>::InsertFirst(::ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>  first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>::get(),
                        "InsertFirst",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first);
}
template<typename T>
inline void UnityEngine::UIElements::UIR::BasicNode_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* UnityEngine::UIElements::UIR::BasicNode_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>::BasicNode_1()   {
}
