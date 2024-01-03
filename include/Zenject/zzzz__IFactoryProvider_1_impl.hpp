#pragma once
#include "Zenject/zzzz__IFactoryProviderBase_1_impl.hpp"
#include "Zenject/zzzz__IFactoryProvider_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TContract> inline ::Zenject::IFactoryProvider_1<TContract>* Zenject::IFactoryProvider_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::IFactoryProvider_1<TContract>*>(container, factoryId));
}
template <typename TContract> inline void Zenject::IFactoryProvider_1<TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProvider_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, factoryId);
}
template <typename TContract>
inline void Zenject::IFactoryProvider_1<TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                   ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProvider_1<TContract>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::IFactoryProvider_1<TContract>::IFactoryProvider_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
