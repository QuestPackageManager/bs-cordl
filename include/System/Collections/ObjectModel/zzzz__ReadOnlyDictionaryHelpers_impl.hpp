#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/ReadOnlyDictionaryHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionaryHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
template<typename T>
inline void System::Collections::ObjectModel::ReadOnlyDictionaryHelpers::CopyToNonGenericICollectionHelper(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Array*  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers*>::get(),
                    "CopyToNonGenericICollectionHelper",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, collection, array, index);
}
// Ctor Parameters []
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers::ReadOnlyDictionaryHelpers()   {
}
