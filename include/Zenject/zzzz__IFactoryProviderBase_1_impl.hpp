#pragma once
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TContract> constexpr Zenject::IFactoryProviderBase_1<TContract>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template <typename TContract> constexpr ::System::Guid& Zenject::IFactoryProviderBase_1<TContract>::__get__FactoryId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____FactoryId_k__BackingField;
}
template <typename TContract> constexpr ::System::Guid const& Zenject::IFactoryProviderBase_1<TContract>::__get__FactoryId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____FactoryId_k__BackingField;
}
template <typename TContract> constexpr void Zenject::IFactoryProviderBase_1<TContract>::__set__FactoryId_k__BackingField(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____FactoryId_k__BackingField = value;
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::IFactoryProviderBase_1<TContract>::__get__Container_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Container_k__BackingField;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::IFactoryProviderBase_1<TContract>::__get__Container_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Container_k__BackingField;
}
template <typename TContract> constexpr void Zenject::IFactoryProviderBase_1<TContract>::__set__Container_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Container_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::IFactoryProviderBase_1<TContract>* Zenject::IFactoryProviderBase_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::IFactoryProviderBase_1<TContract>*>(container, factoryId));
}
template <typename TContract> inline void Zenject::IFactoryProviderBase_1<TContract>::_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, factoryId);
}
template <typename TContract> inline bool Zenject::IFactoryProviderBase_1<TContract>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(),
                                                                             "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Guid Zenject::IFactoryProviderBase_1<TContract>::get_FactoryId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(),
                                                                             "get_FactoryId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::IFactoryProviderBase_1<TContract>::set_FactoryId(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(), "set_FactoryId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::IFactoryProviderBase_1<TContract>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(),
                                                                             "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::IFactoryProviderBase_1<TContract>::set_Container(::Zenject::DiContainer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(), "set_Container", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline bool Zenject::IFactoryProviderBase_1<TContract>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Type* Zenject::IFactoryProviderBase_1<TContract>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TContract>
inline void Zenject::IFactoryProviderBase_1<TContract>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                       ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::IFactoryProviderBase_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactoryProviderBase_1<TContract>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::IFactoryProviderBase_1<TContract>::IFactoryProviderBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
