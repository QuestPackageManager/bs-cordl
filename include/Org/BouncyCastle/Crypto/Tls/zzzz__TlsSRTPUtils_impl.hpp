#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSRTPUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSRTPUtils_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UseSrtpData_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.AddUseSrtpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::Org::BouncyCastle::Crypto::Tls::UseSrtpData*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::AddUseSrtpExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3490194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(),
                                         { "AddUseSrtpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.GetUseSrtpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::UseSrtpData* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::GetUseSrtpExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3490394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(),
                                                                                           { "GetUseSrtpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.CreateUseSrtpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::UseSrtpData*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::CreateUseSrtpExtension)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3490274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(),
                                                                                           { "CreateUseSrtpExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.ReadUseSrtpExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::UseSrtpData* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::ReadUseSrtpExtension)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3490404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(), { "ReadUseSrtpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3490730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::AddUseSrtpExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* useSRTPData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(),
                                       { "AddUseSrtpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, useSRTPData);
}
inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::GetUseSrtpExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(), { "GetUseSrtpExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::CreateUseSrtpExtension(::Org::BouncyCastle::Crypto::Tls::UseSrtpData* useSrtpData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(),
                                                                                         { "CreateUseSrtpExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, useSrtpData);
}
inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::ReadUseSrtpExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(), { "ReadUseSrtpExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(nullptr, ___internal_method, extensionData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils* Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::TlsSRTPUtils() {}
