#pragma once
// IWYU pragma private; include "Mono/Security/Authenticode/AuthenticodeDeformatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticodeDeformatter)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
class X509Chain;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security {
class PKCS7_SignedData;
}
namespace Mono::Security {
class PKCS7_SignerInfo;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class AuthenticodeDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Authenticode::AuthenticodeDeformatter);
// Dependencies Mono.Security.Authenticode.AuthenticodeBase, System.DateTime
namespace Mono::Security::Authenticode {
// Is value type: false
// CS Name: Mono.Security.Authenticode.AuthenticodeDeformatter
class CORDL_TYPE AuthenticodeDeformatter : public ::Mono::Security::Authenticode::AuthenticodeBase {
public:
  // Declarations
  __declspec(property(put = set_RawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_SigningCertificate)) ::Mono::Security::X509::X509Certificate* SigningCertificate;

  /// @brief Field coll, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_coll, put = __cordl_internal_set_coll)) ::Mono::Security::X509::X509CertificateCollection* coll;

  /// @brief Field entry, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_entry, put = __cordl_internal_set_entry)) ::ArrayW<uint8_t, ::Array<uint8_t>*> entry;

  /// @brief Field filename, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_filename, put = __cordl_internal_set_filename)) ::StringW filename;

  /// @brief Field hash, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> hash;

  /// @brief Field rawdata, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rawdata, put = __cordl_internal_set_rawdata)) ::ArrayW<uint8_t, ::Array<uint8_t>*> rawdata;

  /// @brief Field reason, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_reason, put = __cordl_internal_set_reason)) int32_t reason;

  /// @brief Field signedHash, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_signedHash, put = __cordl_internal_set_signedHash)) ::Mono::Security::ASN1* signedHash;

  /// @brief Field signerChain, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_signerChain, put = __cordl_internal_set_signerChain)) ::Mono::Security::X509::X509Chain* signerChain;

  /// @brief Field signingCertificate, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_signingCertificate, put = __cordl_internal_set_signingCertificate)) ::Mono::Security::X509::X509Certificate* signingCertificate;

  /// @brief Field timestamp, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_timestamp, put = __cordl_internal_set_timestamp)) ::System::DateTime timestamp;

  /// @brief Field timestampChain, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_timestampChain, put = __cordl_internal_set_timestampChain)) ::Mono::Security::X509::X509Chain* timestampChain;

  /// @brief Field trustedRoot, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_trustedRoot, put = __cordl_internal_set_trustedRoot)) bool trustedRoot;

  /// @brief Field trustedTimestampRoot, offset 0x7d, size 0x1
  __declspec(property(get = __cordl_internal_get_trustedTimestampRoot, put = __cordl_internal_set_trustedTimestampRoot)) bool trustedTimestampRoot;

  /// @brief Method CheckSignature, addr 0x3c4e168, size 0x2f4, virtual false, abstract: false, final false
  inline bool CheckSignature();

  /// @brief Method CompareIssuerSerial, addr 0x3c4ee98, size 0xfc, virtual false, abstract: false, final false
  inline bool CompareIssuerSerial(::StringW issuer, ::ArrayW<uint8_t, ::Array<uint8_t>*> serial, ::Mono::Security::X509::X509Certificate* x509);

  static inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* New_ctor();

