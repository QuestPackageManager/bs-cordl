#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SingleProviderBindingFinalizer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SingleProviderBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SingleProviderBindingFinalizer::*)(
    ::Zenject::BindInfo*, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*)>(&::Zenject::SingleProviderBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ee674c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SingleProviderBindingFinalizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SingleProviderBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SingleProviderBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ee6778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SingleProviderBindingFinalizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SingleProviderBindingFinalizer*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& Zenject::SingleProviderBindingFinalizer::__get__providerFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*> const&
Zenject::SingleProviderBindingFinalizer::__get__providerFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr void Zenject::SingleProviderBindingFinalizer::__set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providerFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SingleProviderBindingFinalizer*
Zenject::SingleProviderBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SingleProviderBindingFinalizer*>(bindInfo, providerFactory));
}
inline void Zenject::SingleProviderBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SingleProviderBindingFinalizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, providerFactory);
}
inline void Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SingleProviderBindingFinalizer*>::get(), "OnFinalizeBinding", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Zenject::SingleProviderBindingFinalizer::SingleProviderBindingFinalizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
