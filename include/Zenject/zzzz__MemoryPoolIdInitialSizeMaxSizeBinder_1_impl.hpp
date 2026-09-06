#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolIdInitialSizeMaxSizeBinder_1.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolIdInitialSizeMaxSizeBinder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
template <typename TContract>
inline void Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                              ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(),
                                                                                             ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(this, ___internal_method, identifier);
}
template <typename TContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*
Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                     ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>::MemoryPoolIdInitialSizeMaxSizeBinder_1() {}
