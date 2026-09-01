#pragma once
// IWYU pragma private; include "System\Security\AccessControl\GenericSecurityDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::GenericSecurityDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1f174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor.set_Group
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::GenericSecurityDescriptor::set_Group)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericSecurityDescriptor.set_Owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::GenericSecurityDescriptor::set_Owner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::GenericSecurityDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::GenericSecurityDescriptor::set_Group(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::GenericSecurityDescriptor::set_Owner(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericSecurityDescriptor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::GenericSecurityDescriptor* System::Security::AccessControl::GenericSecurityDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::GenericSecurityDescriptor*>());
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::GenericSecurityDescriptor::GenericSecurityDescriptor() {}
