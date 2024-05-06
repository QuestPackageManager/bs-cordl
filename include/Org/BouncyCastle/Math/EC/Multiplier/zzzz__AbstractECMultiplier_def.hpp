#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AbstractECMultiplier)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class AbstractECMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::AbstractECMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::AbstractECMultiplier*
class CORDL_TYPE AbstractECMultiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*() noexcept;

  /// @brief Method CheckResult, addr 0x1296490, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CheckResult(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method Multiply, addr 0x12963b4, size 0xdc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MultiplyPositive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x129649c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* i___Org__BouncyCastle__Math__EC__Multiplier__ECMultiplier() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractECMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractECMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractECMultiplier(AbstractECMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractECMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractECMultiplier(AbstractECMultiplier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "AbstractECMultiplier");
