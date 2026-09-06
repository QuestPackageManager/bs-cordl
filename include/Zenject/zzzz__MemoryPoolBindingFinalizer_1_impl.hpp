#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolBindingFinalizer_1.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo*& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_get__poolBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolBindInfo;
}
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo* const& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_get__poolBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolBindInfo;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_set__poolBindInfo(::Zenject::MemoryPoolBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poolBindInfo = value;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo* const& Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBindingFinalizer_1<TContract>::__cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factoryBindInfo = value;
}
template <typename TContract>
inline void Zenject::MemoryPoolBindingFinalizer_1<TContract>::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline void Zenject::MemoryPoolBindingFinalizer_1<TContract>::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
template <typename TContract>
inline ::Zenject::MemoryPoolBindingFinalizer_1<TContract>* Zenject::MemoryPoolBindingFinalizer_1<TContract>::New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                      ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolBindingFinalizer_1<TContract>*>(bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolBindingFinalizer_1<TContract>::MemoryPoolBindingFinalizer_1() {}
