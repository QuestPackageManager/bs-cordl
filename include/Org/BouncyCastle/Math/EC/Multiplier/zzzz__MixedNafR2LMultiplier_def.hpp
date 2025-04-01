#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/MixedNafR2LMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MixedNafR2LMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class MixedNafR2LMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.MixedNafR2LMultiplier
class CORDL_TYPE MixedNafR2LMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Field additionCoord, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_additionCoord, put = __cordl_internal_set_additionCoord)) int32_t additionCoord;

  /// @brief Field doublingCoord, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_doublingCoord, put = __cordl_internal_set_doublingCoord)) int32_t doublingCoord;

  /// @brief Method ConfigureCurve, addr 0x24b5740, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* c, int32_t coord);

  /// @brief Method MultiplyPositive, addr 0x24b52e8, size 0x1e8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* New_ctor();

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* New_ctor(int32_t additionCoord, int32_t doublingCoord);

  constexpr int32_t const& __cordl_internal_get_additionCoord() const;

  constexpr int32_t& __cordl_internal_get_additionCoord();

  constexpr int32_t const& __cordl_internal_get_doublingCoord() const;

  constexpr int32_t& __cordl_internal_get_doublingCoord();

  constexpr void __cordl_internal_set_additionCoord(int32_t value);

  constexpr void __cordl_internal_set_doublingCoord(int32_t value);

  /// @brief Method .ctor, addr 0x24b5298, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x24b52bc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t additionCoord, int32_t doublingCoord);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MixedNafR2LMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MixedNafR2LMultiplier(MixedNafR2LMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MixedNafR2LMultiplier(MixedNafR2LMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1534 };

  /// @brief Field additionCoord, offset: 0x10, size: 0x4, def value: None
  int32_t ___additionCoord;

  /// @brief Field doublingCoord, offset: 0x14, size: 0x4, def value: None
  int32_t ___doublingCoord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier, ___additionCoord) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier, ___doublingCoord) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "MixedNafR2LMultiplier");
