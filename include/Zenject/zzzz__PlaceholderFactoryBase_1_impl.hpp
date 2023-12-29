#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__IPlaceholderFactory_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
/// @brief Convert operator to "::Zenject::IPlaceholderFactory"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IPlaceholderFactory*() noexcept {
  return static_cast<::Zenject::IPlaceholderFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::Zenject::IProvider*& Zenject::PlaceholderFactoryBase_1<TValue>::__get__provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& Zenject::PlaceholderFactoryBase_1<TValue>::__get__provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__set__provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::Zenject::InjectContext*& Zenject::PlaceholderFactoryBase_1<TValue>::__get__injectContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::PlaceholderFactoryBase_1<TValue>::__get__injectContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__set__injectContext(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____injectContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "Construct", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, injectContext);
}
template <typename TValue> inline TValue Zenject::PlaceholderFactoryBase_1<TValue>::CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "CreateInternal", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, extraArgs);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "Validate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::PlaceholderFactoryBase_1<TValue>::get_ParamTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(),
                                                                             "get_ParamTypes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::Zenject::PlaceholderFactoryBase_1<TValue>* Zenject::PlaceholderFactoryBase_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PlaceholderFactoryBase_1<TValue>*>());
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "__zenInjectMethod0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactoryBase_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::PlaceholderFactoryBase_1<TValue>::PlaceholderFactoryBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
