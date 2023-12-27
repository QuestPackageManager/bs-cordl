#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ECEndomorphism)
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism);
// Type: Org.BouncyCastle.Math.EC.Endo::ECEndomorphism
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1515))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::ECEndomorphism*
class CORDL_TYPE ECEndomorphism {
public:
  // Declarations
  __declspec(property(get = get_PointMap))::Org::BouncyCastle::Math::EC::ECPointMap* PointMap;

  __declspec(property(get = get_HasEfficientPointMap)) bool HasEfficientPointMap;

  /// @brief Method get_PointMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();

  /// @brief Method get_HasEfficientPointMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_HasEfficientPointMap();

  // Ctor Parameters [CppParam { name: "", ty: "ECEndomorphism", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECEndomorphism(ECEndomorphism&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECEndomorphism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECEndomorphism(ECEndomorphism const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism");
