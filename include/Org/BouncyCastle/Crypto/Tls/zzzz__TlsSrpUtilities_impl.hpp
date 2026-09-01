#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsSrpUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpUtilities_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.AddSrpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::AddSrpExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x349219c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(),
                                                             { "AddSrpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.GetSrpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::GetSrpExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x349230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "GetSrpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.CreateSrpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::CreateSrpExtension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x349227c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "CreateSrpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.ReadSrpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::ReadSrpExtension)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x349237c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "ReadSrpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.ReadSrpParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::ReadSrpParameter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3491de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "ReadSrpParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.WriteSrpParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::WriteSrpParameter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3491b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(),
                                                             { "WriteSrpParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities.IsSrpCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::IsSrpCipherSuite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3492504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "IsSrpCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3492518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::AddSrpExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> identity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(),
                                                           { "AddSrpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, identity);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::GetSrpExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "GetSrpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::CreateSrpExtension(::ArrayW<uint8_t> identity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "CreateSrpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, identity);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::ReadSrpExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "ReadSrpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensionData);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::ReadSrpParameter(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "ReadSrpParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::WriteSrpParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(),
                                                           { "WriteSrpParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, output);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::IsSrpCipherSuite(int32_t cipherSuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { "IsSrpCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities* Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities::TlsSrpUtilities() {}
