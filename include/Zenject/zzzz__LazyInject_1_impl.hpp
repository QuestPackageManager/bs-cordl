#pragma once
// IWYU pragma private; include "Zenject/LazyInject_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IValidatable_impl.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
template <typename T> constexpr ::Zenject::DiContainer*& Zenject::LazyInject_1<T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr ::Zenject::DiContainer* const& Zenject::LazyInject_1<T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename T> constexpr ::Zenject::InjectContext*& Zenject::LazyInject_1<T>::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
template <typename T> constexpr ::Zenject::InjectContext* const& Zenject::LazyInject_1<T>::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__cordl_internal_set__context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____context, value);
}
template <typename T> constexpr bool& Zenject::LazyInject_1<T>::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
template <typename T> constexpr bool const& Zenject::LazyInject_1<T>::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
template <typename T> constexpr T& Zenject::LazyInject_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& Zenject::LazyInject_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value, value);
}
template <typename T> inline void Zenject::LazyInject_1<T>::_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, context);
}
template <typename T> inline void Zenject::LazyInject_1<T>::Zenject_IValidatable_Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(),
                                                                             "Zenject.IValidatable.Validate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Zenject::LazyInject_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::Zenject::LazyInject_1<T>* Zenject::LazyInject_1<T>::New_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::LazyInject_1<T>*>(container, context));
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename T> constexpr Zenject::LazyInject_1<T>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename T> constexpr ::Zenject::IValidatable* Zenject::LazyInject_1<T>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::LazyInject_1<T>::LazyInject_1() {}
