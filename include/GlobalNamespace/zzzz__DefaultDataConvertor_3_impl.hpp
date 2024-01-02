#pragma once
#include "GlobalNamespace/zzzz__DataItemConvertor_3_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultDataConvertor_3_def.hpp"
template <typename TBase, typename TIn, typename TOut> inline TOut GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>::Convert(TIn item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, item);
}
template <typename TBase, typename TIn, typename TOut> inline ::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>* GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>*>());
}
template <typename TBase, typename TIn, typename TOut> inline void GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TIn, typename TOut> constexpr ::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>::DefaultDataConvertor_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
