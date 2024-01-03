#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecP224R1Point)
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
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224R1Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP224R1Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1419))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP224R1Point*
class CORDL_TYPE SecP224R1Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor, addr 0xfed7c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0xfedaf0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*
  New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
           ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method .ctor, addr 0xfedc10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach, addr 0xff08bc, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method Add, addr 0xff0954, size 0x690, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice, addr 0xff0fe4, size 0x4b8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus, addr 0xff149c, size 0xcc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes, addr 0xff1568, size 0x70, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method Negate, addr 0xff15d8, size 0x10d8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP224R1Point(SecP224R1Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP224R1Point(SecP224R1Point const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP224R1Point();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1Point");
