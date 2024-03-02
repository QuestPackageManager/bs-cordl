#pragma once
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
// Type: UnityEngine.Yoga::YogaSize
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: ::UnityEngine.Yoga::YogaSize
struct CORDL_TYPE YogaSize {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaSize();

  // Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr YogaSize(float_t width, float_t height) noexcept;

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  float_t height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaSize, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaSize, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaSize, height) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaSize, "UnityEngine.Yoga", "YogaSize");
