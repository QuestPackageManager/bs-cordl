#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DigitallySigned.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34410cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3441124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(&::Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344112c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3441134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigitallySigned.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DigitallySigned* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x343413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlgorithm;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* const& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_set_mAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAlgorithm = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_get_mSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__cordl_internal_set_mSignature(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSignature = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, signature);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(nullptr, ___internal_method, context, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::DigitallySigned::New_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                                    ::ArrayW<uint8_t> signature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(algorithm, signature));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DigitallySigned::DigitallySigned() {}
