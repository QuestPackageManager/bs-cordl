#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreProfileId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreProfileId)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CoreProfileId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CoreProfileId);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreProfileId
struct CORDL_TYPE CoreProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CoreProfileId_Unwrapped
  enum struct __CoreProfileId_Unwrapped : int32_t {
    __E_BlitTextureInPotAtlas = static_cast<int32_t>(0x0),
    __E_APVCellStreamingUpdate = static_cast<int32_t>(0x1),
    __E_APVScenarioBlendingUpdate = static_cast<int32_t>(0x2),
    __E_APVIndexDefragUpdate = static_cast<int32_t>(0x3),
    __E_APVDiskStreamingUpdate = static_cast<int32_t>(0x4),
    __E_APVDiskStreamingUpdatePool = static_cast<int32_t>(0x5),
    __E_APVSamplingDebug = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CoreProfileId_Unwrapped() const noexcept {
    return static_cast<__CoreProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CoreProfileId(int32_t value__) noexcept;

  /// @brief Field APVCellStreamingUpdate value: I32(1)
  static ::UnityEngine::Rendering::CoreProfileId const APVCellStreamingUpdate;

  /// @brief Field APVDiskStreamingUpdate value: I32(4)
  static ::UnityEngine::Rendering::CoreProfileId const APVDiskStreamingUpdate;

  /// @brief Field APVDiskStreamingUpdatePool value: I32(5)
  static ::UnityEngine::Rendering::CoreProfileId const APVDiskStreamingUpdatePool;

  /// @brief Field APVIndexDefragUpdate value: I32(3)
  static ::UnityEngine::Rendering::CoreProfileId const APVIndexDefragUpdate;

  /// @brief Field APVSamplingDebug value: I32(6)
  static ::UnityEngine::Rendering::CoreProfileId const APVSamplingDebug;

  /// @brief Field APVScenarioBlendingUpdate value: I32(2)
  static ::UnityEngine::Rendering::CoreProfileId const APVScenarioBlendingUpdate;

  /// @brief Field BlitTextureInPotAtlas value: I32(0)
  static ::UnityEngine::Rendering::CoreProfileId const BlitTextureInPotAtlas;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CoreProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreProfileId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreProfileId, "UnityEngine.Rendering", "CoreProfileId");
