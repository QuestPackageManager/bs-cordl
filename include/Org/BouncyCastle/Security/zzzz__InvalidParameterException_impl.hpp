#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\InvalidParameterException.hpp"
#include "Org/BouncyCastle/Security/zzzz__KeyException_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__InvalidParameterException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidParameterException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::InvalidParameterException::*)()>(&::Org::BouncyCastle::Security::InvalidParameterException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ffe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidParameterException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::InvalidParameterException::*)(::StringW)>(
    &::Org::BouncyCastle::Security::InvalidParameterException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ffe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::InvalidParameterException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::InvalidParameterException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Security::InvalidParameterException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ffe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::InvalidParameterException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::InvalidParameterException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Security::InvalidParameterException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::InvalidParameterException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline ::Org::BouncyCastle::Security::InvalidParameterException* Org::BouncyCastle::Security::InvalidParameterException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::InvalidParameterException*>());
}
inline ::Org::BouncyCastle::Security::InvalidParameterException* Org::BouncyCastle::Security::InvalidParameterException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::InvalidParameterException*>(message));
}
inline ::Org::BouncyCastle::Security::InvalidParameterException* Org::BouncyCastle::Security::InvalidParameterException::New_ctor(::StringW message, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::InvalidParameterException*>(message, exception));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::InvalidParameterException::InvalidParameterException() {}
