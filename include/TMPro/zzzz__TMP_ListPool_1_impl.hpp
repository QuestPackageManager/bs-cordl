#pragma once
// IWYU pragma private; include "TMPro/TMP_ListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
template<typename T>
inline void TMPro::TMP_ListPool_1___c<T>::setStaticF___9(::TMPro::TMP_ListPool_1___c<T>*  value)  {
::cordl_internals::setStaticField<::TMPro::TMP_ListPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1___c<T>*>::get>(std::forward<::TMPro::TMP_ListPool_1___c<T>*>(value));
}
template<typename T>
inline ::TMPro::TMP_ListPool_1___c<T>* TMPro::TMP_ListPool_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_ListPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1___c<T>*>::get>();
}
template<typename T>
inline void TMPro::TMP_ListPool_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1___c<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void TMPro::TMP_ListPool_1___c<T>::__cctor_b__3_0(::System::Collections::Generic::List_1<T>*  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1___c<T>*>::get(),
                        "<.cctor>b__3_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l);
}
template<typename T>
inline ::TMPro::TMP_ListPool_1___c<T>* TMPro::TMP_ListPool_1___c<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_ListPool_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::TMPro::TMP_ListPool_1___c<T>::TMP_ListPool_1___c()   {
}
template<typename T>
inline void TMPro::TMP_ListPool_1<T>::setStaticF_s_ListPool(::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_ListPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1<T>*>::get>(std::forward<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* TMPro::TMP_ListPool_1<T>::getStaticF_s_ListPool()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_ListPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1<T>*>::get>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* TMPro::TMP_ListPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1<T>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline void TMPro::TMP_ListPool_1<T>::Release(::System::Collections::Generic::List_1<T>*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ListPool_1<T>*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template<typename T>
constexpr ::TMPro::TMP_ListPool_1<T>::TMP_ListPool_1()   {
}
