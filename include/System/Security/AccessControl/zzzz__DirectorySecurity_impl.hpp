#pragma once
// IWYU pragma private; include "System\Security\AccessControl\DirectorySecurity.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__DirectorySecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::DirectorySecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::DirectorySecurity::*)(::StringW, ::System::Security::AccessControl::AccessControlSections)>(
    &::System::Security::AccessControl::DirectorySecurity::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b1f480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DirectorySecurity*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::DirectorySecurity::_ctor(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DirectorySecurity*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, includeSections);
}
inline ::System::Security::AccessControl::DirectorySecurity* System::Security::AccessControl::DirectorySecurity::New_ctor(::StringW name,
                                                                                                                          ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::DirectorySecurity*>(name, includeSections));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::DirectorySecurity::DirectorySecurity() {}
