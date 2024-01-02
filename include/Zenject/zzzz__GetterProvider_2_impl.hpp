#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__GetterProvider_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TObj, typename TResult> constexpr Zenject::GetterProvider_2<TObj, TResult>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template <typename TObj, typename TResult> constexpr ::Zenject::DiContainer*& Zenject::GetterProvider_2<TObj, TResult>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TObj, typename TResult> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::GetterProvider_2<TObj, TResult>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObj, typename TResult> constexpr ::System::Object*& Zenject::GetterProvider_2<TObj, TResult>::__get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
template <typename TObj, typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::GetterProvider_2<TObj, TResult>::__get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObj, typename TResult> constexpr ::System::Func_2<TObj, TResult>*& Zenject::GetterProvider_2<TObj, TResult>::__get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TObj, typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj, TResult>*> const& Zenject::GetterProvider_2<TObj, TResult>::__get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__set__method(::System::Func_2<TObj, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObj, typename TResult> constexpr bool& Zenject::GetterProvider_2<TObj, TResult>::__get__matchAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchAll;
}
template <typename TObj, typename TResult> constexpr bool const& Zenject::GetterProvider_2<TObj, TResult>::__get__matchAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchAll;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__set__matchAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matchAll = value;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources& Zenject::GetterProvider_2<TObj, TResult>::__get__sourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceType;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources const& Zenject::GetterProvider_2<TObj, TResult>::__get__sourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceType;
}
template <typename TObj, typename TResult> constexpr void Zenject::GetterProvider_2<TObj, TResult>::__set__sourceType(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sourceType = value;
}
template <typename TObj, typename TResult>
inline ::Zenject::GetterProvider_2<TObj, TResult>* Zenject::GetterProvider_2<TObj, TResult>::New_ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method,
                                                                                                      ::Zenject::DiContainer* container, ::Zenject::InjectSources sourceType, bool matchAll) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::GetterProvider_2<TObj, TResult>*>(identifier, method, container, sourceType, matchAll));
}
template <typename TObj, typename TResult>
inline void Zenject::GetterProvider_2<TObj, TResult>::_ctor(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::DiContainer* container,
                                                            ::Zenject::InjectSources sourceType, bool matchAll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identifier, method, container, sourceType, matchAll);
}
template <typename TObj, typename TResult> inline bool Zenject::GetterProvider_2<TObj, TResult>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(), "get_IsCached",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObj, typename TResult> inline bool Zenject::GetterProvider_2<TObj, TResult>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObj, typename TResult> inline ::System::Type* Zenject::GetterProvider_2<TObj, TResult>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TObj, typename TResult> inline ::Zenject::InjectContext* Zenject::GetterProvider_2<TObj, TResult>::GetSubContext(::Zenject::InjectContext* parent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(), "GetSubContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(this, ___internal_method, parent);
}
template <typename TObj, typename TResult>
inline void Zenject::GetterProvider_2<TObj, TResult>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                     ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj, TResult>*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TObj, typename TResult> constexpr ::Zenject::GetterProvider_2<TObj, TResult>::GetterProvider_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
