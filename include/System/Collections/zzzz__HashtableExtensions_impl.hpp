#pragma once
// IWYU pragma private; include "System/Collections/HashtableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__HashtableExtensions_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline bool System::Collections::HashtableExtensions::TryGetValue(::System::Collections::Hashtable*  table, ::System::Object*  key, ::ByRef<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::HashtableExtensions*>::get(),
                    "TryGetValue",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, table, key, value);
}
// Ctor Parameters []
constexpr ::System::Collections::HashtableExtensions::HashtableExtensions()   {
}
