#pragma once
#include "Zenject/zzzz__IFactoryProviderBase_1_impl.hpp"
#include "Zenject/zzzz__IFactoryProvider_6_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*
Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(container, factoryId));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, factoryId);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline void Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context,
                                                                                                                                ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                                                ByRef<::System::Action*> injectAction,
                                                                                                                                ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(),
                                  "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
constexpr ::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>::IFactoryProvider_6() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
