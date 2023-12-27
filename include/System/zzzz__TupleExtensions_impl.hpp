#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TupleExtensions_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template <typename T1, typename T2> inline void System::TupleExtensions::Deconstruct(::System::Tuple_2<T1, T2>* value, ByRef<T1> item1, ByRef<T2> item2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TupleExtensions*>::get(), "Deconstruct",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Tuple_2<T1, T2>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T1>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T2>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, item1, item2);
}
// Ctor Parameters []
constexpr ::System::TupleExtensions::TupleExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
