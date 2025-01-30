#pragma once
// IWYU pragma private; include "UnityEngine/MotionVectorGenerationMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionVectorGenerationMode)
// Forward declare root types
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MotionVectorGenerationMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MotionVectorGenerationMode
struct CORDL_TYPE MotionVectorGenerationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MotionVectorGenerationMode_Unwrapped
  enum struct __MotionVectorGenerationMode_Unwrapped : int32_t {
    __E_Camera = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_ForceNoMotion = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MotionVectorGenerationMode_Unwrapped() const noexcept {
    return static_cast<__MotionVectorGenerationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorGenerationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MotionVectorGenerationMode(int32_t value__) noexcept;

  /// @brief Field Camera value: I32(0)
  static ::UnityEngine::MotionVectorGenerationMode const Camera;

  /// @brief Field ForceNoMotion value: I32(2)
  static ::UnityEngine::MotionVectorGenerationMode const ForceNoMotion;

  /// @brief Field Object value: I32(1)
  static ::UnityEngine::MotionVectorGenerationMode const Object;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MotionVectorGenerationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MotionVectorGenerationMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MotionVectorGenerationMode, "UnityEngine", "MotionVectorGenerationMode");
