#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractFpCurve)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpCurve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractFpCurve);
// Dependencies Org.BouncyCastle.Math.EC.ECCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpCurve
class CORDL_TYPE AbstractFpCurve : public ::Org::BouncyCastle::Math::EC::ECCurve {
public:
  // Declarations
  /// @brief Method DecompressPoint, addr 0x337f2f4, size 0x17c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);

  /// @brief Method ImplRandomFieldElement, addr 0x337f0f0, size 0x58, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r, ::Org::BouncyCastle::Math::BigInteger* p);

  /// @brief Method ImplRandomFieldElementMult, addr 0x337f26c, size 0x88, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r, ::Org::BouncyCastle::Math::BigInteger* p);

  /// @brief Method IsValidFieldElement, addr 0x337eedc, size 0xf0, virtual true, abstract: false, final false
  inline bool IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::AbstractFpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q);

  /// @brief Method RandomFieldElement, addr 0x337efcc, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult, addr 0x337f148, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method .ctor, addr 0x337ee64, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractFpCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractFpCurve(AbstractFpCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractFpCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractFpCurve(AbstractFpCurve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractFpCurve, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpCurve*, "Org.BouncyCastle.Math.EC", "AbstractFpCurve");
