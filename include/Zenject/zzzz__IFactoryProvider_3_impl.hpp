#pragma once
// IWYU pragma private; include "Zenject\IFactoryProvider_3.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_impl.hpp"
#include "Zenject/zzzz__IFactoryProvider_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, factoryId);
}
template <typename TParam1, typename TParam2, typename TContract>
inline void
Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                         ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>* Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>*>(container, factoryId));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::IFactoryProvider_3<TParam1, TParam2, TContract>::IFactoryProvider_3() {}
