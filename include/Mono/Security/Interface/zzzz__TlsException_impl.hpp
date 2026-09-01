#pragma once
// IWYU pragma private; include "Mono\Security\Interface\TlsException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Mono/Security/Interface/zzzz__TlsException_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::TlsException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::TlsException::*)(::Mono::Security::Interface::Alert*, ::StringW)>(
    &::Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a9e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::TlsException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::Alert*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::TlsException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::TlsException::*)(::Mono::Security::Interface::AlertDescription, ::StringW)>(
    &::Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a9e5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::TlsException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::AlertDescription>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::Alert*& Mono::Security::Interface::TlsException::__cordl_internal_get_alert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alert;
}
constexpr ::Mono::Security::Interface::Alert* const& Mono::Security::Interface::TlsException::__cordl_internal_get_alert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alert;
}
constexpr void Mono::Security::Interface::TlsException::__cordl_internal_set_alert(::Mono::Security::Interface::Alert* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alert = value;
}
inline void Mono::Security::Interface::TlsException::_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::TlsException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::Alert*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alert, message);
}
inline void Mono::Security::Interface::TlsException::_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::TlsException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Interface::AlertDescription>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description, message);
}
inline ::Mono::Security::Interface::TlsException* Mono::Security::Interface::TlsException::New_ctor(::Mono::Security::Interface::Alert* alert, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::TlsException*>(alert, message));
}
inline ::Mono::Security::Interface::TlsException* Mono::Security::Interface::TlsException::New_ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::TlsException*>(description, message));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::TlsException::TlsException() {}
