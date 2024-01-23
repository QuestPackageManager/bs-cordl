#pragma once
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
// Type: UnityEngine::MotionVectorGenerationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10125))
// CS Name: ::UnityEngine::MotionVectorGenerationMode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MotionVectorGenerationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorGenerationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Camera value: static_cast<int32_t>(0x0)
  static ::UnityEngine::MotionVectorGenerationMode const Camera;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::UnityEngine::MotionVectorGenerationMode const Object;

  /// @brief Field ForceNoMotion value: static_cast<int32_t>(0x2)
  static ::UnityEngine::MotionVectorGenerationMode const ForceNoMotion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MotionVectorGenerationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MotionVectorGenerationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MotionVectorGenerationMode, "UnityEngine", "MotionVectorGenerationMode");
