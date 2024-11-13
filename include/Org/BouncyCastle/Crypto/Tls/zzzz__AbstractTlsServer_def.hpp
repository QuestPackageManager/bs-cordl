#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsServer)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsServer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsServer*
class CORDL_TYPE AbstractTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
  // Declarations
  __declspec(property(get = get_AllowEncryptThenMac)) bool AllowEncryptThenMac;

  __declspec(property(get = get_AllowTruncatedHMac)) bool AllowTruncatedHMac;

  __declspec(property(get = get_MaximumVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MaximumVersion;

  __declspec(property(get = get_MinimumVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MinimumVersion;

  /// @brief Field mCipherFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCipherFactory, put = __cordl_internal_set_mCipherFactory)) ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;

  /// @brief Field mClientECPointFormats, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientECPointFormats, put = __cordl_internal_set_mClientECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mClientExtensions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientExtensions, put = __cordl_internal_set_mClientExtensions)) ::System::Collections::IDictionary* mClientExtensions;

  /// @brief Field mClientVersion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientVersion, put = __cordl_internal_set_mClientVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mClientVersion;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* mContext;

  /// @brief Field mEccCipherSuitesOffered, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_mEccCipherSuitesOffered, put = __cordl_internal_set_mEccCipherSuitesOffered)) bool mEccCipherSuitesOffered;

  /// @brief Field mEncryptThenMacOffered, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_mEncryptThenMacOffered, put = __cordl_internal_set_mEncryptThenMacOffered)) bool mEncryptThenMacOffered;

  /// @brief Field mMaxFragmentLengthOffered, offset 0x4a, size 0x2
  __declspec(property(get = __cordl_internal_get_mMaxFragmentLengthOffered, put = __cordl_internal_set_mMaxFragmentLengthOffered)) int16_t mMaxFragmentLengthOffered;

  /// @brief Field mNamedCurves, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mNamedCurves, put = __cordl_internal_set_mNamedCurves)) ::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mOfferedCipherSuites, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mOfferedCipherSuites, put = __cordl_internal_set_mOfferedCipherSuites)) ::ArrayW<int32_t, ::Array<int32_t>*> mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mOfferedCompressionMethods, put = __cordl_internal_set_mOfferedCompressionMethods)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mOfferedCompressionMethods;

  /// @brief Field mSelectedCipherSuite, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_mSelectedCipherSuite, put = __cordl_internal_set_mSelectedCipherSuite)) int32_t mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get_mSelectedCompressionMethod, put = __cordl_internal_set_mSelectedCompressionMethod)) uint8_t mSelectedCompressionMethod;

  /// @brief Field mServerECPointFormats, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerECPointFormats, put = __cordl_internal_set_mServerECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mServerExtensions, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerExtensions, put = __cordl_internal_set_mServerExtensions)) ::System::Collections::IDictionary* mServerExtensions;

  /// @brief Field mServerVersion, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerVersion, put = __cordl_internal_set_mServerVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mServerVersion;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mSupportedSignatureAlgorithms, put = __cordl_internal_set_mSupportedSignatureAlgorithms)) ::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Field mTruncatedHMacOffered, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_mTruncatedHMacOffered, put = __cordl_internal_set_mTruncatedHMacOffered)) bool mTruncatedHMacOffered;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsServer*() noexcept;

  /// @brief Method CheckServerExtensions, addr 0x23acb98, size 0x20, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* CheckServerExtensions();

  /// @brief Method GetCertificateRequest, addr 0x23ad604, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* GetCertificateRequest();

  /// @brief Method GetCertificateStatus, addr 0x23ad5fc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* GetCertificateStatus();

  /// @brief Method GetCipher, addr 0x23ad724, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method GetCipherSuites, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCompression, addr 0x23ad68c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCompressionMethods, addr 0x23acbb8, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method GetCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials();

  /// @brief Method GetKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetNewSessionTicket, addr 0x23ad828, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* GetNewSessionTicket();

  /// @brief Method GetSelectedCipherSuite, addr 0x23ad0dc, size 0x1f8, virtual true, abstract: false, final false
  inline int32_t GetSelectedCipherSuite();

  /// @brief Method GetSelectedCompressionMethod, addr 0x23ad2d4, size 0x110, virtual true, abstract: false, final false
  inline uint8_t GetSelectedCompressionMethod();

  /// @brief Method GetServerExtensions, addr 0x23ad3e4, size 0x210, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetServerExtensions();

  /// @brief Method GetServerSupplementalData, addr 0x23ad5f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetServerSupplementalData();

  /// @brief Method GetServerVersion, addr 0x23ad004, size 0xd8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetServerVersion();

  /// @brief Method Init, addr 0x23acda8, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsServerContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method NotifyClientCertificate, addr 0x23ad650, size 0x3c, virtual true, abstract: false, final false
  inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method NotifyClientVersion, addr 0x23acdb0, size 0x8, virtual true, abstract: false, final false
  inline void NotifyClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method NotifyFallback, addr 0x23acdb8, size 0x74, virtual true, abstract: false, final false
  inline void NotifyFallback(bool isFallback);

  /// @brief Method NotifyOfferedCipherSuites, addr 0x23ace2c, size 0x74, virtual true, abstract: false, final false
  inline void NotifyOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> offeredCipherSuites);

  /// @brief Method NotifyOfferedCompressionMethods, addr 0x23acea0, size 0x8, virtual true, abstract: false, final false
  inline void NotifyOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> offeredCompressionMethods);

  /// @brief Method ProcessClientExtensions, addr 0x23acea8, size 0x15c, virtual true, abstract: false, final false
  inline void ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions);

  /// @brief Method ProcessClientSupplementalData, addr 0x23ad60c, size 0x44, virtual true, abstract: false, final false
  inline void ProcessClientSupplementalData(::System::Collections::IList* clientSupplementalData);

  /// @brief Method SupportsClientEccCapabilities, addr 0x23accac, size 0xfc, virtual true, abstract: false, final false
  inline bool SupportsClientEccCapabilities(::ArrayW<int32_t, ::Array<int32_t>*> namedCurves, ::ArrayW<uint8_t, ::Array<uint8_t>*> ecPointFormats);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*& __cordl_internal_get_mCipherFactory();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*> const& __cordl_internal_get_mCipherFactory() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mClientECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mClientECPointFormats();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mClientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mClientExtensions() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mClientVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mClientVersion() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*> const& __cordl_internal_get_mContext() const;

  constexpr bool const& __cordl_internal_get_mEccCipherSuitesOffered() const;

  constexpr bool& __cordl_internal_get_mEccCipherSuitesOffered();

  constexpr bool const& __cordl_internal_get_mEncryptThenMacOffered() const;

  constexpr bool& __cordl_internal_get_mEncryptThenMacOffered();

  constexpr int16_t const& __cordl_internal_get_mMaxFragmentLengthOffered() const;

  constexpr int16_t& __cordl_internal_get_mMaxFragmentLengthOffered();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mNamedCurves() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mOfferedCipherSuites() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mOfferedCipherSuites();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mOfferedCompressionMethods() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mOfferedCompressionMethods();

  constexpr int32_t const& __cordl_internal_get_mSelectedCipherSuite() const;

  constexpr int32_t& __cordl_internal_get_mSelectedCipherSuite();

  constexpr uint8_t const& __cordl_internal_get_mSelectedCompressionMethod() const;

  constexpr uint8_t& __cordl_internal_get_mSelectedCompressionMethod();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mServerECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mServerECPointFormats();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mServerExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mServerExtensions() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mServerVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mServerVersion() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mSupportedSignatureAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mSupportedSignatureAlgorithms() const;

  constexpr bool const& __cordl_internal_get_mTruncatedHMacOffered() const;

  constexpr bool& __cordl_internal_get_mTruncatedHMacOffered();

  constexpr void __cordl_internal_set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* value);

  constexpr void __cordl_internal_set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mClientExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContext* value);

  constexpr void __cordl_internal_set_mEccCipherSuitesOffered(bool value);

  constexpr void __cordl_internal_set_mEncryptThenMacOffered(bool value);

  constexpr void __cordl_internal_set_mMaxFragmentLengthOffered(int16_t value);

  constexpr void __cordl_internal_set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSelectedCipherSuite(int32_t value);

  constexpr void __cordl_internal_set_mSelectedCompressionMethod(uint8_t value);

  constexpr void __cordl_internal_set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mServerExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr void __cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mTruncatedHMacOffered(bool value);

  /// @brief Method .ctor, addr 0x23acafc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23acb60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method get_AllowEncryptThenMac, addr 0x23acb88, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowEncryptThenMac();

  /// @brief Method get_AllowTruncatedHMac, addr 0x23acb90, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowTruncatedHMac();

  /// @brief Method get_MaximumVersion, addr 0x23acbfc, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MaximumVersion();

  /// @brief Method get_MinimumVersion, addr 0x23acc54, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* i___Org__BouncyCastle__Crypto__Tls__TlsPeer() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsServer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer* i___Org__BouncyCastle__Crypto__Tls__TlsServer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsServer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsServer(AbstractTlsServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsServer(AbstractTlsServer const&) = delete;

  /// @brief Field mCipherFactory, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* ___mCipherFactory;

  /// @brief Field mContext, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* ___mContext;

  /// @brief Field mClientVersion, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mClientVersion;

  /// @brief Field mOfferedCipherSuites, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mOfferedCompressionMethods;

  /// @brief Field mClientExtensions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mClientExtensions;

  /// @brief Field mEncryptThenMacOffered, offset: 0x48, size: 0x1, def value: None
  bool ___mEncryptThenMacOffered;

  /// @brief Field mMaxFragmentLengthOffered, offset: 0x4a, size: 0x2, def value: None
  int16_t ___mMaxFragmentLengthOffered;

  /// @brief Field mTruncatedHMacOffered, offset: 0x4c, size: 0x1, def value: None
  bool ___mTruncatedHMacOffered;

  /// @brief Field mSupportedSignatureAlgorithms, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IList* ___mSupportedSignatureAlgorithms;

  /// @brief Field mEccCipherSuitesOffered, offset: 0x58, size: 0x1, def value: None
  bool ___mEccCipherSuitesOffered;

  /// @brief Field mNamedCurves, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mNamedCurves;

  /// @brief Field mClientECPointFormats, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mServerECPointFormats;

  /// @brief Field mServerVersion, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mServerVersion;

  /// @brief Field mSelectedCipherSuite, offset: 0x80, size: 0x4, def value: None
  int32_t ___mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset: 0x84, size: 0x1, def value: None
  uint8_t ___mSelectedCompressionMethod;

  /// @brief Field mServerExtensions, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mServerExtensions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, 0x90>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mCipherFactory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mClientVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mOfferedCipherSuites) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mOfferedCompressionMethods) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mClientExtensions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mEncryptThenMacOffered) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mMaxFragmentLengthOffered) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mTruncatedHMacOffered) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mSupportedSignatureAlgorithms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mEccCipherSuitesOffered) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mNamedCurves) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mClientECPointFormats) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mServerECPointFormats) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mServerVersion) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mSelectedCipherSuite) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mSelectedCompressionMethod) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer, ___mServerExtensions) == 0x88, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsServer");
