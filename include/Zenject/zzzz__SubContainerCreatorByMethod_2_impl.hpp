#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByMethod_2.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::__cordl_internal_get__installMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
template <typename TParam1, typename TParam2>
constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* const& Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::__cordl_internal_get__installMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
template <typename TParam1, typename TParam2>
constexpr void Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::__cordl_internal_set__installMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installMethod = value;
}
template <typename TParam1, typename TParam2>
inline void Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                            ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(),
                                                                                             ::i2c::type_of<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, containerBindInfo, installMethod);
}
template <typename TParam1, typename TParam2>
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                            ::Zenject::InjectContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
template <typename TParam1, typename TParam2>
inline ::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>*
Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                   ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>*>(container, containerBindInfo, installMethod));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2> constexpr ::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>::SubContainerCreatorByMethod_2() {}
