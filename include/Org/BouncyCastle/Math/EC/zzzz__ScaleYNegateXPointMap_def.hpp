#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ScaleYNegateXPointMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScaleYNegateXPointMap)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ScaleYNegateXPointMap;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap);
// Type: Org.BouncyCastle.Math.EC::ScaleYNegateXPointMap
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::ScaleYNegateXPointMap*
class CORDL_TYPE ScaleYNegateXPointMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field scale, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::Org::BouncyCastle::Math::EC::ECFieldElement* scale;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::ECPointMap"
  constexpr operator ::Org::BouncyCastle::Math::EC::ECPointMap*() noexcept;

  /// @brief Method Map, addr 0x24a7460, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Map(::Org::BouncyCastle::Math::EC::ECPoint* p);

  static inline ::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap* New_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_scale();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __cordl_internal_get_scale() const;

  constexpr void __cordl_internal_set_scale(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  /// @brief Method .ctor, addr 0x24a7438, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::ECPointMap"
  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* i___Org__BouncyCastle__Math__EC__ECPointMap() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleYNegateXPointMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleYNegateXPointMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleYNegateXPointMap(ScaleYNegateXPointMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleYNegateXPointMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleYNegateXPointMap(ScaleYNegateXPointMap const&) = delete;

  /// @brief Field scale, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___scale;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap, ___scale) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ScaleYNegateXPointMap*, "Org.BouncyCastle.Math.EC", "ScaleYNegateXPointMap");
