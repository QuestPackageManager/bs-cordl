#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/ParameterUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__ParameterUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::ParameterUtilities::*)()>(&::Org::BouncyCastle::Security::ParameterUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.AddAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3601f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                           { "AddAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.AddBasicIVSizeEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::StringW>)>(&::Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3602134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                           { "AddBasicIVSizeEntries", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCanonicalAlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3602290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { "GetCanonicalAlgorithmName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36023c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                { "CreateKeyParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x360271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                           { "CreateKeyParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t>, int32_t,
                                                                                                                  int32_t)>(&::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3602794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                            { "CreateKeyParameter",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::StringW, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x3602444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                         { "CreateKeyParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCipherParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
                                                                                                           ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3602820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                             { "GetCipherParameters",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCipherParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::Asn1Object*)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x360289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                            { "GetCipherParameters",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GenerateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3602e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                            { "GenerateParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GenerateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::StringW, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3602edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                             { "GenerateParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.WithRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::WithRandom)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36032e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                         { "WithRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateIVOctetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateIVOctetString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36031d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                             { "CreateIVOctetString", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(&::Org::BouncyCastle::Security::ParameterUtilities::CreateIV)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3603278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                             { "CreateIV", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.FindBasicIVSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Security::ParameterUtilities::FindBasicIVSize)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3602cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { "FindBasicIVSize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::ParameterUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::ParameterUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::ParameterUtilities*>();
}
inline void Org::BouncyCastle::Security::ParameterUtilities::setStaticF_basicIVSizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "basicIVSizes", ::Org::BouncyCastle::Security::ParameterUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::getStaticF_basicIVSizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "basicIVSizes", ::Org::BouncyCastle::Security::ParameterUtilities*>();
}
inline void Org::BouncyCastle::Security::ParameterUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*> aliases) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                         { "AddAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canonicalName, aliases);
}
inline void Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries(int32_t size, ::ArrayW<::StringW> algorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                         { "AddBasicIVSizeEntries", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, size, algorithms);
}
inline ::StringW Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { "GetCanonicalAlgorithmName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                                  ::ArrayW<uint8_t> keyBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                           { "CreateKeyParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(nullptr, ___internal_method, algOid, keyBytes);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t> keyBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                                                         { "CreateKeyParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(nullptr, ___internal_method, algorithm, keyBytes);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                                  ::ArrayW<uint8_t> keyBytes, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                          { "CreateKeyParameter",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(nullptr, ___internal_method, algOid, keyBytes, offset, length);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t> keyBytes, int32_t offset,
                                                                                                                                  int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                       { "CreateKeyParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(nullptr, ___internal_method, algorithm, keyBytes, offset, length);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                            ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                           { "GetCipherParameters",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(nullptr, ___internal_method, algOid, key, asn1Params);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                          { "GetCipherParameters",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(nullptr, ___internal_method, algorithm, key, asn1Params);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algID,
                                                                                                                     ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                          { "GenerateParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, algID, random);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters(::StringW algorithm, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                           { "GenerateParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, algorithm, random);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::WithRandom(::Org::BouncyCastle::Crypto::ICipherParameters* cp,
                                                                                                                   ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                       { "WithRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(nullptr, ___internal_method, cp, random);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Security::ParameterUtilities::CreateIVOctetString(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                           { "CreateIVOctetString", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(nullptr, ___internal_method, random, ivLength);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::ParameterUtilities::CreateIV(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(),
                                                           { "CreateIV", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, random, ivLength);
}
inline int32_t Org::BouncyCastle::Security::ParameterUtilities::FindBasicIVSize(::StringW canonicalName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::ParameterUtilities*>(), { "FindBasicIVSize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, canonicalName);
}
inline ::Org::BouncyCastle::Security::ParameterUtilities* Org::BouncyCastle::Security::ParameterUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::ParameterUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::ParameterUtilities::ParameterUtilities() {}
