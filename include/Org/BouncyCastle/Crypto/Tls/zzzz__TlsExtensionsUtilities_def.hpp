#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsExtensionsUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities
class CORDL_TYPE TlsExtensionsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddClientCertificateTypeExtensionClient, addr 0x2430e94, size 0xf0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method AddClientCertificateTypeExtensionServer, addr 0x2431020, size 0xf0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddEncryptThenMacExtension, addr 0x2431164, size 0xe8, virtual false, abstract: false, final false
  static inline void AddEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddExtendedMasterSecretExtension, addr 0x243129c, size 0xe8, virtual false, abstract: false, final false
  static inline void AddExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddHeartbeatExtension, addr 0x24313d4, size 0xf0, virtual false, abstract: false, final false
  static inline void AddHeartbeatExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method AddMaxFragmentLengthExtension, addr 0x243157c, size 0xf0, virtual false, abstract: false, final false
  static inline void AddMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions, uint8_t maxFragmentLength);

  /// @brief Method AddPaddingExtension, addr 0x24316c0, size 0xf0, virtual false, abstract: false, final false
  static inline void AddPaddingExtension(::System::Collections::IDictionary* extensions, int32_t dataLength);

  /// @brief Method AddServerCertificateTypeExtensionClient, addr 0x2431824, size 0xf0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method AddServerCertificateTypeExtensionServer, addr 0x2431914, size 0xf0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddServerNameExtension, addr 0x2431a04, size 0xec, virtual false, abstract: false, final false
  static inline void AddServerNameExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method AddStatusRequestExtension, addr 0x2431ba8, size 0xf0, virtual false, abstract: false, final false
  static inline void AddStatusRequestExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method AddTruncatedHMacExtension, addr 0x2431d50, size 0xe8, virtual false, abstract: false, final false
  static inline void AddTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateCertificateTypeExtensionClient, addr 0x2430f84, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateCertificateTypeExtensionClient(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method CreateCertificateTypeExtensionServer, addr 0x2431110, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateCertificateTypeExtensionServer(uint8_t certificateType);

  /// @brief Method CreateEmptyExtensionData, addr 0x2432a88, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateEmptyExtensionData();

  /// @brief Method CreateEncryptThenMacExtension, addr 0x243124c, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateEncryptThenMacExtension();

  /// @brief Method CreateExtendedMasterSecretExtension, addr 0x2431384, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateExtendedMasterSecretExtension();

  /// @brief Method CreateHeartbeatExtension, addr 0x24314c4, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateHeartbeatExtension(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method CreateMaxFragmentLengthExtension, addr 0x243166c, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength);

  /// @brief Method CreatePaddingExtension, addr 0x24317b0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreatePaddingExtension(int32_t dataLength);

  /// @brief Method CreateServerNameExtension, addr 0x2431af0, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateServerNameExtension(::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method CreateStatusRequestExtension, addr 0x2431c98, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateStatusRequestExtension(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method CreateTruncatedHMacExtension, addr 0x2431e38, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateTruncatedHMacExtension();

  /// @brief Method EnsureExtensionsInitialised, addr 0x2430e2c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* EnsureExtensionsInitialised(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionClient, addr 0x2431e88, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionServer, addr 0x24320a8, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetHeartbeatExtension, addr 0x243216c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* GetHeartbeatExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetMaxFragmentLengthExtension, addr 0x24322a0, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetPaddingExtension, addr 0x2432364, size 0x70, virtual false, abstract: false, final false
  static inline int32_t GetPaddingExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionClient, addr 0x2432484, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionServer, addr 0x24324f0, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerNameExtension, addr 0x2432560, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* GetServerNameExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetStatusRequestExtension, addr 0x2432694, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* GetStatusRequestExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasEncryptThenMacExtension, addr 0x24327c8, size 0x74, virtual false, abstract: false, final false
  static inline bool HasEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasExtendedMasterSecretExtension, addr 0x2432850, size 0x74, virtual false, abstract: false, final false
  static inline bool HasExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasTruncatedHMacExtension, addr 0x24328d8, size 0x74, virtual false, abstract: false, final false
  static inline bool HasTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities* New_ctor();

  /// @brief Method ReadCertificateTypeExtensionClient, addr 0x2432008, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadCertificateTypeExtensionClient(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadCertificateTypeExtensionServer, addr 0x2432118, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t ReadCertificateTypeExtensionServer(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadEmptyExtensionData, addr 0x2432b6c, size 0x84, virtual false, abstract: false, final false
  static inline bool ReadEmptyExtensionData(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadEncryptThenMacExtension, addr 0x243283c, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadEncryptThenMacExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadExtendedMasterSecretExtension, addr 0x24328c4, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadExtendedMasterSecretExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadHeartbeatExtension, addr 0x24321d8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* ReadHeartbeatExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadMaxFragmentLengthExtension, addr 0x2432310, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t ReadMaxFragmentLengthExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadPaddingExtension, addr 0x24323d4, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t ReadPaddingExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadServerNameExtension, addr 0x24325cc, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* ReadServerNameExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadStatusRequestExtension, addr 0x2432700, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* ReadStatusRequestExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadTruncatedHMacExtension, addr 0x243294c, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadTruncatedHMacExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method .ctor, addr 0x2432e2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsExtensionsUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsExtensionsUtilities(TlsExtensionsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsExtensionsUtilities(TlsExtensionsUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsExtensionsUtilities");
