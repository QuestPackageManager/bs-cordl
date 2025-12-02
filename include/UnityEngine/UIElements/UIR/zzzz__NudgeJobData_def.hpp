#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NudgeJobData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NudgeJobData)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct NudgeJobData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::NudgeJobData);
// Dependencies System.IntPtr, UnityEngine.Matrix4x4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.NudgeJobData
struct CORDL_TYPE NudgeJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NudgeJobData();

  // Ctor Parameters [CppParam { name: "headSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "headDst", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "headCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "tailDst",
  // ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "tailCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
  constexpr NudgeJobData(::System::IntPtr headSrc, ::System::IntPtr headDst, int32_t headCount, ::System::IntPtr tailSrc, ::System::IntPtr tailDst, int32_t tailCount,
                         ::UnityEngine::Matrix4x4 transform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field headSrc, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr headSrc;

  /// @brief Field headDst, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr headDst;

  /// @brief Field headCount, offset: 0x10, size: 0x4, def value: None
  int32_t headCount;

  /// @brief Field tailSrc, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr tailSrc;

  /// @brief Field tailDst, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr tailDst;

  /// @brief Field tailCount, offset: 0x28, size: 0x4, def value: None
  int32_t tailCount;

  /// @brief Field transform, offset: 0x2c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, headSrc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, headDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, headCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, tailSrc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, tailDst) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, tailCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, transform) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::NudgeJobData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::NudgeJobData, "UnityEngine.UIElements.UIR", "NudgeJobData");
