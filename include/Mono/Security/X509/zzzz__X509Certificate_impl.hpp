#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Certificate.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Certificate::Parse)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x5a93018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "Parse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a89574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.GetUnsignedBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::X509::X509Certificate::GetUnsignedBigInteger)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a93ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "GetUnsignedBigInteger", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_DSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_DSA)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5a8cd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_DSA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_DSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Certificate::set_DSA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a93b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "set_DSA", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Certificate::*)()>(
    &::Mono::Security::X509::X509Certificate::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a93b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Hash)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5a93b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Hash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IssuerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a93db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a93dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_KeyAlgorithmParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a93dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_KeyAlgorithmParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a93e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_PublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_PublicKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a93e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_RSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_RSA)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a93eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_RSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Certificate::set_RSA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a94038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_RawData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a94048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a940bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Signature)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5a94130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_SubjectName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_SubjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_ValidFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_ValidFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a945a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_ValidUntil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_ValidUntil)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a945ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a945b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IsCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IsCurrent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a945bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_IsCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.WasCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::DateTime)>(&::Mono::Security::X509::X509Certificate::WasCurrent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a94620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "WasCurrent", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(
    &::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a946fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(
    &::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a947cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a948f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(),
                                                                                           { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IsSelfSigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IsSelfSigned)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5a94a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_IsSelfSigned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Mono::Security::X509::X509Certificate::GetObjectData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a94b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.PEM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Certificate::PEM)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a93930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "PEM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::X509Certificate::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::X509Certificate::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_decoder(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decoder = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_encodedcert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encodedcert;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_encodedcert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encodedcert;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_encodedcert(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_encodedcert = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_from() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_from;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_from() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_from;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_from(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_from = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_until() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_until;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_until() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_until;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_until(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_until = value;
}
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::X509Certificate::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::X509Certificate::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_issuer(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_issuername() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuername;
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_issuername() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuername;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_issuername(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_issuername = value;
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_keyalgo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keyalgo;
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_keyalgo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keyalgo;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_keyalgo(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_keyalgo = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_keyalgoparams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keyalgoparams;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_keyalgoparams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keyalgoparams;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_keyalgoparams(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_keyalgoparams = value;
}
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::X509Certificate::__cordl_internal_get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::X509Certificate::__cordl_internal_get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_subject(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subject = value;
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_subject(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_subject = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_publickey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_publickey;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_publickey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_publickey;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_publickey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_publickey = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_signature(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_signaturealgo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signaturealgo;
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_signaturealgo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signaturealgo;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_signaturealgo(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_signaturealgo = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_signaturealgoparams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signaturealgoparams;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_m_signaturealgoparams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signaturealgoparams;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_m_signaturealgoparams(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_signaturealgoparams = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_certhash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certhash;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_certhash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certhash;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_certhash(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certhash = value;
}
constexpr ::System::Security::Cryptography::RSA*& Mono::Security::X509::X509Certificate::__cordl_internal_get__rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& Mono::Security::X509::X509Certificate::__cordl_internal_get__rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rsa;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set__rsa(::System::Security::Cryptography::RSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rsa = value;
}
constexpr ::System::Security::Cryptography::DSA*& Mono::Security::X509::X509Certificate::__cordl_internal_get__dsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsa;
}
constexpr ::System::Security::Cryptography::DSA* const& Mono::Security::X509::X509Certificate::__cordl_internal_get__dsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsa;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set__dsa(::System::Security::Cryptography::DSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dsa = value;
}
constexpr int32_t& Mono::Security::X509::X509Certificate::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Mono::Security::X509::X509Certificate::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_serialnumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialnumber;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_serialnumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialnumber;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_serialnumber(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialnumber = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_issuerUniqueID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUniqueID;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_issuerUniqueID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUniqueID;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_issuerUniqueID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerUniqueID = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Certificate::__cordl_internal_get_subjectUniqueID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUniqueID;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Certificate::__cordl_internal_get_subjectUniqueID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUniqueID;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_subjectUniqueID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectUniqueID = value;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::X509Certificate::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* const& Mono::Security::X509::X509Certificate::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Mono::Security::X509::X509Certificate::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline void Mono::Security::X509::X509Certificate::setStaticF_encoding_error(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "encoding_error", ::Mono::Security::X509::X509Certificate*>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509Certificate::getStaticF_encoding_error() {
  return ::cordl_internals::getStaticField<::StringW, "encoding_error", ::Mono::Security::X509::X509Certificate*>();
}
inline void Mono::Security::X509::X509Certificate::Parse(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "Parse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mono::Security::X509::X509Certificate::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::GetUnsignedBigInteger(::ArrayW<uint8_t> integer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "GetUnsignedBigInteger", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, integer);
}
inline ::System::Security::Cryptography::DSA* Mono::Security::X509::X509Certificate::get_DSA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_DSA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_DSA(::System::Security::Cryptography::DSA* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "set_DSA", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Certificate::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_Hash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Hash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_IssuerName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_KeyAlgorithm() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_PublicKey() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::X509::X509Certificate::get_RSA() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_RSA(::System::Security::Cryptography::RSA* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_RawData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_SerialNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::get_Signature() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_SubjectName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Certificate::get_ValidFrom() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Certificate::get_ValidUntil() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int32_t Mono::Security::X509::X509Certificate::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Certificate::get_IsCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_IsCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Certificate::WasCurrent(::System::DateTime instant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "WasCurrent", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instant);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::DSA* dsa) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dsa);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::RSA* rsa) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rsa);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(),
                                                                                         { "VerifySignature", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aa);
}
inline bool Mono::Security::X509::X509Certificate::get_IsSelfSigned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "get_IsSelfSigned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Certificate::PEM(::StringW type, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Certificate*>(), { "PEM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, type, data);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Certificate::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Certificate*>(data));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr Mono::Security::X509::X509Certificate::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* Mono::Security::X509::X509Certificate::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Certificate::X509Certificate() {}
