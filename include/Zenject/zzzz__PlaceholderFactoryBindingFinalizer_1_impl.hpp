#pragma once
// IWYU pragma private; include "Zenject/PlaceholderFactoryBindingFinalizer_1.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____factoryBindInfo, value);
}
template <typename TContract>
inline ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>* Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::New_ctor(::Zenject::BindInfo* bindInfo,
                                                                                                                                      ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>(bindInfo, factoryBindInfo));
}
template <typename TContract> inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, factoryBindInfo);
}
template <typename TContract> inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::PlaceholderFactoryBindingFinalizer_1() {}
