#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MixedNafR2LMultiplier)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class MixedNafR2LMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::MixedNafR2LMultiplier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1534))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::MixedNafR2LMultiplier*
class CORDL_TYPE MixedNafR2LMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Field additionCoord, offset 0x10, size 0x4
  __declspec(property(get = __get_additionCoord, put = __set_additionCoord)) int32_t additionCoord;

  /// @brief Field doublingCoord, offset 0x14, size 0x4
  __declspec(property(get = __get_doublingCoord, put = __set_doublingCoord)) int32_t doublingCoord;

  constexpr int32_t& __get_additionCoord();

  constexpr int32_t const& __get_additionCoord() const;

  constexpr void __set_additionCoord(int32_t value);

  constexpr int32_t& __get_doublingCoord();

  constexpr int32_t const& __get_doublingCoord() const;

  constexpr void __set_doublingCoord(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* New_ctor();

  /// @brief Method .ctor addr 0x1036bec size 0x24 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* New_ctor(int32_t additionCoord, int32_t doublingCoord);

  /// @brief Method .ctor addr 0x1036c10 size 0x2c virtual false final false
  inline void _ctor(int32_t additionCoord, int32_t doublingCoord);

  /// @brief Method MultiplyPositive addr 0x1036c3c size 0x1e8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method ConfigureCurve addr 0x1037098 size 0x134 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* c, int32_t coord);

  // Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MixedNafR2LMultiplier(MixedNafR2LMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MixedNafR2LMultiplier(MixedNafR2LMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MixedNafR2LMultiplier();

public:
  /// @brief Field additionCoord, offset: 0x10, size: 0x4, def value: None
  int32_t ___additionCoord;

  /// @brief Field doublingCoord, offset: 0x14, size: 0x4, def value: None
  int32_t ___doublingCoord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "MixedNafR2LMultiplier");
