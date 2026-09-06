#pragma once
// IWYU pragma private; include "System/Security/Principal/IIdentity.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::IIdentity.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::IIdentity::*)()>(&::System::Security::Principal::IIdentity::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IIdentity*>(), { ::i2c::class_of<::System::Security::Principal::IIdentity*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IIdentity.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::IIdentity::*)()>(&::System::Security::Principal::IIdentity::get_AuthenticationType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IIdentity*>(), { ::i2c::class_of<::System::Security::Principal::IIdentity*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW System::Security::Principal::IIdentity::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IIdentity*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::IIdentity::get_AuthenticationType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IIdentity*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
