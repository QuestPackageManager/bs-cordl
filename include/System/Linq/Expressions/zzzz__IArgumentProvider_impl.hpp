#pragma once
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::IArgumentProvider.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IArgumentProvider::*)(int32_t)>(
    &::System::Linq::Expressions::IArgumentProvider::GetArgument)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IArgumentProvider.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::IArgumentProvider::*)()>(
    &::System::Linq::Expressions::IArgumentProvider::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IArgumentProvider::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::IArgumentProvider::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::IArgumentProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
