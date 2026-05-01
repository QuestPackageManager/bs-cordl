#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/ISP80090Drbg.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISP80090Drbg)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg);
// Dependencies
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.ISP80090Drbg
class CORDL_TYPE ISP80090Drbg {
public:
  // Declarations
  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Method Generate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method Reseed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method get_BlockSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_BlockSize();

  // Ctor Parameters [CppParam { name: "", ty: "ISP80090Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISP80090Drbg(ISP80090Drbg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "ISP80090Drbg");
