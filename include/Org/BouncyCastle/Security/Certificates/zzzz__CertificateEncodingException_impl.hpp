#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\Certificates\CertificateEncodingException.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_impl.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateEncodingException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::*)()>(
    &::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::*)(::StringW)>(
    &::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ef694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Org::BouncyCastle::Security::Certificates::CertificateEncodingException::_ctor(::StringW msg, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, e);
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* Org::BouncyCastle::Security::Certificates::CertificateEncodingException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>());
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* Org::BouncyCastle::Security::Certificates::CertificateEncodingException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(msg));
}
inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* Org::BouncyCastle::Security::Certificates::CertificateEncodingException::New_ctor(::StringW msg,
                                                                                                                                                                    ::System::Exception* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*>(msg, e));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException::CertificateEncodingException() {}
