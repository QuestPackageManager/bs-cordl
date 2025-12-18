#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingThreadingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingThreadingMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderingThreadingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderingThreadingMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderingThreadingMode
struct CORDL_TYPE RenderingThreadingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderingThreadingMode_Unwrapped
  enum struct __RenderingThreadingMode_Unwrapped : int32_t {
    __E_Direct = static_cast<int32_t>(0x0),
    __E_SingleThreaded = static_cast<int32_t>(0x1),
    __E_MultiThreaded = static_cast<int32_t>(0x2),
    __E_LegacyJobified = static_cast<int32_t>(0x3),
    __E_NativeGraphicsJobs = static_cast<int32_t>(0x4),
    __E_NativeGraphicsJobsWithoutRenderThread = static_cast<int32_t>(0x5),
    __E_NativeGraphicsJobsSplitThreading = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderingThreadingMode_Unwrapped() const noexcept {
    return static_cast<__RenderingThreadingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingThreadingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderingThreadingMode(int32_t value__) noexcept;

  /// @brief Field Direct value: I32(0)
  static ::UnityEngine::Rendering::RenderingThreadingMode const Direct;

  /// @brief Field LegacyJobified value: I32(3)
  static ::UnityEngine::Rendering::RenderingThreadingMode const LegacyJobified;

  /// @brief Field MultiThreaded value: I32(2)
  static ::UnityEngine::Rendering::RenderingThreadingMode const MultiThreaded;

  /// @brief Field NativeGraphicsJobs value: I32(4)
  static ::UnityEngine::Rendering::RenderingThreadingMode const NativeGraphicsJobs;

  /// @brief Field NativeGraphicsJobsSplitThreading value: I32(6)
  static ::UnityEngine::Rendering::RenderingThreadingMode const NativeGraphicsJobsSplitThreading;

  /// @brief Field NativeGraphicsJobsWithoutRenderThread value: I32(5)
  static ::UnityEngine::Rendering::RenderingThreadingMode const NativeGraphicsJobsWithoutRenderThread;

  /// @brief Field SingleThreaded value: I32(1)
  static ::UnityEngine::Rendering::RenderingThreadingMode const SingleThreaded;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderingThreadingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderingThreadingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderingThreadingMode, "UnityEngine.Rendering", "RenderingThreadingMode");
