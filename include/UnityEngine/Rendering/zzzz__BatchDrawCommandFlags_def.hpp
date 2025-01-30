#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDrawCommandFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchDrawCommandFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchDrawCommandFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchDrawCommandFlags
struct CORDL_TYPE BatchDrawCommandFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BatchDrawCommandFlags_Unwrapped
  enum struct __BatchDrawCommandFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_FlipWinding = static_cast<int32_t>(0x1),
    __E_HasMotion = static_cast<int32_t>(0x2),
    __E_IsLightMapped = static_cast<int32_t>(0x4),
    __E_HasSortingPosition = static_cast<int32_t>(0x8),
    __E_LODCrossFade = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BatchDrawCommandFlags_Unwrapped() const noexcept {
    return static_cast<__BatchDrawCommandFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchDrawCommandFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatchDrawCommandFlags(int32_t value__) noexcept;

  /// @brief Field FlipWinding value: I32(1)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const FlipWinding;

  /// @brief Field HasMotion value: I32(2)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const HasMotion;

  /// @brief Field HasSortingPosition value: I32(8)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const HasSortingPosition;

  /// @brief Field IsLightMapped value: I32(4)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const IsLightMapped;

  /// @brief Field LODCrossFade value: I32(16)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const LODCrossFade;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::BatchDrawCommandFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11242 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchDrawCommandFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawCommandFlags, "UnityEngine.Rendering", "BatchDrawCommandFlags");
