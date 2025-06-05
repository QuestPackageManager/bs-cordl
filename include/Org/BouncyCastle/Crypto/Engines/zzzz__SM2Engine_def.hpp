#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SM2Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2Engine)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
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
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SM2Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SM2Engine);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SM2Engine
class CORDL_TYPE SM2Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field mCurveLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mCurveLength, put = __cordl_internal_set_mCurveLength)) int32_t mCurveLength;

  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mECKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mECKey, put = __cordl_internal_set_mECKey)) ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* mECKey;

  /// @brief Field mECParams, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mECParams, put = __cordl_internal_set_mECParams)) ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* mECParams;

  /// @brief Field mForEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mForEncryption, put = __cordl_internal_set_mForEncryption)) bool mForEncryption;

  /// @brief Field mRandom, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mRandom, put = __cordl_internal_set_mRandom)) ::Org::BouncyCastle::Security::SecureRandom* mRandom;

  /// @brief Method AddFieldElement, addr 0x2373e90, size 0xd4, virtual false, abstract: false, final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  /// @brief Method CreateBasePointMultiplier, addr 0x2373918, size 0x54, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();

  /// @brief Method Decrypt, addr 0x23734a8, size 0x470, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method Encrypt, addr 0x2373108, size 0x3a0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method Init, addr 0x2372e8c, size 0x26c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method Kdf, addr 0x2373a30, size 0x3f4, virtual false, abstract: false, final false
  inline void Kdf(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* c1, ::ArrayW<uint8_t, ::Array<uint8_t>*> encData);

  static inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method NextK, addr 0x237396c, size 0xc4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextK();

  /// @brief Method NotEncrypted, addr 0x2373e24, size 0x6c, virtual false, abstract: false, final false
  inline bool NotEncrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> encData, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ProcessBlock, addr 0x23730f8, size 0x10, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method Xor, addr 0x2373f64, size 0x64, virtual false, abstract: false, final false
  inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> kdfOut, int32_t dOff, int32_t dRemaining);

  constexpr int32_t const& __cordl_internal_get_mCurveLength() const;

  constexpr int32_t& __cordl_internal_get_mCurveLength();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* const& __cordl_internal_get_mECKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __cordl_internal_get_mECKey();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& __cordl_internal_get_mECParams() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __cordl_internal_get_mECParams();

  constexpr bool const& __cordl_internal_get_mForEncryption() const;

  constexpr bool& __cordl_internal_get_mForEncryption();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mRandom() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mRandom();

  constexpr void __cordl_internal_set_mCurveLength(int32_t value);

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mECKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value);

  constexpr void __cordl_internal_set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr void __cordl_internal_set_mForEncryption(bool value);

  constexpr void __cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x2372e00, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2372e64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2Engine(SM2Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2Engine(SM2Engine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 872 };

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  /// @brief Field mForEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___mForEncryption;

  /// @brief Field mECKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ___mECKey;

  /// @brief Field mECParams, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ___mECParams;

  /// @brief Field mCurveLength, offset: 0x30, size: 0x4, def value: None
  int32_t ___mCurveLength;

  /// @brief Field mRandom, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mForEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mECKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mECParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mCurveLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mRandom) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SM2Engine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SM2Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SM2Engine*, "Org.BouncyCastle.Crypto.Engines", "SM2Engine");
