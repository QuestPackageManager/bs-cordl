#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\MacUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__MacUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::MacUtilities::*)()>(&::Org::BouncyCastle::Security::MacUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35ffe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Security::MacUtilities::GetMac)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3601b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "GetMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (*)(::StringW)>(&::Org::BouncyCastle::Security::MacUtilities::GetMac)> {
  constexpr static std::size_t size = 0xb3c;
  constexpr static std::size_t addrs = 0x3601bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "GetMac", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.GetAlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Security::MacUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36026fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                                                                                           { "GetAlgorithmName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.CalculateMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Security::MacUtilities::CalculateMac)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x36027fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                            { "CalculateMac", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Security::MacUtilities::DoFinal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x360295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "DoFinal", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::MacUtilities.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::MacUtilities::DoFinal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3602a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                                                             { "DoFinal", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::MacUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::MacUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::MacUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::MacUtilities*>();
}
inline void Org::BouncyCastle::Security::MacUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Security::MacUtilities::GetMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "GetMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(nullptr, ___internal_method, id);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Security::MacUtilities::GetMac(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "GetMac", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::MacUtilities::GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                                                                                         { "GetAlgorithmName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::CalculateMac(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* cp, ::ArrayW<uint8_t> input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                          { "CalculateMac", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, algorithm, cp, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::DoFinal(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(), { "DoFinal", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, mac);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::DoFinal(::Org::BouncyCastle::Crypto::IMac* mac, ::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::MacUtilities*>(),
                                                           { "DoFinal", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, mac, input);
}
inline ::Org::BouncyCastle::Security::MacUtilities* Org::BouncyCastle::Security::MacUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::MacUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::MacUtilities::MacUtilities() {}
