#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2KeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePublicParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class SM2KeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange);
// Type: Org.BouncyCastle.Crypto.Agreement::SM2KeyExchange
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(741))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::SM2KeyExchange*
class CORDL_TYPE SM2KeyExchange : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mUserID, offset 0x18, size 0x8
  __declspec(property(get = __get_mUserID, put = __set_mUserID))::ArrayW<uint8_t, ::Array<uint8_t>*> mUserID;

  /// @brief Field mStaticKey, offset 0x20, size 0x8
  __declspec(property(get = __get_mStaticKey, put = __set_mStaticKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticKey;

  /// @brief Field mStaticPubPoint, offset 0x28, size 0x8
  __declspec(property(get = __get_mStaticPubPoint, put = __set_mStaticPubPoint))::Org::BouncyCastle::Math::EC::ECPoint* mStaticPubPoint;

  /// @brief Field mEphemeralPubPoint, offset 0x30, size 0x8
  __declspec(property(get = __get_mEphemeralPubPoint, put = __set_mEphemeralPubPoint))::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPubPoint;

  /// @brief Field mECParams, offset 0x38, size 0x8
  __declspec(property(get = __get_mECParams, put = __set_mECParams))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* mECParams;

  /// @brief Field mW, offset 0x40, size 0x4
  __declspec(property(get = __get_mW, put = __set_mW)) int32_t mW;

  /// @brief Field mEphemeralKey, offset 0x48, size 0x8
  __declspec(property(get = __get_mEphemeralKey, put = __set_mEphemeralKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralKey;

  /// @brief Field mInitiator, offset 0x50, size 0x1
  __declspec(property(get = __get_mInitiator, put = __set_mInitiator)) bool mInitiator;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mUserID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mUserID() const;

  constexpr void __set_mUserID(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_mStaticKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_mStaticKey() const;

  constexpr void __set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_mStaticPubPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_mStaticPubPoint() const;

  constexpr void __set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_mEphemeralPubPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_mEphemeralPubPoint() const;

  constexpr void __set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __get_mECParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& __get_mECParams() const;

  constexpr void __set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr int32_t& __get_mW();

  constexpr int32_t const& __get_mW() const;

  constexpr void __set_mW(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_mEphemeralKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_mEphemeralKey() const;

  constexpr void __set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  constexpr bool& __get_mInitiator();

  constexpr bool const& __get_mInitiator() const;

  constexpr void __set_mInitiator(bool value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* New_ctor();

  /// @brief Method .ctor addr 0x11aa540 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0x11aa5ac size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init addr 0x11aa5d4 size 0x1d4 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* privParam);

  /// @brief Method CalculateKey addr 0x11aa7a8 size 0x1c4 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam);

  /// @brief Method CalculateKeyWithConfirmation addr 0x11aaacc size 0x4b0 virtual true final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> confirmationTag,
                                                                                                                                     ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam);

  /// @brief Method CalculateU addr 0x11ab474 size 0x1cc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* otherPub);

  /// @brief Method Kdf addr 0x11ab6f4 size 0x650 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Kdf(::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za, ::ArrayW<uint8_t, ::Array<uint8_t>*> zb, int32_t klen);

  /// @brief Method Reduce addr 0x11ab640 size 0xb4 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* Reduce(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method S1 addr 0x11ab18c size 0x174 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> S1(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> inner);

  /// @brief Method CalculateInnerHash addr 0x11aaf7c size 0x210 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> zb, ::Org::BouncyCastle::Math::EC::ECPoint* p1, ::Org::BouncyCastle::Math::EC::ECPoint* p2);

  /// @brief Method S2 addr 0x11ab300 size 0x174 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> S2(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> inner);

  /// @brief Method GetZ addr 0x11aa96c size 0x160 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID, ::Org::BouncyCastle::Math::EC::ECPoint* pubPoint);

  /// @brief Method AddUserID addr 0x11abe18 size 0x188 virtual false final false
  inline void AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method AddFieldElement addr 0x11abd44 size 0xd4 virtual false final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2KeyExchange(SM2KeyExchange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2KeyExchange(SM2KeyExchange const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2KeyExchange();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mUserID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mStaticKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mStaticPubPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mEphemeralPubPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mECParams) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mW) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mEphemeralKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, ___mInitiator) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*, "Org.BouncyCastle.Crypto.Agreement", "SM2KeyExchange");
