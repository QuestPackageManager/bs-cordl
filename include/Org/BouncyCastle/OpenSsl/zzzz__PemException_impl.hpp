#pragma once
// IWYU pragma private; include "Org\BouncyCastle\OpenSsl\PemException.hpp"
#include "System/IO/zzzz__IOException_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemException::*)(::StringW)>(&::Org::BouncyCastle::OpenSsl::PemException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35a6eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemException::*)(::StringW, ::System::Exception*)>(&::Org::BouncyCastle::OpenSsl::PemException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35a6ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::OpenSsl::PemException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::OpenSsl::PemException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::OpenSsl::PemException* Org::BouncyCastle::OpenSsl::PemException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemException*>(message));
}
inline ::Org::BouncyCastle::OpenSsl::PemException* Org::BouncyCastle::OpenSsl::PemException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemException::PemException() {}
