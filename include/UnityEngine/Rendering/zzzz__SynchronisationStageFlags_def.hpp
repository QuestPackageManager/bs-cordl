#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SynchronisationStageFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronisationStageFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SynchronisationStageFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SynchronisationStageFlags
struct CORDL_TYPE SynchronisationStageFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SynchronisationStageFlags_Unwrapped
  enum struct __SynchronisationStageFlags_Unwrapped : int32_t {
    __E_VertexProcessing = static_cast<int32_t>(0x1),
    __E_PixelProcessing = static_cast<int32_t>(0x2),
    __E_ComputeProcessing = static_cast<int32_t>(0x4),
    __E_AllGPUOperations = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SynchronisationStageFlags_Unwrapped() const noexcept {
    return static_cast<__SynchronisationStageFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronisationStageFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SynchronisationStageFlags(int32_t value__) noexcept;

  /// @brief Field AllGPUOperations value: I32(7)
  static ::UnityEngine::Rendering::SynchronisationStageFlags const AllGPUOperations;

  /// @brief Field ComputeProcessing value: I32(4)
  static ::UnityEngine::Rendering::SynchronisationStageFlags const ComputeProcessing;

  /// @brief Field PixelProcessing value: I32(2)
  static ::UnityEngine::Rendering::SynchronisationStageFlags const PixelProcessing;

  /// @brief Field VertexProcessing value: I32(1)
  static ::UnityEngine::Rendering::SynchronisationStageFlags const VertexProcessing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SynchronisationStageFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SynchronisationStageFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SynchronisationStageFlags, "UnityEngine.Rendering", "SynchronisationStageFlags");
