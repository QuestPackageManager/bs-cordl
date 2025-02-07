#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(YogaSize)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaSize);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaSize
struct CORDL_TYPE YogaSize {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaSize();

  // Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr YogaSize(float_t width, float_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  float_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaSize, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaSize, height) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaSize, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaSize, "UnityEngine.Yoga", "YogaSize");
