#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\Certificates\CertificateParsingException.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_impl.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateParsingException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateParsingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateParsingException::*)()>(
    &::Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateParsingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateParsingException::*)(::StringW)>(
    &::Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateParsingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateParsingException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Security::Certificates::CertificateParsingException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* Org::BouncyCastle::Security::Certificates::CertificateParsingException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>());
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* Org::BouncyCastle::Security::Certificates::CertificateParsingException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(message));
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* Org::BouncyCastle::Security::Certificates::CertificateParsingException::New_ctor(::StringW message,
                                                                                                                                                                  ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateParsingException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::Certificates::CertificateParsingException::CertificateParsingException() {}
