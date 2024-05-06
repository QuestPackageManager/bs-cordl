#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDerivationParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDerivationParameters);
// Type: Org.BouncyCastle.Crypto::IDerivationParameters
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::IDerivationParameters*
class CORDL_TYPE IDerivationParameters {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IDerivationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDerivationParameters(IDerivationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDerivationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDerivationParameters(IDerivationParameters const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDerivationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDerivationParameters*, "Org.BouncyCastle.Crypto", "IDerivationParameters");
