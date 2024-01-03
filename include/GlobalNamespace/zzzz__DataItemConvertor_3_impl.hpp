#pragma once
#include "GlobalNamespace/zzzz__DataItemConvertor_1_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TBase, typename TIn, typename TOut> inline ::System::Type* GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::get_inputDataType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TBase, typename TIn, typename TOut> inline TBase GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::Convert(::System::Object* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<TBase, false>(this, ___internal_method, item);
}
template <typename TBase, typename TIn, typename TOut> inline TOut GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::Convert(TIn item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, item);
}
template <typename TBase, typename TIn, typename TOut> inline ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>* GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>*>());
}
template <typename TBase, typename TIn, typename TOut> inline void GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TBase, typename TIn, typename TOut> constexpr ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>::DataItemConvertor_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