  static inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method Reset, addr 0x3c4e0c4, size 0xa4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method VerifyCounterSignature, addr 0x3c4ef94, size 0x9ec, virtual false, abstract: false, final false
  inline bool VerifyCounterSignature(::Mono::Security::PKCS7_SignerInfo* cs, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method VerifySignature, addr 0x3c4e464, size 0xa34, virtual false, abstract: false, final false
  inline bool VerifySignature(::Mono::Security::PKCS7_SignedData* sd, ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedMessageDigest, ::System::Security::Cryptography::HashAlgorithm* ha);

  constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get_coll() const;

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_coll();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_entry() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_entry();

  constexpr ::StringW const& __cordl_internal_get_filename() const;

  constexpr ::StringW& __cordl_internal_get_filename();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_hash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_hash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_rawdata() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_rawdata();

  constexpr int32_t const& __cordl_internal_get_reason() const;

  constexpr int32_t& __cordl_internal_get_reason();

  constexpr ::Mono::Security::ASN1* const& __cordl_internal_get_signedHash() const;

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_signedHash();

  constexpr ::Mono::Security::X509::X509Chain* const& __cordl_internal_get_signerChain() const;

  constexpr ::Mono::Security::X509::X509Chain*& __cordl_internal_get_signerChain();

  constexpr ::Mono::Security::X509::X509Certificate* const& __cordl_internal_get_signingCertificate() const;

  constexpr ::Mono::Security::X509::X509Certificate*& __cordl_internal_get_signingCertificate();

  constexpr ::System::DateTime const& __cordl_internal_get_timestamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_timestamp();

  constexpr ::Mono::Security::X509::X509Chain* const& __cordl_internal_get_timestampChain() const;

  constexpr ::Mono::Security::X509::X509Chain*& __cordl_internal_get_timestampChain();

  constexpr bool const& __cordl_internal_get_trustedRoot() const;

  constexpr bool& __cordl_internal_get_trustedRoot();

  constexpr bool const& __cordl_internal_get_trustedTimestampRoot() const;

  constexpr bool& __cordl_internal_get_trustedTimestampRoot();

  constexpr void __cordl_internal_set_coll(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_entry(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_filename(::StringW value);

  constexpr void __cordl_internal_set_hash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_rawdata(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_reason(int32_t value);

  constexpr void __cordl_internal_set_signedHash(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set_signerChain(::Mono::Security::X509::X509Chain* value);

  constexpr void __cordl_internal_set_signingCertificate(::Mono::Security::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_timestamp(::System::DateTime value);

  constexpr void __cordl_internal_set_timestampChain(::Mono::Security::X509::X509Chain* value);

  constexpr void __cordl_internal_set_trustedRoot(bool value);

  constexpr void __cordl_internal_set_trustedTimestampRoot(bool value);

  /// @brief Method .ctor, addr 0x3c4df4c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c4dfcc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method get_SigningCertificate, addr 0x3c4e45c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* get_SigningCertificate();

  /// @brief Method set_RawData, addr 0x3c4dff4, size 0xd0, virtual false, abstract: false, final false
  inline void set_RawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticodeDeformatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticodeDeformatter(AuthenticodeDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticodeDeformatter(AuthenticodeDeformatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15982 };

  /// @brief Field filename, offset: 0x40, size: 0x8, def value: None
  ::StringW ___filename;

  /// @brief Field rawdata, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___rawdata;

  /// @brief Field hash, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___hash;

  /// @brief Field coll, offset: 0x58, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ___coll;

  /// @brief Field signedHash, offset: 0x60, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___signedHash;

  /// @brief Field timestamp, offset: 0x68, size: 0x8, def value: None
  ::System::DateTime ___timestamp;

  /// @brief Field signingCertificate, offset: 0x70, size: 0x8, def value: None
  ::Mono::Security::X509::X509Certificate* ___signingCertificate;

  /// @brief Field reason, offset: 0x78, size: 0x4, def value: None
  int32_t ___reason;

  /// @brief Field trustedRoot, offset: 0x7c, size: 0x1, def value: None
  bool ___trustedRoot;

  /// @brief Field trustedTimestampRoot, offset: 0x7d, size: 0x1, def value: None
  bool ___trustedTimestampRoot;

  /// @brief Field entry, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___entry;

  /// @brief Field signerChain, offset: 0x88, size: 0x8, def value: None
  ::Mono::Security::X509::X509Chain* ___signerChain;

  /// @brief Field timestampChain, offset: 0x90, size: 0x8, def value: None
  ::Mono::Security::X509::X509Chain* ___timestampChain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___filename) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___rawdata) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___hash) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___coll) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___signedHash) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___timestamp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___signingCertificate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___reason) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___trustedRoot) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___trustedTimestampRoot) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___entry) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___signerChain) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeDeformatter, ___timestampChain) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Authenticode::AuthenticodeDeformatter, 0x98>, "Size mismatch!");

} // namespace Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::AuthenticodeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::AuthenticodeDeformatter*, "Mono.Security.Authenticode", "AuthenticodeDeformatter");
