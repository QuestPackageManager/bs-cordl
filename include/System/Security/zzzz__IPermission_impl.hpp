#pragma once
// IWYU pragma private; include "System/Security/IPermission.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
//  Writing Method size for method: ::System::Security::IPermission.Demand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::IPermission::*)()>(&::System::Security::IPermission::Demand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::IPermission*>(), { ::i2c::class_of<::System::Security::IPermission*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::IPermission.IsSubsetOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::IPermission::*)(::System::Security::IPermission*)>(&::System::Security::IPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::IPermission*>(), { ::i2c::class_of<::System::Security::IPermission*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Security::IPermission::Demand() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::IPermission*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Security::IPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::IPermission*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
/// @brief Convert operator to "::System::Security::ISecurityEncodable"
constexpr System::Security::IPermission::operator ::System::Security::ISecurityEncodable*() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::ISecurityEncodable"
constexpr ::System::Security::ISecurityEncodable* System::Security::IPermission::i___System__Security__ISecurityEncodable() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
