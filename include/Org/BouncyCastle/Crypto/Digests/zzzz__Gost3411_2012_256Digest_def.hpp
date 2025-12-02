#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012_256Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012Digest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411_2012_256Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012_256Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest);
// Dependencies Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
class CORDL_TYPE Gost3411_2012_256Digest : public ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field IV, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IV, put = setStaticF_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Method Copy, addr 0x35c8738, size 0x5c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x35c86a4, size 0x94, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetDigestSize, addr 0x35c869c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* other);

  /// @brief Method .ctor, addr 0x35c855c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35c85f0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* other);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IV();

  /// @brief Method get_AlgorithmName, addr 0x35c8518, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  static inline void setStaticF_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411_2012_256Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_256Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411_2012_256Digest(Gost3411_2012_256Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_256Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411_2012_256Digest(Gost3411_2012_256Digest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest");
