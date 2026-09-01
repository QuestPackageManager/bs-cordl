#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\Pem\PemGenerationException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemGenerationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)()>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x362f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)(::StringW)>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x362f7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x362f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>());
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(message));
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException::PemGenerationException() {}
