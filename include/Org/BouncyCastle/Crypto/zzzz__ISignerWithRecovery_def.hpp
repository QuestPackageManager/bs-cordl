#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ISignerWithRecovery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISignerWithRecovery)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ISignerWithRecovery;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ISignerWithRecovery);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.ISignerWithRecovery
class CORDL_TYPE ISignerWithRecovery {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method GetRecoveredMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRecoveredMessage();

  /// @brief Method HasFullMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasFullMessage();

  /// @brief Method UpdateWithRecoveredMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateWithRecoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISignerWithRecovery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISignerWithRecovery(ISignerWithRecovery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ISignerWithRecovery);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ISignerWithRecovery*, "Org.BouncyCastle.Crypto", "ISignerWithRecovery");
