#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TOut> inline TOut GlobalNamespace::DataItemConvertor_1<TOut>::Convert(::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_1<TOut>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, item);
}
template <typename TOut> inline ::System::Type* GlobalNamespace::DataItemConvertor_1<TOut>::get_inputDataType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_1<TOut>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TOut> inline ::GlobalNamespace::DataItemConvertor_1<TOut>* GlobalNamespace::DataItemConvertor_1<TOut>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DataItemConvertor_1<TOut>*>());
}
template <typename TOut> inline void GlobalNamespace::DataItemConvertor_1<TOut>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataItemConvertor_1<TOut>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TOut> constexpr ::GlobalNamespace::DataItemConvertor_1<TOut>::DataItemConvertor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
