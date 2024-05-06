#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012_512Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012Digest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411_2012_512Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012_512Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411_2012_512Digest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Gost3411_2012_512Digest*
class CORDL_TYPE Gost3411_2012_512Digest : public ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field IV, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IV, put = setStaticF_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Method Copy, addr 0x1489ae4, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method GetDigestSize, addr 0x1489adc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other);

  /// @brief Method .ctor, addr 0x14899ac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1489a38, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IV();

  /// @brief Method get_AlgorithmName, addr 0x148996c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  static inline void setStaticF_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411_2012_512Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_512Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411_2012_512Digest(Gost3411_2012_512Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012_512Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411_2012_512Digest(Gost3411_2012_512Digest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_512Digest");
