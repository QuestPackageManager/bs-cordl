#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProjectionAxis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectionAxis)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ProjectionAxis);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ProjectionAxis
struct CORDL_TYPE ProjectionAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProjectionAxis_Unwrapped
  enum struct __ProjectionAxis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
    __E_XNegative = static_cast<int32_t>(0x3),
    __E_YNegative = static_cast<int32_t>(0x4),
    __E_ZNegative = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProjectionAxis_Unwrapped() const noexcept {
    return static_cast<__ProjectionAxis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectionAxis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProjectionAxis(int32_t value__) noexcept;

  /// @brief Field X value: I32(0)
  static ::UnityEngine::ProBuilder::ProjectionAxis const X;

  /// @brief Field XNegative value: I32(3)
  static ::UnityEngine::ProBuilder::ProjectionAxis const XNegative;

  /// @brief Field Y value: I32(1)
  static ::UnityEngine::ProBuilder::ProjectionAxis const Y;

  /// @brief Field YNegative value: I32(4)
  static ::UnityEngine::ProBuilder::ProjectionAxis const YNegative;

  /// @brief Field Z value: I32(2)
  static ::UnityEngine::ProBuilder::ProjectionAxis const Z;

  /// @brief Field ZNegative value: I32(5)
  static ::UnityEngine::ProBuilder::ProjectionAxis const ZNegative;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ProjectionAxis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProjectionAxis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProjectionAxis, "UnityEngine.ProBuilder", "ProjectionAxis");
