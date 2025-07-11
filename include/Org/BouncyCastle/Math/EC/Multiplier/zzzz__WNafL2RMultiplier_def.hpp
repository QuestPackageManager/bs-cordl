#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WNafL2RMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(WNafL2RMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafL2RMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
class CORDL_TYPE WNafL2RMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x24b98c0, size 0x308, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x24ba06c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafL2RMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafL2RMultiplier(WNafL2RMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafL2RMultiplier(WNafL2RMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafL2RMultiplier");
