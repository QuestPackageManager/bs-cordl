#pragma once
// IWYU pragma private; include "System/Diagnostics/Contracts/Contract.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/Contracts/zzzz__Contract_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template<typename T>
inline bool System::Diagnostics::Contracts::Contract::ForAll(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Predicate_1<T>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Contracts::Contract*>::get(),
                    "ForAll",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, collection, predicate);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Contracts::Contract::Contract()   {
}
