#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/GlvMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(GlvMultiplier)
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
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
class GlvMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::GlvMultiplier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::GlvMultiplier*
class CORDL_TYPE GlvMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  /// @brief Field curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::Org::BouncyCastle::Math::EC::ECCurve* curve;

  /// @brief Field glvEndomorphism, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_glvEndomorphism, put = __cordl_internal_set_glvEndomorphism))::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism;

  /// @brief Method MultiplyPositive, addr 0x12a9cf4, size 0x26c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                   ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism);

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_curve() const;

  constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*& __cordl_internal_get_glvEndomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*> const& __cordl_internal_get_glvEndomorphism() const;

  constexpr void __cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_glvEndomorphism(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* value);

  /// @brief Method .ctor, addr 0x12a9c4c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlvMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvMultiplier(GlvMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvMultiplier(GlvMultiplier const&) = delete;

  /// @brief Field curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___curve;

  /// @brief Field glvEndomorphism, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* ___glvEndomorphism;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier, ___glvEndomorphism) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "GlvMultiplier");
