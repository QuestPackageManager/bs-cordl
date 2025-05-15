#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/SM2KeyExchange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2KeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePublicParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
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
namespace Org::BouncyCastle::Crypto::Agreement {
class SM2KeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.SM2KeyExchange
class CORDL_TYPE SM2KeyExchange : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mECParams, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mECParams, put = __cordl_internal_set_mECParams)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* mECParams;

  /// @brief Field mEphemeralKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralKey, put = __cordl_internal_set_mEphemeralKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralKey;

  /// @brief Field mEphemeralPubPoint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mEphemeralPubPoint, put = __cordl_internal_set_mEphemeralPubPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPubPoint;

  /// @brief Field mInitiator, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_mInitiator, put = __cordl_internal_set_mInitiator)) bool mInitiator;

  /// @brief Field mStaticKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticKey, put = __cordl_internal_set_mStaticKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticKey;

  /// @brief Field mStaticPubPoint, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mStaticPubPoint, put = __cordl_internal_set_mStaticPubPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* mStaticPubPoint;

  /// @brief Field mUserID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mUserID, put = __cordl_internal_set_mUserID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mUserID;

  /// @brief Field mW, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_mW, put = __cordl_internal_set_mW)) int32_t mW;

  /// @brief Method AddFieldElement, addr 0x2691084, size 0xd4, virtual false, abstract: false, final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  /// @brief Method AddUserID, addr 0x2691158, size 0x18c, virtual false, abstract: false, final false
  inline void AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method CalculateInnerHash, addr 0x26902c0, size 0x210, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> zb, ::Org::BouncyCastle::Math::EC::ECPoint* p1, ::Org::BouncyCastle::Math::EC::ECPoint* p2);

  /// @brief Method CalculateKey, addr 0x268fb84, size 0x1c4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam);

  /// @brief Method CalculateKeyWithConfirmation, addr 0x268fea8, size 0x418, virtual true, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> confirmationTag,
                                                                                                                                     ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam);

  /// @brief Method CalculateU, addr 0x26907b8, size 0x1cc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* otherPub);

  /// @brief Method GetZ, addr 0x268fd48, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID, ::Org::BouncyCastle::Math::EC::ECPoint* pubPoint);

  /// @brief Method Init, addr 0x268f9b0, size 0x1d4, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* privParam);

  /// @brief Method Kdf, addr 0x2690a38, size 0x64c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Kdf(::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za, ::ArrayW<uint8_t, ::Array<uint8_t>*> zb, int32_t klen);

  static inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Reduce, addr 0x2690984, size 0xb4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Reduce(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method S1, addr 0x26904d0, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> S1(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> inner);

  /// @brief Method S2, addr 0x2690644, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> S2(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> inner);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& __cordl_internal_get_mECParams() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __cordl_internal_get_mECParams();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& __cordl_internal_get_mEphemeralKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mEphemeralKey();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_mEphemeralPubPoint() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mEphemeralPubPoint();

  constexpr bool const& __cordl_internal_get_mInitiator() const;

  constexpr bool& __cordl_internal_get_mInitiator();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& __cordl_internal_get_mStaticKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __cordl_internal_get_mStaticKey();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_mStaticPubPoint() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_mStaticPubPoint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mUserID() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mUserID();

  constexpr int32_t const& __cordl_internal_get_mW() const;

  constexpr int32_t& __cordl_internal_get_mW();

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr void __cordl_internal_set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_mInitiator(bool value);

  constexpr void __cordl_internal_set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr void __cordl_internal_set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_mUserID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mW(int32_t value);

  /// @brief Method .ctor, addr 0x268f924, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x268f988, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchange(SM2KeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchange(SM2KeyExchange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 741 };

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  /// @brief Field mUserID, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mUserID;

  /// @brief Field mStaticKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mStaticKey;

  /// @brief Field mStaticPubPoint, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___mStaticPubPoint;

  /// @brief Field mEphemeralPubPoint, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___mEphemeralPubPoint;

  /// @brief Field mECParams, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ___mECParams;

  /// @brief Field mW, offset: 0x40, size: 0x4, def value: None
  int32_t ___mW;

  /// @brief Field mEphemeralKey, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___mEphemeralKey;

  /// @brief Field mInitiator, offset: 0x50, size: 0x1, def value: None
  bool ___mInitiator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mUserID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mStaticKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mStaticPubPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mEphemeralPubPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mECParams) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mW) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mEphemeralKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mInitiator) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*, "Org.BouncyCastle.Crypto.Agreement", "SM2KeyExchange");
