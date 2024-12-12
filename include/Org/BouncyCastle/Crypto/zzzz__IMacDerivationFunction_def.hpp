#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IMacDerivationFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
CORDL_MODULE_EXPORT(IMacDerivationFunction)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IMacDerivationFunction);
// Dependencies Org.BouncyCastle.Crypto.IDerivationFunction
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IMacDerivationFunction
class CORDL_TYPE IMacDerivationFunction {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GetMac, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* GetMac();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMacDerivationFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMacDerivationFunction(IMacDerivationFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMacDerivationFunction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMacDerivationFunction*, "Org.BouncyCastle.Crypto", "IMacDerivationFunction");
