#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo*& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__get__poolBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolBindInfo;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolBindInfo*> const& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__get__poolBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolBindInfo;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBindingFinalizer_1<TContract>::__set__poolBindInfo(::Zenject::MemoryPoolBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poolBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBindingFinalizer_1<TContract>::__set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____factoryBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::MemoryPoolBindingFinalizer_1<TContract>* Zenject::MemoryPoolBindingFinalizer_1<TContract>::New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                      ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>(bindInfo, factoryBindInfo, poolBindInfo));
}
template <typename TContract>
inline void Zenject::MemoryPoolBindingFinalizer_1<TContract>::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline void Zenject::MemoryPoolBindingFinalizer_1<TContract>::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolBindingFinalizer_1<TContract>::MemoryPoolBindingFinalizer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
