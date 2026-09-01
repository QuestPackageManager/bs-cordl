#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\PkixCertPathBuilderException.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35c7b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::*)(::StringW)>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35bd558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35bdd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* Org::BouncyCastle::Pkix::PkixCertPathBuilderException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>());
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* Org::BouncyCastle::Pkix::PkixCertPathBuilderException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(message));
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* Org::BouncyCastle::Pkix::PkixCertPathBuilderException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException::PkixCertPathBuilderException() {}
