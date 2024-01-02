#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderWithContainer_7_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_8_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*&
Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*> const&
Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr void Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__set__method(
    ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*
Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::New_ctor(
    ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(method));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::_ctor(
    ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline bool Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                 "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline bool Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                 "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::System::Type* Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), "GetInstanceType",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::GetAllInstancesWithInjectSplit(
    ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
    ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                 "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::MethodProviderWithContainer_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::MethodProviderWithContainer_7() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
