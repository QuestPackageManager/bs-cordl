#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpPoint)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::FpPoint);
// Type: Org.BouncyCastle.Math.EC::FpPoint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1571))
// CS Name: ::Org.BouncyCastle.Math.EC::FpPoint*
class CORDL_TYPE FpPoint : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor addr 0xfe1a48 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor addr 0xfdbd10 size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                 ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                 bool withCompression);

  /// @brief Method .ctor addr 0xfdc198 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach addr 0xfe1a50 size 0x98 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method GetZCoord addr 0xfe1ae8 size 0x64 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method Add addr 0xfe1b4c size 0xbe0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice addr 0xfe272c size 0xb08 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus addr 0xfe3234 size 0x474 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes addr 0xfe36a8 size 0x3fc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method TimesPow2 addr 0xfe3aa4 size 0x7dc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);

  /// @brief Method Two addr 0xfe4280 size 0x20 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Two(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Three addr 0xfe42a0 size 0x34 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Three(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Four addr 0xfe42d4 size 0x34 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Four(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Eight addr 0xfe4308 size 0x34 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method DoubleProductFromSquares addr 0xfe433c size 0x74 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* aSquared, ::Org::BouncyCastle::Math::EC::ECFieldElement* bSquared);

  /// @brief Method Negate addr 0xfe43b0 size 0x120 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  /// @brief Method CalculateJacobianModifiedW addr 0xfe44d0 size 0x154 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::ECFieldElement* Z, ::Org::BouncyCastle::Math::EC::ECFieldElement* ZSquared);

  /// @brief Method GetJacobianModifiedW addr 0xfe4624 size 0x8c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW();

  /// @brief Method TwiceJacobianModified addr 0xfe46b0 size 0x350 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(bool calculateW);

  // Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpPoint(FpPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpPoint(FpPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpPoint();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpPoint, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpPoint*, "Org.BouncyCastle.Math.EC", "FpPoint");
