#pragma once
// IWYU pragma private; include "Zenject/MethodProviderWithContainer_6.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderWithContainer_6_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_7_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::Zenject::IProvider* Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*&
Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*> const&
Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr void Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::__cordl_internal_set__method(
    ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____method, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline ::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*
Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::New_ctor(
    ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(method));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline void Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::_ctor(
    ::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* method) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline bool Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(),
                                  "get_IsCached", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline bool Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(),
                                  "get_TypeVariesBasedOnMemberType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline ::System::Type* Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), "GetInstanceType",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline void Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::GetAllInstancesWithInjectSplit(
    ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
    ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(),
                                  "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::Zenject::MethodProviderWithContainer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::MethodProviderWithContainer_6() {}
