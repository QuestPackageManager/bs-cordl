#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__EnumerableHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Collections::Generic::EnumerableHelpers::ToArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::EnumerableHelpers*>::get(), "ToArray",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::EnumerableHelpers::EnumerableHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
