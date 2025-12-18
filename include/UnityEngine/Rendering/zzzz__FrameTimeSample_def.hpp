#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrameTimeSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FrameTimeSample)
// Forward declare root types
namespace UnityEngine::Rendering {
struct FrameTimeSample;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FrameTimeSample);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrameTimeSample
struct CORDL_TYPE FrameTimeSample {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x65b62c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t initValue);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTimeSample();

  // Ctor Parameters [CppParam { name: "FramesPerSecond", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FullFrameTime", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "MainThreadCPUFrameTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MainThreadCPUPresentWaitTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "RenderThreadCPUFrameTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "GPUFrameTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FrameTimeSample(float_t FramesPerSecond, float_t FullFrameTime, float_t MainThreadCPUFrameTime, float_t MainThreadCPUPresentWaitTime, float_t RenderThreadCPUFrameTime,
                            float_t GPUFrameTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12014 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field FramesPerSecond, offset: 0x0, size: 0x4, def value: None
  float_t FramesPerSecond;

  /// @brief Field FullFrameTime, offset: 0x4, size: 0x4, def value: None
  float_t FullFrameTime;

  /// @brief Field MainThreadCPUFrameTime, offset: 0x8, size: 0x4, def value: None
  float_t MainThreadCPUFrameTime;

  /// @brief Field MainThreadCPUPresentWaitTime, offset: 0xc, size: 0x4, def value: None
  float_t MainThreadCPUPresentWaitTime;

  /// @brief Field RenderThreadCPUFrameTime, offset: 0x10, size: 0x4, def value: None
  float_t RenderThreadCPUFrameTime;

  /// @brief Field GPUFrameTime, offset: 0x14, size: 0x4, def value: None
  float_t GPUFrameTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, FramesPerSecond) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, FullFrameTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, MainThreadCPUFrameTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, MainThreadCPUPresentWaitTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, RenderThreadCPUFrameTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSample, GPUFrameTime) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrameTimeSample, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrameTimeSample, "UnityEngine.Rendering", "FrameTimeSample");
