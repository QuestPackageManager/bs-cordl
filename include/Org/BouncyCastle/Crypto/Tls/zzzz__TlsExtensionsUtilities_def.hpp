#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsExtensionsUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsExtensionsUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsExtensionsUtilities*
class CORDL_TYPE TlsExtensionsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddClientCertificateTypeExtensionClient, addr 0x1212084, size 0xf0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method AddClientCertificateTypeExtensionServer, addr 0x1212218, size 0xf0, virtual false, abstract: false, final false
  static inline void AddClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddEncryptThenMacExtension, addr 0x121235c, size 0xe8, virtual false, abstract: false, final false
  static inline void AddEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddExtendedMasterSecretExtension, addr 0x1212494, size 0xe8, virtual false, abstract: false, final false
  static inline void AddExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method AddHeartbeatExtension, addr 0x12125cc, size 0xf0, virtual false, abstract: false, final false
  static inline void AddHeartbeatExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method AddMaxFragmentLengthExtension, addr 0x121277c, size 0xf0, virtual false, abstract: false, final false
  static inline void AddMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions, uint8_t maxFragmentLength);

  /// @brief Method AddPaddingExtension, addr 0x12128c0, size 0xf0, virtual false, abstract: false, final false
  static inline void AddPaddingExtension(::System::Collections::IDictionary* extensions, int32_t dataLength);

  /// @brief Method AddServerCertificateTypeExtensionClient, addr 0x1212a24, size 0xf0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method AddServerCertificateTypeExtensionServer, addr 0x1212b14, size 0xf0, virtual false, abstract: false, final false
  static inline void AddServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions, uint8_t certificateType);

  /// @brief Method AddServerNameExtension, addr 0x1212c04, size 0xec, virtual false, abstract: false, final false
  static inline void AddServerNameExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method AddStatusRequestExtension, addr 0x1212db0, size 0xf0, virtual false, abstract: false, final false
  static inline void AddStatusRequestExtension(::System::Collections::IDictionary* extensions, ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method AddTruncatedHMacExtension, addr 0x1212f60, size 0xe8, virtual false, abstract: false, final false
  static inline void AddTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateCertificateTypeExtensionClient, addr 0x1212174, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateCertificateTypeExtensionClient(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateTypes);

  /// @brief Method CreateCertificateTypeExtensionServer, addr 0x1212308, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateCertificateTypeExtensionServer(uint8_t certificateType);

  /// @brief Method CreateEmptyExtensionData, addr 0x1213cac, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateEmptyExtensionData();

  /// @brief Method CreateEncryptThenMacExtension, addr 0x1212444, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateEncryptThenMacExtension();

  /// @brief Method CreateExtendedMasterSecretExtension, addr 0x121257c, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateExtendedMasterSecretExtension();

  /// @brief Method CreateHeartbeatExtension, addr 0x12126bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateHeartbeatExtension(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);

  /// @brief Method CreateMaxFragmentLengthExtension, addr 0x121286c, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength);

  /// @brief Method CreatePaddingExtension, addr 0x12129b0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreatePaddingExtension(int32_t dataLength);

  /// @brief Method CreateServerNameExtension, addr 0x1212cf0, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateServerNameExtension(::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);

  /// @brief Method CreateStatusRequestExtension, addr 0x1212ea0, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateStatusRequestExtension(::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);

  /// @brief Method CreateTruncatedHMacExtension, addr 0x1213048, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateTruncatedHMacExtension();

  /// @brief Method EnsureExtensionsInitialised, addr 0x121201c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* EnsureExtensionsInitialised(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionClient, addr 0x1213098, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetClientCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetClientCertificateTypeExtensionServer, addr 0x12132c0, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetHeartbeatExtension, addr 0x1213384, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* GetHeartbeatExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetMaxFragmentLengthExtension, addr 0x12134c4, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetMaxFragmentLengthExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetPaddingExtension, addr 0x1213588, size 0x70, virtual false, abstract: false, final false
  static inline int32_t GetPaddingExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionClient, addr 0x12136b4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetServerCertificateTypeExtensionClient(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerCertificateTypeExtensionServer, addr 0x1213720, size 0x70, virtual false, abstract: false, final false
  static inline int16_t GetServerCertificateTypeExtensionServer(::System::Collections::IDictionary* extensions);

  /// @brief Method GetServerNameExtension, addr 0x1213790, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* GetServerNameExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetStatusRequestExtension, addr 0x12138d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* GetStatusRequestExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasEncryptThenMacExtension, addr 0x1213a10, size 0x68, virtual false, abstract: false, final false
  static inline bool HasEncryptThenMacExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasExtendedMasterSecretExtension, addr 0x1213a8c, size 0x68, virtual false, abstract: false, final false
  static inline bool HasExtendedMasterSecretExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method HasTruncatedHMacExtension, addr 0x1213b08, size 0x68, virtual false, abstract: false, final false
  static inline bool HasTruncatedHMacExtension(::System::Collections::IDictionary* extensions);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities* New_ctor();

  /// @brief Method ReadCertificateTypeExtensionClient, addr 0x1213218, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadCertificateTypeExtensionClient(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadCertificateTypeExtensionServer, addr 0x1213330, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t ReadCertificateTypeExtensionServer(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadEmptyExtensionData, addr 0x1213d98, size 0x90, virtual false, abstract: false, final false
  static inline bool ReadEmptyExtensionData(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadEncryptThenMacExtension, addr 0x1213a78, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadEncryptThenMacExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadExtendedMasterSecretExtension, addr 0x1213af4, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadExtendedMasterSecretExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadHeartbeatExtension, addr 0x12133f0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* ReadHeartbeatExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadMaxFragmentLengthExtension, addr 0x1213534, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t ReadMaxFragmentLengthExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadPaddingExtension, addr 0x12135f8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t ReadPaddingExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadServerNameExtension, addr 0x12137fc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* ReadServerNameExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadStatusRequestExtension, addr 0x121393c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* ReadStatusRequestExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadTruncatedHMacExtension, addr 0x1213b70, size 0x14, virtual false, abstract: false, final false
  static inline bool ReadTruncatedHMacExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method .ctor, addr 0x1214078, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsExtensionsUtilities");
