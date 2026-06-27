#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ArrayBuilderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ArrayBuilderExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
template<typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Linq::Expressions::ArrayBuilderExtensions::ToReadOnly(::System::Collections::Generic::ArrayBuilder_1<T>  builder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ArrayBuilderExtensions*>::get(),
                    "ToReadOnly",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ArrayBuilder_1<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, false>(nullptr, ___internal_method, builder);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ArrayBuilderExtensions::ArrayBuilderExtensions()   {
}
