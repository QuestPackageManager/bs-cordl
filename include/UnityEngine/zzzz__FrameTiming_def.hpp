#pragma once
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
// Type: UnityEngine::FrameTiming
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10132))
// CS Name: ::UnityEngine::FrameTiming
struct CORDL_TYPE FrameTiming {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: None },
  // CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "syncInterval", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr FrameTiming(uint64_t cpuTimePresentCalled, double_t cpuFrameTime, uint64_t cpuTimeFrameComplete, double_t gpuFrameTime, float_t heightScale, float_t widthScale,
                        uint32_t syncInterval) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTiming();

  /// @brief Field cpuTimePresentCalled, offset: 0x0, size: 0x8, def value: None
  uint64_t cpuTimePresentCalled;

  /// @brief Field cpuFrameTime, offset: 0x8, size: 0x8, def value: None
  double_t cpuFrameTime;

  /// @brief Field cpuTimeFrameComplete, offset: 0x10, size: 0x8, def value: None
  uint64_t cpuTimeFrameComplete;

  /// @brief Field gpuFrameTime, offset: 0x18, size: 0x8, def value: None
  double_t gpuFrameTime;

  /// @brief Field heightScale, offset: 0x20, size: 0x4, def value: None
  float_t heightScale;

  /// @brief Field widthScale, offset: 0x24, size: 0x4, def value: None
  float_t widthScale;

  /// @brief Field syncInterval, offset: 0x28, size: 0x4, def value: None
  uint32_t syncInterval;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FrameTiming, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuTimePresentCalled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuFrameTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, cpuTimeFrameComplete) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, gpuFrameTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, heightScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, widthScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::FrameTiming, syncInterval) == 0x28, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
