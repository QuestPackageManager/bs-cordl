#pragma once
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
//  Writing Method size for method: ::Zenject::IBindingFinalizer.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::IBindingFinalizer::*)()>(
    &::Zenject::IBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IBindingFinalizer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::IBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(), 1));
    return ___internal_method;
  }
};
inline ::Zenject::BindingInheritanceMethods Zenject::IBindingFinalizer::get_BindingInheritanceMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods, false>(this, ___internal_method);
}
inline void Zenject::IBindingFinalizer::FinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IBindingFinalizer*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
