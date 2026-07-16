#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsExtensionsUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsExtensionsUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatusRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatExtension_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerNameList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.EnsureExtensionsInitialised
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::EnsureExtensionsInitialised)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x348340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "EnsureExtensionsInitialised", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddClientCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddClientCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                { "AddClientCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddClientCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddClientCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x34835f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "AddClientCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddEncryptThenMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddEncryptThenMacExtension)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3483730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "AddEncryptThenMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddExtendedMasterSecretExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddExtendedMasterSecretExtension)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3483864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "AddExtendedMasterSecretExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddHeartbeatExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddHeartbeatExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                            { "AddHeartbeatExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "AddMaxFragmentLengthExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddPaddingExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddPaddingExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "AddPaddingExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddServerCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                { "AddServerCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddServerCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3483ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "AddServerCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddServerNameExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::Org::BouncyCastle::Crypto::Tls::ServerNameList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerNameExtension)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3483f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                            { "AddServerNameExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddStatusRequestExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddStatusRequestExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3484120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
            { "AddStatusRequestExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.AddTruncatedHMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddTruncatedHMacExtension)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x34842bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "AddTruncatedHMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetClientCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetClientCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34843f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "GetClientCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetClientCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetClientCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3484610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "GetClientCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetHeartbeatExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetHeartbeatExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34846dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "GetHeartbeatExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3484818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "GetMaxFragmentLengthExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetPaddingExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetPaddingExtension)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x34848e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "GetPaddingExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetServerCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34849f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "GetServerCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetServerCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3484a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "GetServerCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetServerNameExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ServerNameList* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerNameExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3484adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "GetServerNameExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.GetStatusRequestExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetStatusRequestExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3484c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "GetStatusRequestExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.HasEncryptThenMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasEncryptThenMacExtension)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3484d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "HasEncryptThenMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.HasExtendedMasterSecretExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasExtendedMasterSecretExtension)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3484de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "HasExtendedMasterSecretExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.HasTruncatedHMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasTruncatedHMacExtension)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3484e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "HasTruncatedHMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3483558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "CreateCertificateTypeExtensionClient", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34836d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateCertificateTypeExtensionServer", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateEmptyExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateEmptyExtensionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3485030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateEmptyExtensionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateEncryptThenMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateEncryptThenMacExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3483808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateEncryptThenMacExtension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateExtendedMasterSecretExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateExtendedMasterSecretExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x348393c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateExtendedMasterSecretExtension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateHeartbeatExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateHeartbeatExtension)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3483a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "CreateHeartbeatExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3483c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateMaxFragmentLengthExtension", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreatePaddingExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreatePaddingExtension)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3483d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreatePaddingExtension", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateServerNameExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::ServerNameList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateServerNameExtension)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3484064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "CreateServerNameExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateStatusRequestExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateStatusRequestExtension)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3484200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                             { "CreateStatusRequestExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.CreateTruncatedHMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateTruncatedHMacExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3484394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateTruncatedHMacExtension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadEmptyExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadEmptyExtensionData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x348511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadEmptyExtensionData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadCertificateTypeExtensionClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadCertificateTypeExtensionClient)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x348456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "ReadCertificateTypeExtensionClient", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadCertificateTypeExtensionServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadCertificateTypeExtensionServer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3484684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "ReadCertificateTypeExtensionServer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadEncryptThenMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadEncryptThenMacExtension)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3484dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "ReadEncryptThenMacExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadExtendedMasterSecretExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadExtendedMasterSecretExtension)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3484e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "ReadExtendedMasterSecretExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadHeartbeatExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* (*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadHeartbeatExtension)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x348474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadHeartbeatExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x348488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                           { "ReadMaxFragmentLengthExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadPaddingExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadPaddingExtension)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3484958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadPaddingExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadServerNameExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ServerNameList* (*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadServerNameExtension)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3484b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadServerNameExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadStatusRequestExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* (*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadStatusRequestExtension)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3484c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadStatusRequestExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities.ReadTruncatedHMacExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadTruncatedHMacExtension)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3484ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadTruncatedHMacExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34853ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::EnsureExtensionsInitialised(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "EnsureExtensionsInitialised", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> certificateTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                              { "AddClientCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, certificateTypes);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "AddClientCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, certificateType);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddEncryptThenMacExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "AddEncryptThenMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "AddExtendedMasterSecretExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddHeartbeatExtension(::System::Collections::IDictionary* extensions,
                                                                                          ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                          { "AddHeartbeatExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, heartbeatExtension);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions, uint8_t maxFragmentLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "AddMaxFragmentLengthExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, maxFragmentLength);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddPaddingExtension(::System::Collections::IDictionary* extensions, int32_t dataLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "AddPaddingExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, dataLength);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> certificateTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                              { "AddServerCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, certificateTypes);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "AddServerCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, certificateType);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddServerNameExtension(::System::Collections::IDictionary* extensions,
                                                                                           ::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                          { "AddServerNameExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, serverNameList);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddStatusRequestExtension(::System::Collections::IDictionary* extensions,
                                                                                              ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                       { "AddStatusRequestExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, statusRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::AddTruncatedHMacExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "AddTruncatedHMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "GetClientCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "GetClientCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetHeartbeatExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "GetHeartbeatExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(nullptr, ___internal_method, extensions);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "GetMaxFragmentLengthExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, extensions);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetPaddingExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "GetPaddingExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "GetServerCertificateTypeExtensionClient", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "GetServerCertificateTypeExtensionServer", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetServerNameExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "GetServerNameExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(nullptr, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::GetStatusRequestExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "GetStatusRequestExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(nullptr, ___internal_method, extensions);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasEncryptThenMacExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "HasEncryptThenMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensions);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "HasExtendedMasterSecretExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensions);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::HasTruncatedHMacExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "HasTruncatedHMacExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateCertificateTypeExtensionClient(::ArrayW<uint8_t> certificateTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "CreateCertificateTypeExtensionClient", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, certificateTypes);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateCertificateTypeExtensionServer(uint8_t certificateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateCertificateTypeExtensionServer", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, certificateType);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateEmptyExtensionData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateEmptyExtensionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateEncryptThenMacExtension() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateEncryptThenMacExtension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateExtendedMasterSecretExtension() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateExtendedMasterSecretExtension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateHeartbeatExtension(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "CreateHeartbeatExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, heartbeatExtension);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateMaxFragmentLengthExtension", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, maxFragmentLength);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreatePaddingExtension(int32_t dataLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreatePaddingExtension", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dataLength);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateServerNameExtension(::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "CreateServerNameExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, serverNameList);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateStatusRequestExtension(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                           { "CreateStatusRequestExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, statusRequest);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::CreateTruncatedHMacExtension() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "CreateTruncatedHMacExtension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadEmptyExtensionData(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadEmptyExtensionData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionData);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadCertificateTypeExtensionClient(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "ReadCertificateTypeExtensionClient", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensionData);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadCertificateTypeExtensionServer(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "ReadCertificateTypeExtensionServer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, extensionData);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadEncryptThenMacExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadEncryptThenMacExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionData);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadExtendedMasterSecretExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "ReadExtendedMasterSecretExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionData);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadHeartbeatExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadHeartbeatExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(nullptr, ___internal_method, extensionData);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadMaxFragmentLengthExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(),
                                                                                         { "ReadMaxFragmentLengthExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, extensionData);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadPaddingExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadPaddingExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, extensionData);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadServerNameExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadServerNameExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ServerNameList*>(nullptr, ___internal_method, extensionData);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadStatusRequestExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadStatusRequestExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*>(nullptr, ___internal_method, extensionData);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::ReadTruncatedHMacExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { "ReadTruncatedHMacExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extensionData);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities* Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities::TlsExtensionsUtilities() {}
