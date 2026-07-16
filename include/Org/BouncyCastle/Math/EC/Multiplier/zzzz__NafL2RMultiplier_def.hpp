#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/NafL2RMultiplier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(NafL2RMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class NafL2RMultiplier;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "NafL2RMultiplier");
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.NafL2RMultiplier
class CORDL_TYPE NafL2RMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x350c6f8, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x350c830, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NafL2RMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NafL2RMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NafL2RMultiplier(NafL2RMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NafL2RMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NafL2RMultiplier(NafL2RMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
