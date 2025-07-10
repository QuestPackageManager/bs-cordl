#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/RsaDigestSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaDigestSigner)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class RsaDigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
// Dependencies Org.BouncyCastle.Crypto.ISigner, System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
class CORDL_TYPE RsaDigestSigner : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field algId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algId, put = __cordl_internal_set_algId)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;

  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_forSigning, put = __cordl_internal_set_forSigning)) bool forSigning;

  /// @brief Field oidMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oidMap, put = setStaticF_oidMap)) ::System::Collections::IDictionary* oidMap;

  /// @brief Field rsaEngine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rsaEngine, put = __cordl_internal_set_rsaEngine)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0x23dd6f0, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method DerEncode, addr 0x23dd9e0, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DerEncode(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method GenerateSignature, addr 0x23dd7b4, size 0x22c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method Init, addr 0x23dd424, size 0x220, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method Reset, addr 0x23ddea0, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x23dd644, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method VerifySignature, addr 0x23dda68, size 0x438, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algId() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algId();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr bool const& __cordl_internal_get_forSigning() const;

  constexpr bool& __cordl_internal_get_forSigning();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& __cordl_internal_get_rsaEngine() const;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_rsaEngine();

  constexpr void __cordl_internal_set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_forSigning(bool value);

  constexpr void __cordl_internal_set_rsaEngine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  /// @brief Method .ctor, addr 0x23dced8, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x23dd12c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method .ctor, addr 0x23dd084, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor, addr 0x23dd1a0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method .ctor, addr 0x23dd224, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor, addr 0x23dd2dc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  static inline ::System::Collections::IDictionary* getStaticF_oidMap();

  /// @brief Method get_AlgorithmName, addr 0x23dd364, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

  static inline void setStaticF_oidMap(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaDigestSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaDigestSigner(RsaDigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaDigestSigner(RsaDigestSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1152 };

  /// @brief Field rsaEngine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___rsaEngine;

  /// @brief Field algId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algId;

  /// @brief Field digest, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field forSigning, offset: 0x28, size: 0x1, def value: None
  bool ___forSigning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, ___rsaEngine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, ___algId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, ___digest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, ___forSigning) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "RsaDigestSigner");
