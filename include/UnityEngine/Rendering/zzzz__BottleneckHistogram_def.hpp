#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BottleneckHistogram.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BottleneckHistogram)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BottleneckHistogram;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BottleneckHistogram);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BottleneckHistogram
struct CORDL_TYPE BottleneckHistogram {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BottleneckHistogram();

  // Ctor Parameters [CppParam { name: "PresentLimited", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "CPU", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "GPU", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Balanced", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BottleneckHistogram(float_t PresentLimited, float_t CPU, float_t GPU, float_t Balanced) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field PresentLimited, offset: 0x0, size: 0x4, def value: None
  float_t PresentLimited;

  /// @brief Field CPU, offset: 0x4, size: 0x4, def value: None
  float_t CPU;

  /// @brief Field GPU, offset: 0x8, size: 0x4, def value: None
  float_t GPU;

  /// @brief Field Balanced, offset: 0xc, size: 0x4, def value: None
  float_t Balanced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistogram, PresentLimited) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistogram, CPU) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistogram, GPU) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BottleneckHistogram, Balanced) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BottleneckHistogram, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BottleneckHistogram, "UnityEngine.Rendering", "BottleneckHistogram");
