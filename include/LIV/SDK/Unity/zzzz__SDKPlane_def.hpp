#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKPlane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKPlane)
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPlane;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPlane);
// Type: LIV.SDK.Unity::SDKPlane
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: ::LIV.SDK.Unity::SDKPlane
struct CORDL_TYPE SDKPlane {
public:
  // Declarations
  /// @brief Method ToString, addr 0x2611af4, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x2611ae0, size 0x14, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPlane get_empty();

  /// @brief Method op_Implicit, addr 0x2611a84, size 0x5c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPlane op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKPlane();

  // Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
  constexpr SDKPlane(float_t distance, ::LIV::SDK::Unity::SDKVector3 normal) noexcept;

  /// @brief Field distance, offset: 0x0, size: 0x4, def value: None
  float_t distance;

  /// @brief Field normal, offset: 0x4, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPlane, 0x10>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPlane, distance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPlane, normal) == 0x4, "Offset mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPlane, "LIV.SDK.Unity", "SDKPlane");
