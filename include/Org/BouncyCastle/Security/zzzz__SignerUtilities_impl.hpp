#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\SignerUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__SignerUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SignerUtilities::*)()>(&::Org::BouncyCastle::Security::SignerUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3610f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetObjectIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Security::SignerUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x361c3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetObjectIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.get_Algorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)()>(&::Org::BouncyCastle::Security::SignerUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x361c608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "get_Algorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetDefaultX509Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::SignerUtilities::GetDefaultX509Parameters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x361c6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                           { "GetDefaultX509Parameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetDefaultX509Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::StringW)>(&::Org::BouncyCastle::Security::SignerUtilities::GetDefaultX509Parameters)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x361c740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetDefaultX509Parameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetPssX509Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::StringW)>(&::Org::BouncyCastle::Security::SignerUtilities::GetPssX509Parameters)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x361c9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetPssX509Parameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::SignerUtilities::GetSigner)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x361cc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                           { "GetSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (*)(::StringW)>(&::Org::BouncyCastle::Security::SignerUtilities::GetSigner)> {
  constexpr static std::size_t size = 0x10f0;
  constexpr static std::size_t addrs = 0x361cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetSigner", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.GetEncodingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Security::SignerUtilities::GetEncodingName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x361dd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                           { "GetEncodingName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.InitSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool,
                                                                                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Security::SignerUtilities::InitSigner)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x361de58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                { "InitSigner",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SignerUtilities.InitSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ISigner* (*)(::StringW, bool, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Security::SignerUtilities::InitSigner)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x361dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                             { "InitSigner",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::SignerUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::SignerUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::SignerUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::SignerUtilities*>();
}
inline void Org::BouncyCastle::Security::SignerUtilities::setStaticF_oids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oids", ::Org::BouncyCastle::Security::SignerUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::SignerUtilities::getStaticF_oids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oids", ::Org::BouncyCastle::Security::SignerUtilities*>();
}
inline void Org::BouncyCastle::Security::SignerUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Security::SignerUtilities::GetObjectIdentifier(::StringW mechanism) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetObjectIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, mechanism);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Security::SignerUtilities::get_Algorithms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "get_Algorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::SignerUtilities::GetDefaultX509Parameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                         { "GetDefaultX509Parameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::SignerUtilities::GetDefaultX509Parameters(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetDefaultX509Parameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::SignerUtilities::GetPssX509Parameters(::StringW digestName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetPssX509Parameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, digestName);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Security::SignerUtilities::GetSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                         { "GetSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(nullptr, ___internal_method, id);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Security::SignerUtilities::GetSigner(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(), { "GetSigner", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::SignerUtilities::GetEncodingName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                                                         { "GetEncodingName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Security::SignerUtilities::InitSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid, bool forSigning,
                                                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                      ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                              { "InitSigner",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(nullptr, ___internal_method, algorithmOid, forSigning, privateKey, random);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Security::SignerUtilities::InitSigner(::StringW algorithm, bool forSigning,
                                                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                      ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SignerUtilities*>(),
                                                           { "InitSigner",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(nullptr, ___internal_method, algorithm, forSigning, privateKey, random);
}
inline ::Org::BouncyCastle::Security::SignerUtilities* Org::BouncyCastle::Security::SignerUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::SignerUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::SignerUtilities::SignerUtilities() {}
