#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TOut, typename TParam> inline TOut GlobalNamespace::DataItemConvertor_2<TOut, TParam>::Convert(::System::Object* item, TParam param) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut, TParam>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, item, param);
}
template <typename TOut, typename TParam> inline ::System::Type* GlobalNamespace::DataItemConvertor_2<TOut, TParam>::get_inputDataType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut, TParam>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TOut, typename TParam> inline ::GlobalNamespace::DataItemConvertor_2<TOut, TParam>* GlobalNamespace::DataItemConvertor_2<TOut, TParam>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataItemConvertor_2<TOut, TParam>*>());
}
template <typename TOut, typename TParam> inline void GlobalNamespace::DataItemConvertor_2<TOut, TParam>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_2<TOut, TParam>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TOut, typename TParam> constexpr ::GlobalNamespace::DataItemConvertor_2<TOut, TParam>::DataItemConvertor_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
