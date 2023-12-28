#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(FixedPointCombMultiplier)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointCombMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointCombMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1529))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::FixedPointCombMultiplier*
class CORDL_TYPE FixedPointCombMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive addr 0x1035e54 size 0x2a8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier* New_ctor();

  /// @brief Method .ctor addr 0x1036268 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointCombMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedPointCombMultiplier(FixedPointCombMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointCombMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedPointCombMultiplier(FixedPointCombMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedPointCombMultiplier();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointCombMultiplier");
