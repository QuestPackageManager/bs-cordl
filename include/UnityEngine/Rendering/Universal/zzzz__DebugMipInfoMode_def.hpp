#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMipInfoMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugMipInfoMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugMipInfoMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugMipInfoMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugMipInfoMode
struct CORDL_TYPE DebugMipInfoMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugMipInfoMode_Unwrapped
  enum struct __DebugMipInfoMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MipStreamingPerformance = static_cast<int32_t>(0x1),
    __E_MipStreamingStatus = static_cast<int32_t>(0x2),
    __E_MipStreamingActivity = static_cast<int32_t>(0x3),
    __E_MipStreamingPriority = static_cast<int32_t>(0x4),
    __E_MipCount = static_cast<int32_t>(0x5),
    __E_MipRatio = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugMipInfoMode_Unwrapped() const noexcept {
    return static_cast<__DebugMipInfoMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMipInfoMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugMipInfoMode(int32_t value__) noexcept;

  /// @brief Field MipCount value: I32(5)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipCount;

  /// @brief Field MipRatio value: I32(6)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipRatio;

  /// @brief Field MipStreamingActivity value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipStreamingActivity;

  /// @brief Field MipStreamingPerformance value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipStreamingPerformance;

  /// @brief Field MipStreamingPriority value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipStreamingPriority;

  /// @brief Field MipStreamingStatus value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const MipStreamingStatus;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugMipInfoMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugMipInfoMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugMipInfoMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugMipInfoMode, "UnityEngine.Rendering.Universal", "DebugMipInfoMode");
