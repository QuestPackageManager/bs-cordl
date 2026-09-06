#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_impl.hpp"
#include "Zenject/zzzz__ConcreteIdBinderGeneric_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TContract>
inline void Zenject::ConcreteIdBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::ConcreteIdBinderGeneric_1<TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*>(this, ___internal_method, identifier);
}
template <typename TContract>
inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::ConcreteIdBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::ConcreteIdBinderGeneric_1<TContract>::ConcreteIdBinderGeneric_1() {}
