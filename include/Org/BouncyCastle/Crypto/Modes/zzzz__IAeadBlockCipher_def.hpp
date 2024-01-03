#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAeadBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::IAeadBlockCipher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(959))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::IAeadBlockCipher*
class CORDL_TYPE IAeadBlockCipher {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  /// @brief Method GetBlockSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  // Ctor Parameters [CppParam { name: "", ty: "IAeadBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAeadBlockCipher(IAeadBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAeadBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAeadBlockCipher(IAeadBlockCipher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "IAeadBlockCipher");
