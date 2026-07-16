#pragma once
// IWYU pragma private; include "System/Security/Principal/GenericPrincipal.hpp"
#include "System/Security/Claims/zzzz__ClaimsPrincipal_impl.hpp"
#include "System/Security/Principal/zzzz__GenericPrincipal_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::GenericPrincipal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::GenericPrincipal::*)(::System::Security::Principal::IIdentity*, ::ArrayW<::StringW>)>(
    &::System::Security::Principal::GenericPrincipal::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b112b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericPrincipal*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Principal::IIdentity*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::IIdentity*& System::Security::Principal::GenericPrincipal::__cordl_internal_get_m_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_identity;
}
constexpr ::System::Security::Principal::IIdentity* const& System::Security::Principal::GenericPrincipal::__cordl_internal_get_m_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_identity;
}
constexpr void System::Security::Principal::GenericPrincipal::__cordl_internal_set_m_identity(::System::Security::Principal::IIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_identity = value;
}
constexpr ::ArrayW<::StringW>& System::Security::Principal::GenericPrincipal::__cordl_internal_get_m_roles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_roles;
}
constexpr ::ArrayW<::StringW> const& System::Security::Principal::GenericPrincipal::__cordl_internal_get_m_roles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_roles;
}
constexpr void System::Security::Principal::GenericPrincipal::__cordl_internal_set_m_roles(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_roles = value;
}
inline void System::Security::Principal::GenericPrincipal::_ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW> roles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericPrincipal*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Principal::IIdentity*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, roles);
}
inline ::System::Security::Principal::GenericPrincipal* System::Security::Principal::GenericPrincipal::New_ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW> roles) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::GenericPrincipal*>(identity, roles));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::GenericPrincipal::GenericPrincipal() {}
