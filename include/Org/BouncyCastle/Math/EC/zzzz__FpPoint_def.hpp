#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpPoint)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
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

  /// @brief Method .ctor, addr 0x1052c94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x104cf5c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                 ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                 bool withCompression);

  /// @brief Method .ctor, addr 0x104d3e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach, addr 0x1052c9c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method GetZCoord, addr 0x1052d34, size 0x64, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method Add, addr 0x1052d98, size 0xbe0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice, addr 0x1053978, size 0xb08, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus, addr 0x1054480, size 0x474, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes, addr 0x10548f4, size 0x3fc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method TimesPow2, addr 0x1054cf0, size 0x7dc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);

  /// @brief Method Two, addr 0x10554cc, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Two(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Three, addr 0x10554ec, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Three(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Four, addr 0x1055520, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Four(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method Eight, addr 0x1055554, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(::Org::BouncyCastle::Math::EC::ECFieldElement* x);

  /// @brief Method DoubleProductFromSquares, addr 0x1055588, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* aSquared, ::Org::BouncyCastle::Math::EC::ECFieldElement* bSquared);

  /// @brief Method Negate, addr 0x10555fc, size 0x120, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  /// @brief Method CalculateJacobianModifiedW, addr 0x105571c, size 0x154, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::ECFieldElement* Z, ::Org::BouncyCastle::Math::EC::ECFieldElement* ZSquared);

  /// @brief Method GetJacobianModifiedW, addr 0x1055870, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW();

  /// @brief Method TwiceJacobianModified, addr 0x10558fc, size 0x350, virtual true, abstract: false, final false
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
