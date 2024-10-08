#pragma once
// IWYU pragma private; include "System/Linq/Expressions/IParameterProvider.hpp"
#include "System/Linq/Expressions/zzzz__IParameterProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::IParameterProvider.GetParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ParameterExpression* (::System::Linq::Expressions::IParameterProvider::*)(int32_t)>(
    &::System::Linq::Expressions::IParameterProvider::GetParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IParameterProvider.get_ParameterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::IParameterProvider::*)()>(
    &::System::Linq::Expressions::IParameterProvider::get_ParameterCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::IParameterProvider::GetParameter(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::IParameterProvider::get_ParameterCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IParameterProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
