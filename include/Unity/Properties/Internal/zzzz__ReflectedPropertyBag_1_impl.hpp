#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template<typename TContainer>
template<typename TValue>
inline void Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::AddProperty(::Unity::Properties::Property_2<TContainer,TValue>*  property)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>::get(),
                    "AddProperty",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Property_2<TContainer,TValue>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property);
}
template<typename TContainer>
inline void Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TContainer>
inline ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>* Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>());
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::ReflectedPropertyBag_1()   {
}
