#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/SM2Signer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2Signer)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class SM2Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::SM2Signer);
// Dependencies Org.BouncyCastle.Crypto.ISigner, System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.SM2Signer
class CORDL_TYPE SM2Signer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field digest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field ecKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ecKey, put = __cordl_internal_set_ecKey)) ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey;

  /// @brief Field ecParams, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ecParams, put = __cordl_internal_set_ecParams)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams;

  /// @brief Field encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;

  /// @brief Field kCalculator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_kCalculator, put = __cordl_internal_set_kCalculator)) ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;

  /// @brief Field pubPoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pubPoint, put = __cordl_internal_set_pubPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* pubPoint;

  /// @brief Field z, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method AddFieldElement, addr 0x23df614, size 0xd4, virtual false, abstract: false, final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  /// @brief Method AddUserID, addr 0x23df488, size 0x18c, virtual false, abstract: false, final false
  inline void AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method BlockUpdate, addr 0x23de9b4, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method CalculateE, addr 0x23df6e8, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method CreateBasePointMultiplier, addr 0x23df748, size 0x54, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();

  /// @brief Method GenerateSignature, addr 0x23def94, size 0x4f4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method GetZ, addr 0x23de798, size 0x170, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ(::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method Init, addr 0x23de168, size 0x630, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Reset, addr 0x23dee60, size 0x134, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x23de908, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method VerifySignature, addr 0x23debfc, size 0x264, virtual false, abstract: false, final false
  inline bool VerifySignature(::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method VerifySignature, addr 0x23dea78, size 0x184, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* const& __cordl_internal_get_ecKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __cordl_internal_get_ecKey();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& __cordl_internal_get_ecParams() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __cordl_internal_get_ecParams();

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* const& __cordl_internal_get_encoding() const;

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& __cordl_internal_get_encoding();

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* const& __cordl_internal_get_kCalculator() const;

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& __cordl_internal_get_kCalculator();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_pubPoint() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_pubPoint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_z() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_ecKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value);

  constexpr void __cordl_internal_set_ecParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr void __cordl_internal_set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value);

  constexpr void __cordl_internal_set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value);

  constexpr void __cordl_internal_set_pubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23ddf44, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23de04c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x23de0bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method .ctor, addr 0x23ddfd4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName, addr 0x23de128, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2Signer(SM2Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2Signer(SM2Signer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1153 };

  /// @brief Field kCalculator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* ___kCalculator;

  /// @brief Field digest, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field encoding, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* ___encoding;

  /// @brief Field ecParams, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ___ecParams;

  /// @brief Field pubPoint, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___pubPoint;

  /// @brief Field ecKey, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ___ecKey;

  /// @brief Field z, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___kCalculator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___digest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___ecParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___pubPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___ecKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___z) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::SM2Signer, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::SM2Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::SM2Signer*, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
