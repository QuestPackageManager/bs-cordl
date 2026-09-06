#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolInitialSizeMaxSizeBinder_1.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
template <typename TContract>
inline void Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                            ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(),
                                                                                             ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>::WithInitialSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(), { "WithInitialSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(this, ___internal_method, size);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>::WithFixedSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(), { "WithFixedSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, ___internal_method, size);
}
template <typename TContract>
inline ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*
Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                   ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>::MemoryPoolInitialSizeMaxSizeBinder_1() {}
