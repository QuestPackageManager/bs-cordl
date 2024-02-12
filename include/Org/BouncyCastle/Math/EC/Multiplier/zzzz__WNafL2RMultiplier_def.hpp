#pragma once
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
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafL2RMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1527))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1540))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WNafL2RMultiplier*
class CORDL_TYPE WNafL2RMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x10645c4, size 0x308, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x1064d78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafL2RMultiplier(WNafL2RMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafL2RMultiplier(WNafL2RMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafL2RMultiplier();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafL2RMultiplier");
