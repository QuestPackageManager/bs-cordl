#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1165))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsClient*
class CORDL_TYPE AbstractTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer {
public:
  // Declarations
  /// @brief Field mCipherFactory, offset 0x18, size 0x8
  __declspec(property(get = __get_mCipherFactory, put = __set_mCipherFactory))::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __get_mContext, put = __set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsClientContext* mContext;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x28, size 0x8
  __declspec(property(get = __get_mSupportedSignatureAlgorithms, put = __set_mSupportedSignatureAlgorithms))::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Field mNamedCurves, offset 0x30, size 0x8
  __declspec(property(get = __get_mNamedCurves, put = __set_mNamedCurves))::ArrayW<int32_t, ::Array<int32_t>*> mNamedCurves;

  /// @brief Field mClientECPointFormats, offset 0x38, size 0x8
  __declspec(property(get = __get_mClientECPointFormats, put = __set_mClientECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mClientECPointFormats;

  /// @brief Field mServerECPointFormats, offset 0x40, size 0x8
  __declspec(property(get = __get_mServerECPointFormats, put = __set_mServerECPointFormats))::ArrayW<uint8_t, ::Array<uint8_t>*> mServerECPointFormats;

  /// @brief Field mSelectedCipherSuite, offset 0x48, size 0x4
  __declspec(property(get = __get_mSelectedCipherSuite, put = __set_mSelectedCipherSuite)) int32_t mSelectedCipherSuite;

  /// @brief Field mSelectedCompressionMethod, offset 0x4c, size 0x2
  __declspec(property(get = __get_mSelectedCompressionMethod, put = __set_mSelectedCompressionMethod)) int16_t mSelectedCompressionMethod;

  __declspec(property(get = get_ClientHelloRecordLayerVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientHelloRecordLayerVersion;

  __declspec(property(get = get_ClientVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_IsFallback)) bool IsFallback;

  __declspec(property(get = get_MinimumVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* MinimumVersion;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsClient"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsClient*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*& __get_mCipherFactory();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*> const& __get_mCipherFactory() const;

  constexpr void __set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContext*& __get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContext*> const& __get_mContext() const;

  constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* value);

  constexpr ::System::Collections::IList*& __get_mSupportedSignatureAlgorithms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_mSupportedSignatureAlgorithms() const;

  constexpr void __set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mNamedCurves();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mNamedCurves() const;

  constexpr void __set_mNamedCurves(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mClientECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mClientECPointFormats() const;

  constexpr void __set_mClientECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mServerECPointFormats();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mServerECPointFormats() const;

  constexpr void __set_mServerECPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mSelectedCipherSuite();

  constexpr int32_t const& __get_mSelectedCipherSuite() const;

  constexpr void __set_mSelectedCipherSuite(int32_t value);

  constexpr int16_t& __get_mSelectedCompressionMethod();

  constexpr int16_t const& __get_mSelectedCompressionMethod() const;

  constexpr void __set_mSelectedCompressionMethod(int16_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor();

  /// @brief Method .ctor addr 0xf5a4a4 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method .ctor addr 0xf5a518 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory);

  /// @brief Method AllowUnexpectedServerExtension addr 0xf5a540 size 0xb8 virtual true final false
  inline bool AllowUnexpectedServerExtension(int32_t extensionType, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method CheckForUnexpectedServerExtension addr 0xf5a5f8 size 0xd4 virtual true final false
  inline void CheckForUnexpectedServerExtension(::System::Collections::IDictionary* serverExtensions, int32_t extensionType);

  /// @brief Method Init addr 0xf5a6cc size 0x8 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* context);

  /// @brief Method GetSessionToResume addr 0xf5a6d4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume();

  /// @brief Method get_ClientHelloRecordLayerVersion addr 0xf5a6dc size 0x10 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion();

  /// @brief Method get_ClientVersion addr 0xf5a6ec size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method get_IsFallback addr 0xf5a744 size 0x8 virtual true final false
  inline bool get_IsFallback();

  /// @brief Method GetClientExtensions addr 0xf5a74c size 0x25c virtual true final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method get_MinimumVersion addr 0xf5a9a8 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion();

  /// @brief Method NotifyServerVersion addr 0xf5aa00 size 0x7c virtual true final false
  inline void NotifyServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method GetCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetCompressionMethods addr 0xf5aa7c size 0x44 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method NotifySessionID addr 0xf5aac0 size 0x4 virtual true final false
  inline void NotifySessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID);

  /// @brief Method NotifySelectedCipherSuite addr 0xf5aac4 size 0x8 virtual true final false
  inline void NotifySelectedCipherSuite(int32_t selectedCipherSuite);

  /// @brief Method NotifySelectedCompressionMethod addr 0xf5aacc size 0xc virtual true final false
  inline void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod);

  /// @brief Method ProcessServerExtensions addr 0xf5aad8 size 0x114 virtual true final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method ProcessServerSupplementalData addr 0xf5abec size 0x4c virtual true final false
  inline void ProcessServerSupplementalData(::System::Collections::IList* serverSupplementalData);

  /// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetAuthentication addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetClientSupplementalData addr 0xf5ac38 size 0x8 virtual true final false
  inline ::System::Collections::IList* GetClientSupplementalData();

  /// @brief Method GetCompression addr 0xf5ac40 size 0x100 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCipher addr 0xf5ad40 size 0x104 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method NotifyNewSessionTicket addr 0xf5ae44 size 0x4 virtual true final false
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

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsClient");
