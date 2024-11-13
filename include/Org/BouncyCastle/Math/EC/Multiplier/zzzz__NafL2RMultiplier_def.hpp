#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/NafL2RMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::NafL2RMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::NafL2RMultiplier*
class CORDL_TYPE NafL2RMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x2483ea8, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x2483fd8, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "NafL2RMultiplier");
