#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/DigestUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DigestUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
struct DigestUtilities_DigestAlgorithm;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct DigestUtilities_DigestAlgorithm;
}
namespace Org::BouncyCastle::Security {
class DigestUtilities;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::DigestUtilities);
// Dependencies
namespace Org::BouncyCastle::Security {
// Is value type: true
// CS Name: Org.BouncyCastle.Security.DigestUtilities/DigestAlgorithm
struct CORDL_TYPE DigestUtilities_DigestAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DigestUtilities_DigestAlgorithm_Unwrapped
  enum struct __DigestUtilities_DigestAlgorithm_Unwrapped : int32_t {
    __E_BLAKE2B_160 = static_cast<int32_t>(0x0),
    __E_BLAKE2B_256 = static_cast<int32_t>(0x1),
    __E_BLAKE2B_384 = static_cast<int32_t>(0x2),
    __E_BLAKE2B_512 = static_cast<int32_t>(0x3),
    __E_BLAKE2S_128 = static_cast<int32_t>(0x4),
    __E_BLAKE2S_160 = static_cast<int32_t>(0x5),
    __E_BLAKE2S_224 = static_cast<int32_t>(0x6),
    __E_BLAKE2S_256 = static_cast<int32_t>(0x7),
    __E_DSTU7564_256 = static_cast<int32_t>(0x8),
    __E_DSTU7564_384 = static_cast<int32_t>(0x9),
    __E_DSTU7564_512 = static_cast<int32_t>(0xa),
    __E_GOST3411 = static_cast<int32_t>(0xb),
    __E_GOST3411_2012_256 = static_cast<int32_t>(0xc),
    __E_GOST3411_2012_512 = static_cast<int32_t>(0xd),
    __E_KECCAK_224 = static_cast<int32_t>(0xe),
    __E_KECCAK_256 = static_cast<int32_t>(0xf),
    __E_KECCAK_288 = static_cast<int32_t>(0x10),
    __E_KECCAK_384 = static_cast<int32_t>(0x11),
    __E_KECCAK_512 = static_cast<int32_t>(0x12),
    __E_MD2 = static_cast<int32_t>(0x13),
    __E_MD4 = static_cast<int32_t>(0x14),
    __E_MD5 = static_cast<int32_t>(0x15),
    __E_NONE = static_cast<int32_t>(0x16),
    __E_RIPEMD128 = static_cast<int32_t>(0x17),
    __E_RIPEMD160 = static_cast<int32_t>(0x18),
    __E_RIPEMD256 = static_cast<int32_t>(0x19),
    __E_RIPEMD320 = static_cast<int32_t>(0x1a),
    __E_SHA_1 = static_cast<int32_t>(0x1b),
    __E_SHA_224 = static_cast<int32_t>(0x1c),
    __E_SHA_256 = static_cast<int32_t>(0x1d),
    __E_SHA_384 = static_cast<int32_t>(0x1e),
    __E_SHA_512 = static_cast<int32_t>(0x1f),
    __E_SHA_512_224 = static_cast<int32_t>(0x20),
    __E_SHA_512_256 = static_cast<int32_t>(0x21),
    __E_SHA3_224 = static_cast<int32_t>(0x22),
    __E_SHA3_256 = static_cast<int32_t>(0x23),
    __E_SHA3_384 = static_cast<int32_t>(0x24),
    __E_SHA3_512 = static_cast<int32_t>(0x25),
    __E_SHAKE128 = static_cast<int32_t>(0x26),
    __E_SHAKE256 = static_cast<int32_t>(0x27),
    __E_SM3 = static_cast<int32_t>(0x28),
    __E_TIGER = static_cast<int32_t>(0x29),
    __E_WHIRLPOOL = static_cast<int32_t>(0x2a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DigestUtilities_DigestAlgorithm_Unwrapped() const noexcept {
    return static_cast<__DigestUtilities_DigestAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestUtilities_DigestAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DigestUtilities_DigestAlgorithm(int32_t value__) noexcept;

  /// @brief Field BLAKE2B_160 value: I32(0)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2B_160;

  /// @brief Field BLAKE2B_256 value: I32(1)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2B_256;

  /// @brief Field BLAKE2B_384 value: I32(2)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2B_384;

  /// @brief Field BLAKE2B_512 value: I32(3)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2B_512;

  /// @brief Field BLAKE2S_128 value: I32(4)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2S_128;

  /// @brief Field BLAKE2S_160 value: I32(5)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2S_160;

  /// @brief Field BLAKE2S_224 value: I32(6)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2S_224;

  /// @brief Field BLAKE2S_256 value: I32(7)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const BLAKE2S_256;

  /// @brief Field DSTU7564_256 value: I32(8)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const DSTU7564_256;

  /// @brief Field DSTU7564_384 value: I32(9)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const DSTU7564_384;

  /// @brief Field DSTU7564_512 value: I32(10)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const DSTU7564_512;

  /// @brief Field GOST3411 value: I32(11)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const GOST3411;

  /// @brief Field GOST3411_2012_256 value: I32(12)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const GOST3411_2012_256;

  /// @brief Field GOST3411_2012_512 value: I32(13)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const GOST3411_2012_512;

  /// @brief Field KECCAK_224 value: I32(14)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const KECCAK_224;

  /// @brief Field KECCAK_256 value: I32(15)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const KECCAK_256;

  /// @brief Field KECCAK_288 value: I32(16)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const KECCAK_288;

  /// @brief Field KECCAK_384 value: I32(17)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const KECCAK_384;

  /// @brief Field KECCAK_512 value: I32(18)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const KECCAK_512;

  /// @brief Field MD2 value: I32(19)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const MD2;

  /// @brief Field MD4 value: I32(20)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const MD4;

  /// @brief Field MD5 value: I32(21)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const MD5;

  /// @brief Field NONE value: I32(22)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const NONE;

  /// @brief Field RIPEMD128 value: I32(23)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const RIPEMD128;

  /// @brief Field RIPEMD160 value: I32(24)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const RIPEMD160;

  /// @brief Field RIPEMD256 value: I32(25)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const RIPEMD256;

  /// @brief Field RIPEMD320 value: I32(26)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const RIPEMD320;

  /// @brief Field SHA3_224 value: I32(34)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA3_224;

  /// @brief Field SHA3_256 value: I32(35)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA3_256;

  /// @brief Field SHA3_384 value: I32(36)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA3_384;

  /// @brief Field SHA3_512 value: I32(37)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA3_512;

  /// @brief Field SHAKE128 value: I32(38)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHAKE128;

  /// @brief Field SHAKE256 value: I32(39)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHAKE256;

  /// @brief Field SHA_1 value: I32(27)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_1;

  /// @brief Field SHA_224 value: I32(28)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_224;

  /// @brief Field SHA_256 value: I32(29)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_256;

  /// @brief Field SHA_384 value: I32(30)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_384;

  /// @brief Field SHA_512 value: I32(31)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_512;

  /// @brief Field SHA_512_224 value: I32(32)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_512_224;

  /// @brief Field SHA_512_256 value: I32(33)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SHA_512_256;

  /// @brief Field SM3 value: I32(40)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const SM3;

  /// @brief Field TIGER value: I32(41)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const TIGER;

  /// @brief Field WHIRLPOOL value: I32(42)
  static ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm const WHIRLPOOL;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.DigestUtilities
class CORDL_TYPE DigestUtilities : public ::System::Object {
public:
  // Declarations
  using DigestAlgorithm = ::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oids, put = setStaticF_oids)) ::System::Collections::IDictionary* oids;

  /// @brief Method CalculateDigest, addr 0x25a53e8, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateDigest(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method CalculateDigest, addr 0x25a5380, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method DoFinal, addr 0x25a54e0, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method DoFinal, addr 0x25a5614, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method GetAlgorithmName, addr 0x25a5278, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetDigest, addr 0x25a47f8, size 0xa80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* GetDigest(::StringW algorithm);

  /// @brief Method GetDigest, addr 0x25a4798, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* GetDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  /// @brief Method GetObjectIdentifier, addr 0x25a4474, size 0x258, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW mechanism);

  static inline ::Org::BouncyCastle::Security::DigestUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x25a0a2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  /// @brief Method get_Algorithms, addr 0x25a46cc, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* get_Algorithms();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestUtilities(DigestUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestUtilities(DigestUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::DigestUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::DigestUtilities_DigestAlgorithm, "Org.BouncyCastle.Security", "DigestUtilities/DigestAlgorithm");
NEED_NO_BOX(::Org::BouncyCastle::Security::DigestUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::DigestUtilities*, "Org.BouncyCastle.Security", "DigestUtilities");
