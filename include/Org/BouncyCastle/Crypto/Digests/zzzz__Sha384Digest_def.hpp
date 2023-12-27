#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__LongDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha384Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha384Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha384Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha384Digest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(769))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha384Digest*
class CORDL_TYPE Sha384Digest : public ::Org::BouncyCastle::Crypto::Digests::LongDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha384Digest* New_ctor();

  /// @brief Method .ctor addr 0xea4278 size 0x58 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha384Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha384Digest* t);

  /// @brief Method .ctor addr 0xea42d0 size 0x68 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha384Digest* t);

  /// @brief Method get_AlgorithmName addr 0xea4338 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0xea4378 size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method DoFinal addr 0xea4380 size 0xb8 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xea4438 size 0x48 virtual true final false
  inline void Reset();

  /// @brief Method Copy addr 0xea4480 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0xea44e0 size 0x88 virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "Sha384Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha384Digest(Sha384Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha384Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha384Digest(Sha384Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha384Digest();

public:
  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x30) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha384Digest, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha384Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha384Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha384Digest");
