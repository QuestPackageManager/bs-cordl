#pragma once
// IWYU pragma private; include "Zenject\MemoryPoolExpandBinder_1.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo*& Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_get__MemoryPoolBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemoryPoolBindInfo_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo* const& Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_get__MemoryPoolBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemoryPoolBindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_set__MemoryPoolBindInfo_k__BackingField(::Zenject::MemoryPoolBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MemoryPoolBindInfo_k__BackingField = value;
}
template <typename TContract>
inline void Zenject::MemoryPoolExpandBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(),
                                                                                             ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolBindInfo* Zenject::MemoryPoolExpandBinder_1<TContract>::get_MemoryPoolBindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(), { "get_MemoryPoolBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolBindInfo*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolExpandBinder_1<TContract>::set_MemoryPoolBindInfo(::Zenject::MemoryPoolBindInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(), { "set_MemoryPoolBindInfo", {}, { ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByOneAtATime(bool showExpandWarning) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(), { "ExpandByOneAtATime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, ___internal_method, showExpandWarning);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByDoubling(bool showExpandWarning) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(), { "ExpandByDoubling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, ___internal_method, showExpandWarning);
}
template <typename TContract>
inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                              ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolExpandBinder_1<TContract>::MemoryPoolExpandBinder_1() {}
