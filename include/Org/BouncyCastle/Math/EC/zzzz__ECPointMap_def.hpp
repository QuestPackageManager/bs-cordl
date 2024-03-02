#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ECPointMap)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECPointMap);
// Type: Org.BouncyCastle.Math.EC::ECPointMap
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::ECPointMap*
class CORDL_TYPE ECPointMap {
public:
  // Declarations
  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Map(::Org::BouncyCastle::Math::EC::ECPoint* p);

  // Ctor Parameters [CppParam { name: "", ty: "ECPointMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPointMap(ECPointMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPointMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPointMap(ECPointMap const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPointMap);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPointMap*, "Org.BouncyCastle.Math.EC", "ECPointMap");
