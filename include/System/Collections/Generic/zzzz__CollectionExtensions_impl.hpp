#pragma once
// IWYU pragma private; include "System/Collections/Generic/CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
template<typename TKey,typename TValue>
inline TValue System::Collections::Generic::CollectionExtensions::GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*  dictionary, TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::CollectionExtensions*>::get(),
                    "GetValueOrDefault",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, dictionary, key);
}
template<typename TKey,typename TValue>
inline TValue System::Collections::Generic::CollectionExtensions::GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*  dictionary, TKey  key, TValue  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::CollectionExtensions*>::get(),
                    "GetValueOrDefault",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, dictionary, key, defaultValue);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::CollectionExtensions::CollectionExtensions()   {
}
