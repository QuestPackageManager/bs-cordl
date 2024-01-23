#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(ZSignedDigitR2LMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ZSignedDigitR2LMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::ZSignedDigitR2LMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1527))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1551))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::ZSignedDigitR2LMultiplier*
class CORDL_TYPE ZSignedDigitR2LMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Method MultiplyPositive, addr 0x103aef0, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x103b020, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitR2LMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZSignedDigitR2LMultiplier(ZSignedDigitR2LMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitR2LMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZSignedDigitR2LMultiplier(ZSignedDigitR2LMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZSignedDigitR2LMultiplier();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "ZSignedDigitR2LMultiplier");
