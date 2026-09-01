#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\PkcsIOException.hpp"
#include "System/IO/zzzz__IOException_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__PkcsIOException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsIOException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsIOException::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::PkcsIOException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35bb2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::PkcsIOException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsIOException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsIOException::*)(::StringW, ::System::Exception*)>(&::Org::BouncyCastle::Pkcs::PkcsIOException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35ba91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::PkcsIOException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkcs::PkcsIOException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::PkcsIOException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Pkcs::PkcsIOException::_ctor(::StringW message, ::System::Exception* underlying) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::PkcsIOException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, underlying);
}
inline ::Org::BouncyCastle::Pkcs::PkcsIOException* Org::BouncyCastle::Pkcs::PkcsIOException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::PkcsIOException*>(message));
}
inline ::Org::BouncyCastle::Pkcs::PkcsIOException* Org::BouncyCastle::Pkcs::PkcsIOException::New_ctor(::StringW message, ::System::Exception* underlying) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::PkcsIOException*>(message, underlying));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::PkcsIOException::PkcsIOException() {}
