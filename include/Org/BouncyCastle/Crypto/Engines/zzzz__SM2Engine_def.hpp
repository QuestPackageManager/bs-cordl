#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2Engine)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SM2Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SM2Engine);
// Type: Org.BouncyCastle.Crypto.Engines::SM2Engine
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(872))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SM2Engine*
class CORDL_TYPE SM2Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mForEncryption, offset 0x18, size 0x1
  __declspec(property(get = __get_mForEncryption, put = __set_mForEncryption)) bool mForEncryption;

  /// @brief Field mECKey, offset 0x20, size 0x8
  __declspec(property(get = __get_mECKey, put = __set_mECKey))::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* mECKey;

  /// @brief Field mECParams, offset 0x28, size 0x8
  __declspec(property(get = __get_mECParams, put = __set_mECParams))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* mECParams;

  /// @brief Field mCurveLength, offset 0x30, size 0x4
  __declspec(property(get = __get_mCurveLength, put = __set_mCurveLength)) int32_t mCurveLength;

  /// @brief Field mRandom, offset 0x38, size 0x8
  __declspec(property(get = __get_mRandom, put = __set_mRandom))::Org::BouncyCastle::Security::SecureRandom* mRandom;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr bool& __get_mForEncryption();

  constexpr bool const& __get_mForEncryption() const;

  constexpr void __set_mForEncryption(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __get_mECKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& __get_mECKey() const;

  constexpr void __set_mECKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __get_mECParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& __get_mECParams() const;

  constexpr void __set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr int32_t& __get_mCurveLength();

  constexpr int32_t const& __get_mCurveLength() const;

  constexpr void __set_mCurveLength(int32_t value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mRandom() const;

  constexpr void __set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* New_ctor();

  /// @brief Method .ctor, addr 0xee835c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xee83c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init, addr 0xee83f0, size 0x29c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method ProcessBlock, addr 0xee868c, size 0x10, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method CreateBasePointMultiplier, addr 0xee8f0c, size 0x5c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();

  /// @brief Method Encrypt, addr 0xee869c, size 0x3f8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method Decrypt, addr 0xee8a94, size 0x478, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method NotEncrypted, addr 0xee9430, size 0x68, virtual false, abstract: false, final false
  inline bool NotEncrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> encData, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Kdf, addr 0xee9038, size 0x3f8, virtual false, abstract: false, final false
  inline void Kdf(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* c1, ::ArrayW<uint8_t, ::Array<uint8_t>*> encData);

  /// @brief Method Xor, addr 0xee956c, size 0x64, virtual false, abstract: false, final false
  inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> kdfOut, int32_t dOff, int32_t dRemaining);

  /// @brief Method NextK, addr 0xee8f68, size 0xd0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextK();

  /// @brief Method AddFieldElement, addr 0xee9498, size 0xd4, virtual false, abstract: false, final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  // Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2Engine(SM2Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2Engine(SM2Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2Engine();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SM2Engine, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mForEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mECKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mECParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mCurveLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM2Engine, ___mRandom) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SM2Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SM2Engine*, "Org.BouncyCastle.Crypto.Engines", "SM2Engine");
