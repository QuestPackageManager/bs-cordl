#pragma once
// IWYU pragma private; include "Zenject/MethodProvider_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IProvider_impl.hpp"
#include "Zenject/zzzz__MethodProvider_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TReturn> constexpr ::Zenject::DiContainer*& Zenject::MethodProvider_1<TReturn>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TReturn> constexpr ::Zenject::DiContainer* const& Zenject::MethodProvider_1<TReturn>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TReturn> constexpr void Zenject::MethodProvider_1<TReturn>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename TReturn> constexpr ::System::Func_2<::Zenject::InjectContext*, TReturn>*& Zenject::MethodProvider_1<TReturn>::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn> constexpr ::System::Func_2<::Zenject::InjectContext*, TReturn>* const& Zenject::MethodProvider_1<TReturn>::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn> constexpr void Zenject::MethodProvider_1<TReturn>::__cordl_internal_set__method(::System::Func_2<::Zenject::InjectContext*, TReturn>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____method, value);
}
template <typename TReturn> inline void Zenject::MethodProvider_1<TReturn>::_ctor(::System::Func_2<::Zenject::InjectContext*, TReturn>* method, ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProvider_1<TReturn>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, TReturn>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, container);
}
template <typename TReturn> inline bool Zenject::MethodProvider_1<TReturn>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProvider_1<TReturn>*>::get(), "get_IsCached",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TReturn> inline bool Zenject::MethodProvider_1<TReturn>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProvider_1<TReturn>*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TReturn> inline ::System::Type* Zenject::MethodProvider_1<TReturn>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProvider_1<TReturn>*>::get(), "GetInstanceType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TReturn>
inline void Zenject::MethodProvider_1<TReturn>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                               ::ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProvider_1<TReturn>*>::get(), "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Action*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
template <typename TReturn>
inline ::Zenject::MethodProvider_1<TReturn>* Zenject::MethodProvider_1<TReturn>::New_ctor(::System::Func_2<::Zenject::InjectContext*, TReturn>* method, ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MethodProvider_1<TReturn>*>(method, container));
}
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TReturn> constexpr Zenject::MethodProvider_1<TReturn>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
template <typename TReturn> constexpr ::Zenject::IProvider* Zenject::MethodProvider_1<TReturn>::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TReturn> constexpr ::Zenject::MethodProvider_1<TReturn>::MethodProvider_1() {}
