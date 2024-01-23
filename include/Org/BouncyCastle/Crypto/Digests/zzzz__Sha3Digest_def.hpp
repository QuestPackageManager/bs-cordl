#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha3Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha3Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha3Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha3Digest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(755))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(770))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha3Digest*
class CORDL_TYPE Sha3Digest : public ::Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method CheckBitLength, addr 0xea4568, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t CheckBitLength(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha3Digest* New_ctor();

  /// @brief Method .ctor, addr 0xea462c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha3Digest* New_ctor(int32_t bitLength);

  /// @brief Method .ctor, addr 0xea4634, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha3Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha3Digest* source);

  /// @brief Method .ctor, addr 0xea46ac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha3Digest* source);

  /// @brief Method get_AlgorithmName, addr 0xea4714, size 0x84, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method DoFinal, addr 0xea4798, size 0x40, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal, addr 0xea47d8, size 0xe4, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, uint8_t partialByte, int32_t partialBits);

  /// @brief Method Copy, addr 0xea48bc, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  // Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha3Digest(Sha3Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha3Digest(Sha3Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha3Digest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha3Digest, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha3Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha3Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha3Digest");
