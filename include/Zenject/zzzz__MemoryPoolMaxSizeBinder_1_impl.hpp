#pragma once
// IWYU pragma private; include "Zenject\MemoryPoolMaxSizeBinder_1.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
template <typename TContract>
inline void Zenject::MemoryPoolMaxSizeBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                 ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(),
                                                                                             ::i2c::type_of<::Zenject::FactoryBindInfo*>(), ::i2c::type_of<::Zenject::MemoryPoolBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* Zenject::MemoryPoolMaxSizeBinder_1<TContract>::WithMaxSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(), { "WithMaxSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(this, ___internal_method, size);
}
template <typename TContract>
inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* Zenject::MemoryPoolMaxSizeBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>::MemoryPoolMaxSizeBinder_1() {}
