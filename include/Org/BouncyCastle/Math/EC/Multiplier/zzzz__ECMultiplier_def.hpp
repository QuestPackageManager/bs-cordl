#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ECMultiplier)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::ECMultiplier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1526))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::ECMultiplier*
class CORDL_TYPE ECMultiplier {
public:
  // Declarations
  /// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  // Ctor Parameters [CppParam { name: "", ty: "ECMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECMultiplier(ECMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECMultiplier(ECMultiplier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "ECMultiplier");
