#pragma once
// IWYU pragma private; include "System/Security/SecurityManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__SecurityManager_def.hpp"
//  Writing Method size for method: ::System::Security::SecurityManager.get_SecurityEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::SecurityManager::get_SecurityEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aecc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityManager*>(), { "get_SecurityEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityManager.EnsureElevatedPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Security::SecurityManager::EnsureElevatedPermissions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af011c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityManager*>(), { "EnsureElevatedPermissions", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Security::SecurityManager::get_SecurityEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityManager*>(), { "get_SecurityEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Security::SecurityManager::EnsureElevatedPermissions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityManager*>(), { "EnsureElevatedPermissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::SecurityManager::SecurityManager() {}
