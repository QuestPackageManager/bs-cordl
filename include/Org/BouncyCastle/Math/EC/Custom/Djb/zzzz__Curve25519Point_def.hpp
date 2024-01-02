#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Curve25519Point)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519FieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1376))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519Point*
class CORDL_TYPE Curve25519Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor, addr 0xfcc448, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0xfcc778, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*
  New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
           ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method .ctor, addr 0xfcc890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach, addr 0xfd11e4, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method GetZCoord, addr 0xfd127c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method Add, addr 0xfd1298, size 0x6f8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice, addr 0xfd1990, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus, addr 0xfd1a34, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes, addr 0xfd1b04, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method Negate, addr 0xfd1b84, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  /// @brief Method CalculateJacobianModifiedW, addr 0xfd1c58, size 0x180, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* Z,
                                                                                                        ::ArrayW<uint32_t, ::Array<uint32_t>*> ZSquared);

  /// @brief Method GetJacobianModifiedW, addr 0xfd1dd8, size 0x128, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* GetJacobianModifiedW();

  /// @brief Method TwiceJacobianModified, addr 0xfd1f00, size 0x470, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* TwiceJacobianModified(bool calculateW);

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Curve25519Point(Curve25519Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Curve25519Point(Curve25519Point const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Curve25519Point();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Point");
