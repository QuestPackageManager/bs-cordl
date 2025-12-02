#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullerSplitDebugCounter)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceCullerSplitDebugCounter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullerSplitDebugCounter);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerSplitDebugCounter
struct CORDL_TYPE InstanceCullerSplitDebugCounter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InstanceCullerSplitDebugCounter_Unwrapped
  enum struct __InstanceCullerSplitDebugCounter_Unwrapped : int32_t {
    __E_VisibleInstances = static_cast<int32_t>(0x0),
    __E_DrawCommands = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InstanceCullerSplitDebugCounter_Unwrapped() const noexcept {
    return static_cast<__InstanceCullerSplitDebugCounter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerSplitDebugCounter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceCullerSplitDebugCounter(int32_t value__) noexcept;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::Rendering::InstanceCullerSplitDebugCounter const Count;

  /// @brief Field DrawCommands value: I32(1)
  static ::UnityEngine::Rendering::InstanceCullerSplitDebugCounter const DrawCommands;

  /// @brief Field VisibleInstances value: I32(0)
  static ::UnityEngine::Rendering::InstanceCullerSplitDebugCounter const VisibleInstances;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugCounter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullerSplitDebugCounter, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullerSplitDebugCounter, "UnityEngine.Rendering", "InstanceCullerSplitDebugCounter");
