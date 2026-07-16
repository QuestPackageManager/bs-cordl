#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/GeneratorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneratorUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::GeneratorUtilities::*)()>(&::Org::BouncyCastle::Security::GeneratorUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35f959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.AddDefaultKeySizeEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::StringW>)>(&::Org::BouncyCastle::Security::GeneratorUtilities::AddDefaultKeySizeEntries)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x35fcb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "AddDefaultKeySizeEntries", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.AddKgAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::Org::BouncyCastle::Security::GeneratorUtilities::AddKgAlgorithm)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x35fc330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "AddKgAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.AddKpgAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::Org::BouncyCastle::Security::GeneratorUtilities::AddKpgAlgorithm)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x35fc8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "AddKpgAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.AddHMacKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::Org::BouncyCastle::Security::GeneratorUtilities::AddHMacKeyGenerator)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x35fc564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                             { "AddHMacKeyGenerator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetCanonicalKeyGeneratorAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyGeneratorAlgorithm)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x35fcc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetCanonicalKeyGeneratorAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetCanonicalKeyPairGeneratorAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyPairGeneratorAlgorithm)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x35fcda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetCanonicalKeyPairGeneratorAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::GeneratorUtilities::GetKeyGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35fcedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "GetKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::StringW)>(&::Org::BouncyCastle::Security::GeneratorUtilities::GetKeyGenerator)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x35fcf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetKeyGenerator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetKeyPairGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::GeneratorUtilities::GetKeyPairGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35fd364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "GetKeyPairGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetKeyPairGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* (*)(::StringW)>(
    &::Org::BouncyCastle::Security::GeneratorUtilities::GetKeyPairGenerator)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x35fd3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetKeyPairGenerator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetDefaultKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35fd874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                           { "GetDefaultKeySize", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.GetDefaultKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x35fd8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetDefaultKeySize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::GeneratorUtilities.FindDefaultKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Security::GeneratorUtilities::FindDefaultKeySize)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x35fd1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "FindDefaultKeySize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::GeneratorUtilities::setStaticF_kgAlgorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "kgAlgorithms", ::Org::BouncyCastle::Security::GeneratorUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::GeneratorUtilities::getStaticF_kgAlgorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "kgAlgorithms", ::Org::BouncyCastle::Security::GeneratorUtilities*>();
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::setStaticF_kpgAlgorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "kpgAlgorithms", ::Org::BouncyCastle::Security::GeneratorUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::GeneratorUtilities::getStaticF_kpgAlgorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "kpgAlgorithms", ::Org::BouncyCastle::Security::GeneratorUtilities*>();
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::setStaticF_defaultKeySizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "defaultKeySizes", ::Org::BouncyCastle::Security::GeneratorUtilities*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::GeneratorUtilities::getStaticF_defaultKeySizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "defaultKeySizes", ::Org::BouncyCastle::Security::GeneratorUtilities*>();
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::AddDefaultKeySizeEntries(int32_t size, ::ArrayW<::StringW> algorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "AddDefaultKeySizeEntries", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, size, algorithms);
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::AddKgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*> aliases) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "AddKgAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canonicalName, aliases);
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::AddKpgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*> aliases) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "AddKpgAlgorithm", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, canonicalName, aliases);
}
inline void Org::BouncyCastle::Security::GeneratorUtilities::AddHMacKeyGenerator(::StringW algorithm, ::ArrayW<::System::Object*> aliases) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                           { "AddHMacKeyGenerator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, algorithm, aliases);
}
inline ::StringW Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyGeneratorAlgorithm(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetCanonicalKeyGeneratorAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::GeneratorUtilities::GetCanonicalKeyPairGeneratorAlgorithm(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetCanonicalKeyPairGeneratorAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Security::GeneratorUtilities::GetKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "GetKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Security::GeneratorUtilities::GetKeyGenerator(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetKeyGenerator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* Org::BouncyCastle::Security::GeneratorUtilities::GetKeyPairGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "GetKeyPairGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* Org::BouncyCastle::Security::GeneratorUtilities::GetKeyPairGenerator(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetKeyPairGenerator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(nullptr, ___internal_method, algorithm);
}
inline int32_t Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(),
                                                                                         { "GetDefaultKeySize", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oid);
}
inline int32_t Org::BouncyCastle::Security::GeneratorUtilities::GetDefaultKeySize(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "GetDefaultKeySize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, algorithm);
}
inline int32_t Org::BouncyCastle::Security::GeneratorUtilities::FindDefaultKeySize(::StringW canonicalName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::GeneratorUtilities*>(), { "FindDefaultKeySize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, canonicalName);
}
inline ::Org::BouncyCastle::Security::GeneratorUtilities* Org::BouncyCastle::Security::GeneratorUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::GeneratorUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::GeneratorUtilities::GeneratorUtilities() {}
