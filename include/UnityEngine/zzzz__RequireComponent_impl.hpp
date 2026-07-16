#pragma once
// IWYU pragma private; include "UnityEngine/RequireComponent.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__RequireComponent_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad7790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RequireComponent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*, ::System::Type*)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad7798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RequireComponent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::RequireComponent::__cordl_internal_get_m_Type0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type0;
}
constexpr ::System::Type* const& UnityEngine::RequireComponent::__cordl_internal_get_m_Type0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type0;
}
constexpr void UnityEngine::RequireComponent::__cordl_internal_set_m_Type0(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type0 = value;
}
constexpr ::System::Type*& UnityEngine::RequireComponent::__cordl_internal_get_m_Type1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type1;
}
constexpr ::System::Type* const& UnityEngine::RequireComponent::__cordl_internal_get_m_Type1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type1;
}
constexpr void UnityEngine::RequireComponent::__cordl_internal_set_m_Type1(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type1 = value;
}
constexpr ::System::Type*& UnityEngine::RequireComponent::__cordl_internal_get_m_Type2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type2;
}
constexpr ::System::Type* const& UnityEngine::RequireComponent::__cordl_internal_get_m_Type2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type2;
}
constexpr void UnityEngine::RequireComponent::__cordl_internal_set_m_Type2(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type2 = value;
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type* requiredComponent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RequireComponent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requiredComponent);
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RequireComponent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requiredComponent, requiredComponent2);
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type* requiredComponent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RequireComponent*>(requiredComponent));
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RequireComponent*>(requiredComponent, requiredComponent2));
}
// Ctor Parameters []
constexpr ::UnityEngine::RequireComponent::RequireComponent() {}
