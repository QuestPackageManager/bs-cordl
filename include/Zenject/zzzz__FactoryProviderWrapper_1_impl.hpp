#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryProviderWrapper_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_1<TContract>"
template <typename TContract> constexpr Zenject::FactoryProviderWrapper_1<TContract>::operator ::Zenject::IFactory_1<TContract>*() noexcept {
  return static_cast<::Zenject::IFactory_1<TContract>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<TContract>"
template <typename TContract> constexpr ::Zenject::IFactory_1<TContract>* Zenject::FactoryProviderWrapper_1<TContract>::i___Zenject__IFactory_1_TContract_() noexcept {
  return static_cast<::Zenject::IFactory_1<TContract>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TContract> constexpr Zenject::FactoryProviderWrapper_1<TContract>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TContract> constexpr ::Zenject::IFactory* Zenject::FactoryProviderWrapper_1<TContract>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TContract> constexpr ::Zenject::IProvider*& Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_get__provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_get__provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TContract> constexpr void Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_set__provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::InjectContext*& Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_get__injectContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_get__injectContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TContract> constexpr void Zenject::FactoryProviderWrapper_1<TContract>::__cordl_internal_set__injectContext(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____injectContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::FactoryProviderWrapper_1<TContract>* Zenject::FactoryProviderWrapper_1<TContract>::New_ctor(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryProviderWrapper_1<TContract>*>(provider, injectContext));
}
template <typename TContract> inline void Zenject::FactoryProviderWrapper_1<TContract>::_ctor(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, injectContext);
}
template <typename TContract> inline TContract Zenject::FactoryProviderWrapper_1<TContract>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryProviderWrapper_1<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryProviderWrapper_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryProviderWrapper_1<TContract>::FactoryProviderWrapper_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
