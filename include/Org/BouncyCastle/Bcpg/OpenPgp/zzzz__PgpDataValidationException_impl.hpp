#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpDataValidationException.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpDataValidationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x357f4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::*)(::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x357f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x357f4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>());
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(message));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException::PgpDataValidationException() {}
