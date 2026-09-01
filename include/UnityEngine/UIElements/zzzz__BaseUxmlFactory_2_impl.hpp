#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseUxmlFactory_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename TCreatedType, typename TTraits> constexpr TTraits& UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_get_m_Traits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr TTraits const& UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_get_m_Traits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr void UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_set_m_Traits(TTraits value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Traits = value;
}
template <typename TCreatedType, typename TTraits> inline void UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlNamespace() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlQualifiedName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::System::Type* UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits>
inline bool UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc);
}
template <typename TCreatedType, typename TTraits>
inline ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>* UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>());
}
// Ctor Parameters []
template <typename TCreatedType, typename TTraits> constexpr ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::BaseUxmlFactory_2() {}
