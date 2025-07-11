#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsKeyExchange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsKeyExchange)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsKeyExchange, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange
class CORDL_TYPE AbstractTlsKeyExchange : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequiresServerKeyExchange)) bool RequiresServerKeyExchange;

  /// @brief Field mContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mKeyExchange, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mKeyExchange, put = __cordl_internal_set_mKeyExchange)) int32_t mKeyExchange;

  /// @brief Field mSupportedSignatureAlgorithms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSupportedSignatureAlgorithms, put = __cordl_internal_set_mSupportedSignatureAlgorithms)) ::System::Collections::IList* mSupportedSignatureAlgorithms;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*() noexcept;

  /// @brief Method GenerateClientKeyExchange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GenerateClientKeyExchange(::System::IO::Stream* output);

  /// @brief Method GeneratePremasterSecret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GeneratePremasterSecret();

  /// @brief Method GenerateServerKeyExchange, addr 0x23e2078, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateServerKeyExchange();

  /// @brief Method Init, addr 0x23e1da8, size 0x20c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange* New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ParseSignature, addr 0x23e1c3c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* ParseSignature(::System::IO::Stream* input);

  /// @brief Method ProcessClientCertificate, addr 0x23e2188, size 0x4, virtual true, abstract: false, final false
  inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate);

  /// @brief Method ProcessClientCredentials, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials);

  /// @brief Method ProcessClientKeyExchange, addr 0x23e218c, size 0x3c, virtual true, abstract: false, final false
  inline void ProcessClientKeyExchange(::System::IO::Stream* input);

  /// @brief Method ProcessServerCertificate, addr 0x23e1fb4, size 0x4, virtual true, abstract: false, final false
  inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method ProcessServerCredentials, addr 0x23e1fb8, size 0xb8, virtual true, abstract: false, final false
  inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials);

  /// @brief Method ProcessServerKeyExchange, addr 0x23e212c, size 0x58, virtual true, abstract: false, final false
  inline void ProcessServerKeyExchange(::System::IO::Stream* input);

  /// @brief Method SkipClientCredentials, addr 0x23e2184, size 0x4, virtual true, abstract: false, final false
  inline void SkipClientCredentials();

  /// @brief Method SkipServerCredentials, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SkipServerCredentials();

  /// @brief Method SkipServerKeyExchange, addr 0x23e20d4, size 0x58, virtual true, abstract: false, final false
  inline void SkipServerKeyExchange();

  /// @brief Method ValidateCertificateRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr int32_t const& __cordl_internal_get_mKeyExchange() const;

  constexpr int32_t& __cordl_internal_get_mKeyExchange();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_mSupportedSignatureAlgorithms() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mSupportedSignatureAlgorithms();

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mKeyExchange(int32_t value);

  constexpr void __cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23e1c0c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method get_RequiresServerKeyExchange, addr 0x23e2070, size 0x8, virtual true, abstract: false, final false
  inline bool get_RequiresServerKeyExchange();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* i___Org__BouncyCastle__Crypto__Tls__TlsKeyExchange() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsKeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsKeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsKeyExchange(AbstractTlsKeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsKeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsKeyExchange(AbstractTlsKeyExchange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1171 };

  /// @brief Field mKeyExchange, offset: 0x10, size: 0x4, def value: None
  int32_t ___mKeyExchange;

  /// @brief Field mSupportedSignatureAlgorithms, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___mSupportedSignatureAlgorithms;

  /// @brief Field mContext, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange, ___mKeyExchange) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange, ___mSupportedSignatureAlgorithms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange, ___mContext) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsKeyExchange");
