#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsExtensionsUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsExtensionsUtilities)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatExtension;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ServerNameList;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsExtensionsUtilities;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsExtensionsUtilities");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities
class CORDL_TYPE TlsExtensionsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddClientCertificateTypeExtensionClient, addr 0x3731400, size 0xe0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> certificateTypes);

  /// @brief Method AddClientCertificateTypeExtensionServer, addr 0x3731580, size 0xe0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddEncryptThenMacExtension, addr 0x37316b8, size 0xd8, virtual false, abstract: false, final false
  static inline void AddEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddExtendedMasterSecretExtension, addr 0x37317ec, size 0xd8, virtual false, abstract: false, final false
  static inline void AddExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddHeartbeatExtension, addr 0x3731920, size 0xe0, virtual false, abstract: false, final false
  static inline void AddHeartbeatExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method AddMaxFragmentLengthExtension, addr 0x3731abc, size 0xe0, virtual false, abstract: false, final false
  static inline void AddMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions, uint8_t maxFragmentLength);

  /// @brief Method AddPaddingExtension, addr 0x3731bf4, size 0xe0, virtual false, abstract: false, final false
  static inline void AddPaddingExtension(::System::Collections::IDictionary* extensions, int32_t dataLength);

  /// @brief Method AddServerCertificateTypeExtensionClient, addr 0x3731d50, size 0xe0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> certificateTypes);

  /// @brief Method AddServerCertificateTypeExtensionServer, addr 0x3731e30, size 0xe0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddServerNameExtension, addr 0x3731f10, size 0xdc, virtual false, abstract: false, final false
  static inline void AddServerNameExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method AddStatusRequestExtension, addr 0x37320a8, size 0xe0, virtual false, abstract: false, final false
  static inline void AddStatusRequestExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method AddTruncatedHMacExtension, addr 0x3732244, size 0xd8, virtual false, abstract: false, final false
  static inline void AddTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateCertificateTypeExtensionClient, addr 0x37314e0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateCertificateTypeExtensionClient(::ArrayW<uint8_t> certificateTypes);

  /// @brief Method CreateCertificateTypeExtensionServer, addr 0x3731660, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateCertificateTypeExtensionServer(uint8_t certificateType);

  /// @brief Method CreateEmptyExtensionData, addr 0x3732fb8, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateEmptyExtensionData();

  /// @brief Method CreateEncryptThenMacExtension, addr 0x3731790, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateEncryptThenMacExtension();

  /// @brief Method CreateExtendedMasterSecretExtension, addr 0x37318c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateExtendedMasterSecretExtension();

  /// @brief Method CreateHeartbeatExtension, addr 0x3731a00, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateHeartbeatExtension(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method CreateMaxFragmentLengthExtension, addr 0x3731b9c, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength);

  /// @brief Method CreatePaddingExtension, addr 0x3731cd4, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreatePaddingExtension(int32_t dataLength);

  /// @brief Method CreateServerNameExtension, addr 0x3731fec, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateServerNameExtension(::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method CreateStatusRequestExtension, addr 0x3732188, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateStatusRequestExtension(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method CreateTruncatedHMacExtension, addr 0x373231c, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateTruncatedHMacExtension();

  /// @brief Method EnsureExtensionsInitialised, addr 0x3731394, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* EnsureExtensionsInitialised(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionClient, addr 0x3732378, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionServer, addr 0x3732598, size 0x74, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetHeartbeatExtension, addr 0x3732664, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* GetHeartbeatExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetMaxFragmentLengthExtension, addr 0x37327a0, size 0x74, virtual false, abstract: false, final false
  static inline int16_t GetMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetPaddingExtension, addr 0x373286c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetPaddingExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionClient, addr 0x3732980, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionServer, addr 0x37329f0, size 0x74, virtual false, abstract: false, final false
  static inline int16_t GetServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerNameExtension, addr 0x3732a64, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* GetServerNameExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetStatusRequestExtension, addr 0x3732ba0, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* GetStatusRequestExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasEncryptThenMacExtension, addr 0x3732cdc, size 0x78, virtual false, abstract: false, final false
  static inline bool HasEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasExtendedMasterSecretExtension, addr 0x3732d68, size 0x78, virtual false, abstract: false, final false
  static inline bool HasExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasTruncatedHMacExtension, addr 0x3732df4, size 0x78, virtual false, abstract: false, final false
  static inline bool HasTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities* New_ctor();

  /// @brief Method ReadCertificateTypeExtensionClient, addr 0x37324f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadCertificateTypeExtensionClient(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadCertificateTypeExtensionServer, addr 0x373260c, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ReadCertificateTypeExtensionServer(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadEmptyExtensionData, addr 0x37330a4, size 0x84, virtual false, abstract: false, final false
  static inline bool ReadEmptyExtensionData(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadEncryptThenMacExtension, addr 0x3732d54, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadEncryptThenMacExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadExtendedMasterSecretExtension, addr 0x3732de0, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadExtendedMasterSecretExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadHeartbeatExtension, addr 0x37326d4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* ReadHeartbeatExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadMaxFragmentLengthExtension, addr 0x3732814, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ReadMaxFragmentLengthExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadPaddingExtension, addr 0x37328e0, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t ReadPaddingExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadServerNameExtension, addr 0x3732ad4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* ReadServerNameExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadStatusRequestExtension, addr 0x3732c10, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* ReadStatusRequestExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadTruncatedHMacExtension, addr 0x3732e6c, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadTruncatedHMacExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method .ctor, addr 0x3733374, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsExtensionsUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsExtensionsUtilities(TlsExtensionsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsExtensionsUtilities(TlsExtensionsUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
