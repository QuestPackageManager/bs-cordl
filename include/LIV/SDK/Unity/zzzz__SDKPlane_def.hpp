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
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPlane;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPlane);
// Dependencies LIV.SDK.Unity.SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKPlane
struct CORDL_TYPE SDKPlane {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac7cac, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac7c98, size 0x14, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPlane get_empty();

  /// @brief Method op_Implicit, addr 0x3ac7c80, size 0x18, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKPlane op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKPlane();

  // Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
  constexpr SDKPlane(float_t distance, ::LIV::SDK::Unity::SDKVector3 normal) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17320 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field distance, offset: 0x0, size: 0x4, def value: None
  float_t distance;

  /// @brief Field normal, offset: 0x4, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 normal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKPlane, distance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKPlane, normal) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPlane, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPlane, "LIV.SDK.Unity", "SDKPlane");
