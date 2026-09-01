#pragma once
// IWYU pragma private; include "Zenject\PlaceholderFactoryBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPlaceholderFactory_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TValue> constexpr ::Zenject::IProvider*& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr ::Zenject::IProvider* const& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_set__provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____provider = value;
}
template <typename TValue> constexpr ::Zenject::InjectContext*& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__injectContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr ::Zenject::InjectContext* const& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__injectContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_set__injectContext(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____injectContext = value;
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(),
                                                           { "Construct", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, injectContext);
}
template <typename TValue> inline TValue Zenject::PlaceholderFactoryBase_1<TValue>::CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(),
                                                           { "CreateInternal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, extraArgs);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Validate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::PlaceholderFactoryBase_1<TValue>::get_ParamTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactoryBase_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PlaceholderFactoryBase_1<TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TValue> inline ::Zenject::PlaceholderFactoryBase_1<TValue>* Zenject::PlaceholderFactoryBase_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PlaceholderFactoryBase_1<TValue>*>());
}
/// @brief Convert operator to "::Zenject::IPlaceholderFactory"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IPlaceholderFactory*() noexcept {
  return static_cast<::Zenject::IPlaceholderFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPlaceholderFactory"
template <typename TValue> constexpr ::Zenject::IPlaceholderFactory* Zenject::PlaceholderFactoryBase_1<TValue>::i___Zenject__IPlaceholderFactory() noexcept {
  return static_cast<::Zenject::IPlaceholderFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TValue> constexpr ::Zenject::IValidatable* Zenject::PlaceholderFactoryBase_1<TValue>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::PlaceholderFactoryBase_1<TValue>::PlaceholderFactoryBase_1() {}
