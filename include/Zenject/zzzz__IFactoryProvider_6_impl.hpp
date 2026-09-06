#pragma once
// IWYU pragma private; include "Zenject/IFactoryProvider_6.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_impl.hpp"
#include "Zenject/zzzz__IFactoryProvider_6_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, factoryId);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context,
                                                                                                                                ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                                                ::by_ref<::System::Action*> injectAction,
                                                                                                                                ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(container, factoryId));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::IFactoryProvider_6() {}
