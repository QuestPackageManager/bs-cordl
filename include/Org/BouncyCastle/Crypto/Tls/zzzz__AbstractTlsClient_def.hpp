#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
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
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsClient
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1163))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1165))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsClient*
class CORDL_TYPE AbstractTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
  // Declarations
  /// @brief Field mCipherFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCipherFactory, put = __cordl_internal_set_mCipherFactory))::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsClientContext* mContext;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mSupportedSignatureAlgorithms, put = __cordl_internal_set_mSupportedSignatureAlgorithms))::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Field mNamedCurves, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mNamedCurves, put = __cordl_internal_set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mClientECPointFormats, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientECPointFormats, put = __cordl_internal_set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerECPointFormats, put = __cordl_internal_set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mSelectedCipherSuite, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_mSelectedCipherSuite, put = __cordl_internal_set_mSelectedCipherSuite)) int32_t mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset 0x4c, size 0x2
  __declspec(property(get = __cordl_internal_get_mSelectedCompressionMethod, put = __cordl_internal_set_mSelectedCompressionMethod)) int16_t mSelectedCompressionMethod;

  __declspec(property(get = get_ClientHelloRecordLayerVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientHelloRecordLayerVersion;

  __declspec(property(get = get_ClientVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_IsFallback)) bool IsFallback;

  __declspec(property(get = get_MinimumVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MinimumVersion;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsClient"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsClient*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsClient"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* i___Org__BouncyCastle__Crypto__Tls__TlsClient() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* i___Org__BouncyCastle__Crypto__Tls__TlsPeer() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*& __cordl_internal_get_mCipherFactory();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*> const& __cordl_internal_get_mCipherFactory() const;

  constexpr void __cordl_internal_set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContext*> const& __cordl_internal_get_mContext() const;

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* value);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mSupportedSignatureAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mSupportedSignatureAlgorithms() const;

  constexpr void __cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mNamedCurves() const;

  constexpr void __cordl_internal_set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mClientECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mClientECPointFormats() const;

  constexpr void __cordl_internal_set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mServerECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mServerECPointFormats() const;

  constexpr void __cordl_internal_set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_mSelectedCipherSuite();

  constexpr int32_t const& __cordl_internal_get_mSelectedCipherSuite() const;

  constexpr void __cordl_internal_set_mSelectedCipherSuite(int32_t value);

  constexpr int16_t& __cordl_internal_get_mSelectedCompressionMethod();

  constexpr int16_t const& __cordl_internal_get_mSelectedCompressionMethod() const;

  constexpr void __cordl_internal_set_mSelectedCompressionMethod(int16_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor();

  /// @brief Method .ctor, addr 0xf84334, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method .ctor, addr 0xf843a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method AllowUnexpectedServerExtension, addr 0xf843d0, size 0xb8, virtual true, abstract: false, final false
  inline bool AllowUnexpectedServerExtension(int32_t extensionType, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method CheckForUnexpectedServerExtension, addr 0xf84488, size 0xd4, virtual true, abstract: false, final false
  inline void CheckForUnexpectedServerExtension(::System::Collections::IDictionary* serverExtensions, int32_t extensionType);

  /// @brief Method Init, addr 0xf8455c, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* context);

  /// @brief Method GetSessionToResume, addr 0xf84564, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume();

  /// @brief Method get_ClientHelloRecordLayerVersion, addr 0xf8456c, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion();

  /// @brief Method get_ClientVersion, addr 0xf8457c, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method get_IsFallback, addr 0xf845d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFallback();

  /// @brief Method GetClientExtensions, addr 0xf845dc, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method get_MinimumVersion, addr 0xf84838, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();

  /// @brief Method NotifyServerVersion, addr 0xf84890, size 0x7c, virtual true, abstract: false, final false
  inline void NotifyServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method GetCipherSuites, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCompressionMethods, addr 0xf8490c, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method NotifySessionID, addr 0xf84950, size 0x4, virtual true, abstract: false, final false
  inline void NotifySessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID);

  /// @brief Method NotifySelectedCipherSuite, addr 0xf84954, size 0x8, virtual true, abstract: false, final false
  inline void NotifySelectedCipherSuite(int32_t selectedCipherSuite);

  /// @brief Method NotifySelectedCompressionMethod, addr 0xf8495c, size 0xc, virtual true, abstract: false, final false
  inline void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod);

  /// @brief Method ProcessServerExtensions, addr 0xf84968, size 0x114, virtual true, abstract: false, final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method ProcessServerSupplementalData, addr 0xf84a7c, size 0x4c, virtual true, abstract: false, final false
  inline void ProcessServerSupplementalData(::System::Collections::IList* serverSupplementalData);

  /// @brief Method GetKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetAuthentication, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetClientSupplementalData, addr 0xf84ac8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetClientSupplementalData();

  /// @brief Method GetCompression, addr 0xf84ad0, size 0x100, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCipher, addr 0xf84bd0, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method NotifyNewSessionTicket, addr 0xf84cd4, size 0x4, virtual true, abstract: false, final false
  inline void NotifyNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsClient(AbstractTlsClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsClient(AbstractTlsClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsClient();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mCipherFactory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSupportedSignatureAlgorithms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mNamedCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mClientECPointFormats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mServerECPointFormats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSelectedCipherSuite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient, ___mSelectedCompressionMethod) == 0x4c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsClient");
