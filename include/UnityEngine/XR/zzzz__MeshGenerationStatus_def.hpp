#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshGenerationStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationStatus)
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshGenerationStatus);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.MeshGenerationStatus
struct CORDL_TYPE MeshGenerationStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshGenerationStatus_Unwrapped
  enum struct __MeshGenerationStatus_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_InvalidMeshId = static_cast<int32_t>(0x1),
    __E_GenerationAlreadyInProgress = static_cast<int32_t>(0x2),
    __E_Canceled = static_cast<int32_t>(0x3),
    __E_UnknownError = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshGenerationStatus_Unwrapped() const noexcept {
    return static_cast<__MeshGenerationStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshGenerationStatus(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(3)
  static ::UnityEngine::XR::MeshGenerationStatus const Canceled;

  /// @brief Field GenerationAlreadyInProgress value: I32(2)
  static ::UnityEngine::XR::MeshGenerationStatus const GenerationAlreadyInProgress;

  /// @brief Field InvalidMeshId value: I32(1)
  static ::UnityEngine::XR::MeshGenerationStatus const InvalidMeshId;

  /// @brief Field Success value: I32(0)
  static ::UnityEngine::XR::MeshGenerationStatus const Success;

  /// @brief Field UnknownError value: I32(4)
  static ::UnityEngine::XR::MeshGenerationStatus const UnknownError;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21963 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::MeshGenerationStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshGenerationStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationStatus, "UnityEngine.XR", "MeshGenerationStatus");
