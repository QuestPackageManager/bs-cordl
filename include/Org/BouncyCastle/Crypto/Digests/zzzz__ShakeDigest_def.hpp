#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/ShakeDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IXof_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShakeDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class ShakeDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::ShakeDigest);
// Dependencies Org.BouncyCastle.Crypto.Digests.KeccakDigest, Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Crypto.IXof
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.ShakeDigest
class CORDL_TYPE ShakeDigest : public ::Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IXof"
  constexpr operator ::Org::BouncyCastle::Crypto::IXof*() noexcept;

  /// @brief Method CheckBitLength, addr 0x23328f4, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t CheckBitLength(int32_t bitLength);

  /// @brief Method Copy, addr 0x2332d78, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x2332afc, size 0x50, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal, addr 0x2332b4c, size 0x44, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  /// @brief Method DoFinal, addr 0x2332c5c, size 0x11c, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen, uint8_t partialByte, int32_t partialBits);

  /// @brief Method DoFinal, addr 0x2332bf4, size 0x68, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, uint8_t partialByte, int32_t partialBits);

  /// @brief Method DoOutput, addr 0x2332b90, size 0x64, virtual true, abstract: false, final false
  inline int32_t DoOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::ShakeDigest* source);

  /// @brief Method .ctor, addr 0x2332998, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23329a0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitLength);

  /// @brief Method .ctor, addr 0x2332a10, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::ShakeDigest* source);

  /// @brief Method get_AlgorithmName, addr 0x2332a78, size 0x84, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IXof"
  constexpr ::Org::BouncyCastle::Crypto::IXof* i___Org__BouncyCastle__Crypto__IXof() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShakeDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShakeDigest(ShakeDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShakeDigest(ShakeDigest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::ShakeDigest, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::ShakeDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::ShakeDigest*, "Org.BouncyCastle.Crypto.Digests", "ShakeDigest");
