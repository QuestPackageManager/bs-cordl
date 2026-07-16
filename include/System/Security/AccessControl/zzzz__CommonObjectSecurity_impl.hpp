#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "System/Security/AccessControl/zzzz__ObjectSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonObjectSecurity::*)(bool)>(&::System::Security::AccessControl::CommonObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonObjectSecurity*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity.GetAccessRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection* (
    ::System::Security::AccessControl::CommonObjectSecurity::*)(bool, bool, ::System::Type*)>(&::System::Security::AccessControl::CommonObjectSecurity::GetAccessRules)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonObjectSecurity*>(),
                                                             { "GetAccessRules", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::CommonObjectSecurity::_ctor(bool isContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonObjectSecurity*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer);
}
inline ::System::Security::AccessControl::AuthorizationRuleCollection* System::Security::AccessControl::CommonObjectSecurity::GetAccessRules(bool includeExplicit, bool includeInherited,
                                                                                                                                             ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonObjectSecurity*>(),
                                                           { "GetAccessRules", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AuthorizationRuleCollection*>(this, ___internal_method, includeExplicit, includeInherited, targetType);
}
inline ::System::Security::AccessControl::CommonObjectSecurity* System::Security::AccessControl::CommonObjectSecurity::New_ctor(bool isContainer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonObjectSecurity*>(isContainer));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonObjectSecurity::CommonObjectSecurity() {}
