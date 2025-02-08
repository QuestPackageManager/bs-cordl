#pragma once
// IWYU pragma private; include "UnityEngine/FrameTiming.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTiming)
// Forward declare root types
namespace UnityEngine {
struct FrameTiming;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FrameTiming);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FrameTiming
struct CORDL_TYPE FrameTiming {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTiming();

  // Ctor Parameters [CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "cpuMainThreadFrameTime", ty: "double_t", modifiers: "", def_value: None },
  // CppParam { name: "cpuMainThreadPresentWaitTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "cpuRenderThreadFrameTime", ty: "double_t", modifiers: "", def_value: None },
  // CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "frameStartTimestamp", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "firstSubmitTimestamp", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "syncInterval", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr FrameTiming(double_t cpuFrameTime, double_t cpuMainThreadFrameTime, double_t cpuMainThreadPresentWaitTime, double_t cpuRenderThreadFrameTime, double_t gpuFrameTime,
                        uint64_t frameStartTimestamp, uint64_t firstSubmitTimestamp, uint64_t cpuTimePresentCalled, uint64_t cpuTimeFrameComplete, float_t heightScale, float_t widthScale,
                        uint32_t syncInterval) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field cpuFrameTime, offset: 0x0, size: 0x8, def value: None
  double_t cpuFrameTime;

  /// @brief Field cpuMainThreadFrameTime, offset: 0x8, size: 0x8, def value: None
  double_t cpuMainThreadFrameTime;

  /// @brief Field cpuMainThreadPresentWaitTime, offset: 0x10, size: 0x8, def value: None
  double_t cpuMainThreadPresentWaitTime;

  /// @brief Field cpuRenderThreadFrameTime, offset: 0x18, size: 0x8, def value: None
  double_t cpuRenderThreadFrameTime;

  /// @brief Field gpuFrameTime, offset: 0x20, size: 0x8, def value: None
  double_t gpuFrameTime;

  /// @brief Field frameStartTimestamp, offset: 0x28, size: 0x8, def value: None
  uint64_t frameStartTimestamp;

  /// @brief Field firstSubmitTimestamp, offset: 0x30, size: 0x8, def value: None
  uint64_t firstSubmitTimestamp;

  /// @brief Field cpuTimePresentCalled, offset: 0x38, size: 0x8, def value: None
  uint64_t cpuTimePresentCalled;

  /// @brief Field cpuTimeFrameComplete, offset: 0x40, size: 0x8, def value: None
  uint64_t cpuTimeFrameComplete;

  /// @brief Field heightScale, offset: 0x48, size: 0x4, def value: None
  float_t heightScale;

  /// @brief Field widthScale, offset: 0x4c, size: 0x4, def value: None
  float_t widthScale;

  /// @brief Field syncInterval, offset: 0x50, size: 0x4, def value: None
  uint32_t syncInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FrameTiming, cpuFrameTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuMainThreadFrameTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuMainThreadPresentWaitTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuRenderThreadFrameTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, gpuFrameTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, frameStartTimestamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, firstSubmitTimestamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuTimePresentCalled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuTimeFrameComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, heightScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, widthScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, syncInterval) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FrameTiming, 0x58>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
