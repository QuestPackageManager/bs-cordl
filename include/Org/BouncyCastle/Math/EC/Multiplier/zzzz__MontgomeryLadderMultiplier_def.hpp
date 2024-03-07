#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(MontgomeryLadderMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class MontgomeryLadderMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::MontgomeryLadderMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::MontgomeryLadderMultiplier*
class CORDL_TYPE MontgomeryLadderMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x10cc730, size 0x1fc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x10cc92c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MontgomeryLadderMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MontgomeryLadderMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MontgomeryLadderMultiplier(MontgomeryLadderMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MontgomeryLadderMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MontgomeryLadderMultiplier(MontgomeryLadderMultiplier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "MontgomeryLadderMultiplier");
