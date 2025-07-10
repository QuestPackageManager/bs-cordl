#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer, Org.BouncyCastle.Crypto.Tls.TlsClient, Org.BouncyCastle.Crypto.Tls.TlsPeer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsClient
class CORDL_TYPE AbstractTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
  // Declarations
  __declspec(property(get = get_ClientHelloRecordLayerVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientHelloRecordLayerVersion;

  __declspec(property(get = get_ClientVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_IsFallback)) bool IsFallback;

  __declspec(property(get = get_MinimumVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MinimumVersion;

  /// @brief Field mCipherFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCipherFactory, put = __cordl_internal_set_mCipherFactory)) ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;

  /// @brief Field mClientECPointFormats, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientECPointFormats, put = __cordl_internal_set_mClientECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsClientContext* mContext;

  /// @brief Field mNamedCurves, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mNamedCurves, put = __cordl_internal_set_mNamedCurves)) ::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mSelectedCipherSuite, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_mSelectedCipherSuite, put = __cordl_internal_set_mSelectedCipherSuite)) int32_t mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset 0x4c, size 0x2
  __declspec(property(get = __cordl_internal_get_mSelectedCompressionMethod, put = __cordl_internal_set_mSelectedCompressionMethod)) int16_t mSelectedCompressionMethod;

  /// @brief Field mServerECPointFormats, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerECPointFormats, put = __cordl_internal_set_mServerECPointFormats)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mSupportedSignatureAlgorithms, put = __cordl_internal_set_mSupportedSignatureAlgorithms)) ::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsClient"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsClient*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Method AllowUnexpectedServerExtension, addr 0x23e0c18, size 0xc0, virtual true, abstract: false, final false
  inline bool AllowUnexpectedServerExtension(int32_t extensionType, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method CheckForUnexpectedServerExtension, addr 0x23e0cd8, size 0xcc, virtual true, abstract: false, final false
  inline void CheckForUnexpectedServerExtension(::System::Collections::IDictionary* serverExtensions, int32_t extensionType);

  /// @brief Method GetAuthentication, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetCipher, addr 0x23e13f4, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method GetCipherSuites, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetClientExtensions, addr 0x23e0e24, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method GetClientSupplementalData, addr 0x23e1300, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetClientSupplementalData();

  /// @brief Method GetCompression, addr 0x23e1308, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCompressionMethods, addr 0x23e114c, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method GetKeyExchange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetSessionToResume, addr 0x23e0dac, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume();

  /// @brief Method Init, addr 0x23e0da4, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method NotifyNewSessionTicket, addr 0x23e14f8, size 0x4, virtual true, abstract: false, final false
  inline void NotifyNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);

  /// @brief Method NotifySelectedCipherSuite, addr 0x23e1194, size 0x8, virtual true, abstract: false, final false
  inline void NotifySelectedCipherSuite(int32_t selectedCipherSuite);

  /// @brief Method NotifySelectedCompressionMethod, addr 0x23e119c, size 0xc, virtual true, abstract: false, final false
  inline void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod);

  /// @brief Method NotifyServerVersion, addr 0x23e10d8, size 0x74, virtual true, abstract: false, final false
  inline void NotifyServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method NotifySessionID, addr 0x23e1190, size 0x4, virtual true, abstract: false, final false
  inline void NotifySessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID);

  /// @brief Method ProcessServerExtensions, addr 0x23e11a8, size 0x114, virtual true, abstract: false, final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method ProcessServerSupplementalData, addr 0x23e12bc, size 0x44, virtual true, abstract: false, final false
  inline void ProcessServerSupplementalData(::System::Collections::IList* serverSupplementalData);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* const& __cordl_internal_get_mCipherFactory() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*& __cordl_internal_get_mCipherFactory();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mClientECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mClientECPointFormats();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContext* const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContext*& __cordl_internal_get_mContext();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mNamedCurves() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mNamedCurves();

  constexpr int32_t const& __cordl_internal_get_mSelectedCipherSuite() const;

  constexpr int32_t& __cordl_internal_get_mSelectedCipherSuite();

  constexpr int16_t const& __cordl_internal_get_mSelectedCompressionMethod() const;

  constexpr int16_t& __cordl_internal_get_mSelectedCompressionMethod();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mServerECPointFormats() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mServerECPointFormats();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_mSupportedSignatureAlgorithms() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mSupportedSignatureAlgorithms();

  constexpr void __cordl_internal_set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* value);

  constexpr void __cordl_internal_set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* value);

  constexpr void __cordl_internal_set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mSelectedCipherSuite(int32_t value);

  constexpr void __cordl_internal_set_mSelectedCompressionMethod(int16_t value);

  constexpr void __cordl_internal_set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23e0b84, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23e0bf0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method get_ClientHelloRecordLayerVersion, addr 0x23e0db4, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion();

  /// @brief Method get_ClientVersion, addr 0x23e0dc4, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method get_IsFallback, addr 0x23e0e1c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFallback();

  /// @brief Method get_MinimumVersion, addr 0x23e1080, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsClient"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* i___Org__BouncyCastle__Crypto__Tls__TlsClient() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* i___Org__BouncyCastle__Crypto__Tls__TlsPeer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsClient(AbstractTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsClient(AbstractTlsClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1165 };

  /// @brief Field mCipherFactory, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* ___mCipherFactory;

  /// @brief Field mContext, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsClientContext* ___mContext;

  /// @brief Field mSupportedSignatureAlgorithms, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ___mSupportedSignatureAlgorithms;

  /// @brief Field mNamedCurves, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mNamedCurves;

  /// @brief Field mClientECPointFormats, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mServerECPointFormats;

  /// @brief Field mSelectedCipherSuite, offset: 0x48, size: 0x4, def value: None
  int32_t ___mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset: 0x4c, size: 0x2, def value: None
  int16_t ___mSelectedCompressionMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mCipherFactory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSupportedSignatureAlgorithms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mNamedCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mClientECPointFormats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mServerECPointFormats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSelectedCipherSuite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSelectedCompressionMethod) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsClient");
