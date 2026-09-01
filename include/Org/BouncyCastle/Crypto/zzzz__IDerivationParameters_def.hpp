#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IDerivationParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDerivationParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::IDerivationParameters*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::IDerivationParameters*, "Org.BouncyCastle.Crypto", "IDerivationParameters");
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IDerivationParameters
class CORDL_TYPE IDerivationParameters {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IDerivationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDerivationParameters(IDerivationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
