#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__SocketException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint8)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint8", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint8)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint8", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint16)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3487414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint16)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint16", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint24)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint24", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint24)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint24", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint48)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3493f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint48", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CheckUint64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3493fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint8)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3493c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint8", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint8)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3493c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint8", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint16)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3493ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint16)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3493d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint16", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint24)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3493de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint24", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint24)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3493e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint24", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3493f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint48)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3493fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint48", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidUint64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3494028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsSsl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsSsl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3487be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsSsl", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsTlsV11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV11)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3494030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "IsTlsV11", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsTlsV11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV11)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x34940b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTlsV11", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsTlsV12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV12)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3494190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "IsTlsV12", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsTlsV12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV12)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x348b82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTlsV12", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34901ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint8", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x34880a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint8", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x349019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint16", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3488120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint16", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint24)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3494214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint24", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3490394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint24", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x349427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x34942fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint48)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x349437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint48", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint48)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x349442c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint48", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint64)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x34944e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteUint64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint64)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3487fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteOpaque8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque8)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x349006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteOpaque8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteOpaque16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3489498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteOpaque16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteOpaque24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque24)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x34945c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteOpaque24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8Array)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3494658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint8Array", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8Array)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3494690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint8Array", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8ArrayWithUint8Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8ArrayWithUint8Length)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3494750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint8ArrayWithUint8Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8ArrayWithUint8Length)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34947f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "WriteUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16Array)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3494888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint16Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16Array)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x349493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint16Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16ArrayWithUint16Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16ArrayWithUint16Length)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3492904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "WriteUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteUint16ArrayWithUint16Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16ArrayWithUint16Length)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x34949fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "WriteUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.DecodeUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::DecodeUint8)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3487698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "DecodeUint8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.DecodeUint8ArrayWithUint8Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::DecodeUint8ArrayWithUint8Length)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3487528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "DecodeUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.EncodeOpaque8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeOpaque8)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x349246c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeOpaque8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.EncodeUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint8)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3487320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint8", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.EncodeUint8ArrayWithUint8Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint8ArrayWithUint8Length)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3487280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.EncodeUint16ArrayWithUint16Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint16ArrayWithUint16Length)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3494ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x348f150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint8", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3494a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x348eff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint16", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3494b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint24)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3494ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint24", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint24)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3494c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint32)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3494ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint32", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint32)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3494d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint48)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3494dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint48", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint48)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3494e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint48", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadAllOrNothing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadAllOrNothing)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3494ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadAllOrNothing", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x348ef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadFully", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3494fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadOpaque8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque8)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3484120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque8", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadOpaque16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3489934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque16", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadOpaque24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque24)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3495038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque24", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint8Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8Array)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x348f1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint8Array", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadUint16Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16Array)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x348f078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadUint16Array", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersion)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3495098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadVersion", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x348ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadVersion", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadVersionRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersionRaw)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3495138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "ReadVersionRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadVersionRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersionRaw)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3495178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadVersionRaw", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadAsn1Object)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x34951fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadAsn1Object", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadDerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadDerObject)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x349531c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadDerObject", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteGmtUnixTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteGmtUnixTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x349541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "WriteGmtUnixTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3490014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "WriteVersion", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.WriteVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x34880cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                            { "WriteVersion", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetAllSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetAllSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3495514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetAllSignatureAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetDefaultDssSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultDssSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3495788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultDssSignatureAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetDefaultECDsaSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultECDsaSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x34958f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultECDsaSignatureAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetDefaultRsaSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultRsaSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3495980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultRsaSignatureAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetExtensionData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x34867e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "GetExtensionData", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetDefaultSupportedSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultSupportedSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3495a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultSupportedSignatureAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetSignatureAndHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetSignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3484c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
            { "GetSignatureAndHashAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.HasExpectedEmptyExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::IDictionary*, int32_t, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::HasExpectedEmptyExtensionData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3490214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                         { "HasExpectedEmptyExtensionData", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ImportSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSession* (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Tls::SessionParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ImportSession)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3495c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "ImportSession", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsSignatureAlgorithmsExtensionAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsSignatureAlgorithmsExtensionAllowed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3495c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "IsSignatureAlgorithmsExtensionAllowed", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.AddSignatureAlgorithmsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::AddSignatureAlgorithmsExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3495d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                         { "AddSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetSignatureAlgorithmsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetSignatureAlgorithmsExtension)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3495ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "GetSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CreateSignatureAlgorithmsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateSignatureAlgorithmsExtension)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3495e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "CreateSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ReadSignatureAlgorithmsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadSignatureAlgorithmsExtension)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3495f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.EncodeSupportedSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*, bool, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeSupportedSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x349604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                            { "EncodeSupportedSignatureAlgorithms", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ParseSupportedSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(bool, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ParseSupportedSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3496608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "ParseSupportedSignatureAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.VerifySupportedSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::VerifySupportedSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x348e148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
            { "VerifySupportedSignatureAlgorithm", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.PRF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x34967d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "PRF",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.PRF_legacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF_legacy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3497030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                         { "PRF_legacy", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.PRF_legacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF_legacy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3496aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                            { "PRF_legacy", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::Concat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3496a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "Concat", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.HMacHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::HMacHash)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3496d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "HMacHash",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ValidateKeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ValidateKeyUsage)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3483d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "ValidateKeyUsage", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CalculateKeyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateKeyBlock)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3488954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "CalculateKeyBlock", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CalculateKeyBlock_Ssl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateKeyBlock_Ssl)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x34970cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "CalculateKeyBlock_Ssl", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CalculateMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateMasterSecret)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3497610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "CalculateMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CalculateMasterSecret_Ssl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateMasterSecret_Ssl)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x3497838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "CalculateMasterSecret_Ssl", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CalculateVerifyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateVerifyData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3497d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                            { "CalculateVerifyData", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CreateHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateHash)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3485584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreateHash", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CreateHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateHash)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3484d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "CreateHash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CloneHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(uint8_t, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CloneHash)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x3497ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "CloneHash", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CreatePrfHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreatePrfHash)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3496cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreatePrfHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.ClonePrfHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(int32_t, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::ClonePrfHash)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3498298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "ClonePrfHash", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetHashAlgorithmForPrfAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetHashAlgorithmForPrfAlgorithm)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34981e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetHashAlgorithmForPrfAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetOidForHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetOidForHashAlgorithm)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x348b908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetOidForHashAlgorithm", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetClientCertificateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetClientCertificateType)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x348d8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                         { "GetClientCertificateType", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.TrackHashAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::TrackHashAlgorithms)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x348d0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                         { "TrackHashAlgorithms", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.HasSigningCapability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::HasSigningCapability)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3490518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "HasSigningCapability", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.CreateTlsSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSigner* (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateTlsSigner)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x348e6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreateTlsSigner", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GenSsl3Const
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GenSsl3Const)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3498388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GenSsl3Const", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.VectorOfOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::VectorOfOne)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3495810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "VectorOfOne", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetCipherType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetCipherType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3498480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetCipherType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetEncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3498538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetEncryptionAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetKeyExchangeAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetKeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3498654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetKeyExchangeAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetMacAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetMacAlgorithm)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x349878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetMacAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetMinimumVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetMinimumVersion)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3498848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetMinimumVersion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsAeadCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsAeadCipherSuite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3498960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsAeadCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsBlockCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsBlockCipherSuite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x34989c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsBlockCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsStreamCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsStreamCipherSuite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3498a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsStreamCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidCipherSuiteForSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::Collections::IList*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidCipherSuiteForSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3498a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                             { "IsValidCipherSuiteForSignatureAlgorithms", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsValidCipherSuiteForVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidCipherSuiteForVersion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x349010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                { "IsValidCipherSuiteForVersion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.GetUsableSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetUsableSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x3498d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                           { "GetUsableSignatureAlgorithms", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities.IsTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::SocketException*)>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTimeout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x34992a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTimeout", {}, { ::i2c::type_of<::System::Net::Sockets::SocketException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3499470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_EmptyBytes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_EmptyBytes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_EmptyShorts(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "EmptyShorts", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_EmptyShorts() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "EmptyShorts", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_EmptyInts(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "EmptyInts", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_EmptyInts() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "EmptyInts", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_EmptyLongs(::ArrayW<int64_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int64_t>, "EmptyLongs", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<int64_t>>(value));
}
inline ::ArrayW<int64_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_EmptyLongs() {
  return ::cordl_internals::getStaticField<::ArrayW<int64_t>, "EmptyLongs", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_SSL_CLIENT(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SSL_CLIENT", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_SSL_CLIENT() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SSL_CLIENT", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_SSL_SERVER(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SSL_SERVER", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_SSL_SERVER() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SSL_SERVER", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::setStaticF_SSL3_CONST(::ArrayW<::ArrayW<uint8_t>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<uint8_t>>, "SSL3_CONST", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Crypto::Tls::TlsUtilities::getStaticF_SSL3_CONST() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<uint8_t>>, "SSL3_CONST", ::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint8(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint8", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint8(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint8", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint16(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint16(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint16", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint24(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint24", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint24(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint24", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint32(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint48(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint48", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::CheckUint64(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CheckUint64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint8(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint8", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint8(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint8", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint16(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint16(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint16", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint24(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint24", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint24(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint24", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint32(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint48(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint48", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidUint64(int64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsValidUint64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsSsl", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "IsTlsV11", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, version);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTlsV11", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "IsTlsV12", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, version);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTlsV12", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8(uint8_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint8", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8(uint8_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint8", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16(int32_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint16", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint16", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint24(int32_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint24", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint24(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint24", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint32(int64_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint32(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint48(int64_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint48", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint48(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint48", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint64(int64_t i, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint64(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque8(::ArrayW<uint8_t> buf, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteOpaque8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque16(::ArrayW<uint8_t> buf, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteOpaque16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteOpaque24(::ArrayW<uint8_t> buf, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteOpaque24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8Array(::ArrayW<uint8_t> uints, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteUint8Array", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8Array(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint8Array", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                              { "WriteUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16Array(::ArrayW<int32_t> uints, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint16Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16Array(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint16Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                              { "WriteUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uints, buf, offset);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::DecodeUint8(::ArrayW<uint8_t> buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "DecodeUint8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> buf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "DecodeUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeOpaque8(::ArrayW<uint8_t> buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeOpaque8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint8(uint8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint8", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, val);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint8ArrayWithUint8Length", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, uints);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t> uints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "EncodeUint16ArrayWithUint16Length", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, uints);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint8", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, input);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, buf, offset);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint16", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buf, offset);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint24(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint24", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint24(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buf, offset);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint32(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint32", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, input);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint32(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, buf, offset);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint48(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint48", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, input);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint48(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadUint48", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, buf, offset);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadAllOrNothing(int32_t length, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadAllOrNothing", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, length, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully(int32_t length, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadFully", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, length, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadFully(::ArrayW<uint8_t> buf, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque8(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque8", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque16(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque16", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadOpaque24(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadOpaque24", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint8Array(int32_t count, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadUint8Array", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, count, input);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadUint16Array(int32_t count, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadUint16Array", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, count, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersion(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadVersion", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(nullptr, ___internal_method, buf, offset);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersion(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadVersion", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(nullptr, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersionRaw(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "ReadVersionRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buf, offset);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadVersionRaw(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadVersionRaw", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadAsn1Object(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadAsn1Object", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadDerObject(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadDerObject", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteGmtUnixTime(::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "WriteGmtUnixTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, offset);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "WriteVersion", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, version, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::ArrayW<uint8_t> buf, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                          { "WriteVersion", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, version, buf, offset);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetAllSignatureAlgorithms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetAllSignatureAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultDssSignatureAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultDssSignatureAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultECDsaSignatureAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultECDsaSignatureAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultRsaSignatureAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultRsaSignatureAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "GetExtensionData", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions, extensionType);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetDefaultSupportedSignatureAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetDefaultSupportedSignatureAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*
Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                           ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
          { "GetSignatureAndHashAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(nullptr, ___internal_method, context, signerCredentials);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::HasExpectedEmptyExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                       { "HasExpectedEmptyExtensionData", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensions, extensionType, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ImportSession(::ArrayW<uint8_t> sessionID,
                                                                                                                 ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "ImportSession", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSession*>(nullptr, ___internal_method, sessionID, sessionParameters);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "IsSignatureAlgorithmsExtensionAllowed", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clientVersion);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::AddSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions, ::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                              { "AddSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, supportedSignatureAlgorithms);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "GetSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateSignatureAlgorithmsExtension(::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "CreateSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, supportedSignatureAlgorithms);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "ReadSignatureAlgorithmsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, extensionData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::EncodeSupportedSignatureAlgorithms(::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous,
                                                                                             ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                          { "EncodeSupportedSignatureAlgorithms", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, supportedSignatureAlgorithms, allowAnonymous, output);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "ParseSupportedSignatureAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, allowAnonymous, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::VerifySupportedSignatureAlgorithm(::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                            ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
          { "VerifySupportedSignatureAlgorithm", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, supportedSignatureAlgorithms, signatureAlgorithm);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t> secret, ::StringW asciiLabel,
                                                                           ::ArrayW<uint8_t> seed, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "PRF",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, secret, asciiLabel, seed, size);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF_legacy(::ArrayW<uint8_t> secret, ::StringW asciiLabel, ::ArrayW<uint8_t> seed, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                       { "PRF_legacy", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, secret, asciiLabel, seed, size);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::PRF_legacy(::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> label, ::ArrayW<uint8_t> labelSeed, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                          { "PRF_legacy", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, secret, label, labelSeed, size);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::Concat(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "Concat", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, a, b);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::HMacHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> seed, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "HMacHash",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, digest, secret, seed, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "ValidateKeyUsage", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, keyUsageBits);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "CalculateKeyBlock", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, size);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateKeyBlock_Ssl(::ArrayW<uint8_t> master_secret, ::ArrayW<uint8_t> random, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "CalculateKeyBlock_Ssl", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, master_secret, random, size);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t> pre_master_secret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "CalculateMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, pre_master_secret);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateMasterSecret_Ssl(::ArrayW<uint8_t> pre_master_secret, ::ArrayW<uint8_t> random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "CalculateMasterSecret_Ssl", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, pre_master_secret, random);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsUtilities::CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::StringW asciiLabel,
                                                                                           ::ArrayW<uint8_t> handshakeHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                          { "CalculateVerifyData", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, context, asciiLabel, handshakeHash);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateHash(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreateHash", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "CreateHash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, signatureAndHashAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::TlsUtilities::CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "CloneHash", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, hashAlgorithm, hash);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreatePrfHash(int32_t prfAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreatePrfHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, prfAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::TlsUtilities::ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "ClonePrfHash", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, prfAlgorithm, hash);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetHashAlgorithmForPrfAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, prfAlgorithm);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetOidForHashAlgorithm(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetOidForHashAlgorithm", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, hashAlgorithm);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate,
                                                                                      ::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                          { "GetClientCertificateType", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clientCertificate, serverCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash,
                                                                              ::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                       { "TrackHashAlgorithms", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handshakeHash, supportedSignatureAlgorithms);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::HasSigningCapability(uint8_t clientCertificateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "HasSigningCapability", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clientCertificateType);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* Org::BouncyCastle::Crypto::Tls::TlsUtilities::CreateTlsSigner(uint8_t clientCertificateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "CreateTlsSigner", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSigner*>(nullptr, ___internal_method, clientCertificateType);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Crypto::Tls::TlsUtilities::GenSsl3Const() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GenSsl3Const", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::VectorOfOne(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "VectorOfOne", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetCipherType(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetCipherType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ciphersuite);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetEncryptionAlgorithm(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetEncryptionAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ciphersuite);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetKeyExchangeAlgorithm(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetKeyExchangeAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ciphersuite);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetMacAlgorithm(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetMacAlgorithm", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ciphersuite);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetMinimumVersion(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "GetMinimumVersion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>(nullptr, ___internal_method, ciphersuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsAeadCipherSuite(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsAeadCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ciphersuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsBlockCipherSuite(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsBlockCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ciphersuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsStreamCipherSuite(int32_t ciphersuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsStreamCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ciphersuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList* sigAlgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                           { "IsValidCipherSuiteForSignatureAlgorithms", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite, sigAlgs);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                              { "IsValidCipherSuiteForVersion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite, serverVersion);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::TlsUtilities::GetUsableSignatureAlgorithms(::System::Collections::IList* sigHashAlgs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(),
                                                                                         { "GetUsableSignatureAlgorithms", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, sigHashAlgs);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsUtilities::IsTimeout(::System::Net::Sockets::SocketException* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { "IsTimeout", {}, { ::i2c::type_of<::System::Net::Sockets::SocketException*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsUtilities* Org::BouncyCastle::Crypto::Tls::TlsUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsUtilities::TlsUtilities() {}
