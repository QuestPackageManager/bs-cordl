#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__MonoLinqHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::IO::MonoLinqHelper::ToArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoLinqHelper*>::get(), "ToArray",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::IO::MonoLinqHelper::MonoLinqHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
