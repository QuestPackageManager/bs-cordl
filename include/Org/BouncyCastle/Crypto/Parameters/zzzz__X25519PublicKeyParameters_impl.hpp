#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/X25519PublicKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X25519PublicKeyParameters_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34158c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3415b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::Encode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3415a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(),
                                                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::GetEncoded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3415c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::setStaticF_KeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KeySize", ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::getStaticF_KeySize() {
  return ::cordl_internals::getStaticField<int32_t, "KeySize", ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>();
}
inline void Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_ctor(::ArrayW<uint8_t> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off);
}
inline void Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::Encode(::ArrayW<uint8_t> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(),
                                                                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::GetEncoded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::New_ctor(::ArrayW<uint8_t> buf, int32_t off) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(buf, off));
}
inline ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::X25519PublicKeyParameters() {}
