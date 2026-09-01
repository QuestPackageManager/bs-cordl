#pragma once
// IWYU pragma private; include "Zenject\PlaceholderFactoryBindingFinalizer_1.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo* const& Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factoryBindInfo = value;
}
template <typename TContract> inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, factoryBindInfo);
}
template <typename TContract> inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
template <typename TContract>
inline ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>* Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::New_ctor(::Zenject::BindInfo* bindInfo,
                                                                                                                                      ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>(bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::PlaceholderFactoryBindingFinalizer_1() {}
