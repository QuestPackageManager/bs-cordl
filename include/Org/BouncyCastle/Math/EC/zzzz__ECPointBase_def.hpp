#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECPointBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPointBase)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPointBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECPointBase);
// Type: Org.BouncyCastle.Math.EC::ECPointBase
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::ECPointBase*
class CORDL_TYPE ECPointBase : public ::Org::BouncyCastle::Math::EC::ECPoint {
public:
  // Declarations
  /// @brief Method GetEncoded, addr 0x241fc38, size 0x1bc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(bool compressed);

  /// @brief Method Multiply, addr 0x241fdf4, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::ECPointBase* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::ECPointBase* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                     ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                     bool withCompression);

  /// @brief Method .ctor, addr 0x241fb18, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x241fb9c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPointBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPointBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPointBase(ECPointBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPointBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPointBase(ECPointBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECPointBase, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPointBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPointBase*, "Org.BouncyCastle.Math.EC", "ECPointBase");
