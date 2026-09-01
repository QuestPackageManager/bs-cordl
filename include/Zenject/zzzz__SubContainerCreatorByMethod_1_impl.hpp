#pragma once
// IWYU pragma private; include "Zenject\SubContainerCreatorByMethod_1.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1> constexpr ::System::Action_2<::Zenject::DiContainer*, TParam1>*& Zenject::SubContainerCreatorByMethod_1<TParam1>::__cordl_internal_get__installMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
template <typename TParam1> constexpr ::System::Action_2<::Zenject::DiContainer*, TParam1>* const& Zenject::SubContainerCreatorByMethod_1<TParam1>::__cordl_internal_get__installMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
template <typename TParam1> constexpr void Zenject::SubContainerCreatorByMethod_1<TParam1>::__cordl_internal_set__installMethod(::System::Action_2<::Zenject::DiContainer*, TParam1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installMethod = value;
}
template <typename TParam1>
inline void Zenject::SubContainerCreatorByMethod_1<TParam1>::_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                   ::System::Action_2<::Zenject::DiContainer*, TParam1>* installMethod) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(),
                                                                                             ::i2c::type_of<::System::Action_2<::Zenject::DiContainer*, TParam1>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, containerBindInfo, installMethod);
}
template <typename TParam1>
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod_1<TParam1>::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                   ::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
template <typename TParam1>
inline ::Zenject::SubContainerCreatorByMethod_1<TParam1>* Zenject::SubContainerCreatorByMethod_1<TParam1>::New_ctor(::Zenject::DiContainer* container,
                                                                                                                    ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                                                    ::System::Action_2<::Zenject::DiContainer*, TParam1>* installMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>(container, containerBindInfo, installMethod));
}
// Ctor Parameters []
template <typename TParam1> constexpr ::Zenject::SubContainerCreatorByMethod_1<TParam1>::SubContainerCreatorByMethod_1() {}
