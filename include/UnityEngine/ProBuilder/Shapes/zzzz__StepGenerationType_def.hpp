#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/StepGenerationType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StepGenerationType)
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
struct StepGenerationType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Shapes::StepGenerationType);
// Dependencies
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Shapes.StepGenerationType
struct CORDL_TYPE StepGenerationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StepGenerationType_Unwrapped
  enum struct __StepGenerationType_Unwrapped : int32_t {
    __E_Height = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StepGenerationType_Unwrapped() const noexcept {
    return static_cast<__StepGenerationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StepGenerationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StepGenerationType(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::ProBuilder::Shapes::StepGenerationType const Count;

  /// @brief Field Height value: I32(0)
  static ::UnityEngine::ProBuilder::Shapes::StepGenerationType const Height;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16802 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::StepGenerationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::StepGenerationType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::StepGenerationType, "UnityEngine.ProBuilder.Shapes", "StepGenerationType");
