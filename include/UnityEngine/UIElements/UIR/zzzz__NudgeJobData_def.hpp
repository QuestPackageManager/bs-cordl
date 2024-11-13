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
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct NudgeJobData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::NudgeJobData);
// Type: UnityEngine.UIElements.UIR::NudgeJobData
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 132, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::NudgeJobData
struct CORDL_TYPE NudgeJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NudgeJobData();

  // Ctor Parameters [CppParam { name: "src", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "dst", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam {
  // name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "closingSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "closingDst", ty:
  // "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "closingCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty:
  // "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "vertsBeforeUVDisplacement", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "vertsAfterUVDisplacement", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NudgeJobData(::System::IntPtr src, ::System::IntPtr dst, int32_t count, ::System::IntPtr closingSrc, ::System::IntPtr closingDst, int32_t closingCount, ::UnityEngine::Matrix4x4 transform,
                         int32_t vertsBeforeUVDisplacement, int32_t vertsAfterUVDisplacement) noexcept;

  /// @brief Field src, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr src;

  /// @brief Field dst, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr dst;

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t count;

  /// @brief Field closingSrc, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr closingSrc;

  /// @brief Field closingDst, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr closingDst;

  /// @brief Field closingCount, offset: 0x28, size: 0x4, def value: None
  int32_t closingCount;

  /// @brief Field transform, offset: 0x2c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 transform;

  /// @brief Field vertsBeforeUVDisplacement, offset: 0x6c, size: 0x4, def value: None
  int32_t vertsBeforeUVDisplacement;

  /// @brief Field vertsAfterUVDisplacement, offset: 0x70, size: 0x4, def value: None
  int32_t vertsAfterUVDisplacement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6335 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::NudgeJobData, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, src) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, dst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, closingSrc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, closingDst) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, closingCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, transform) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, vertsBeforeUVDisplacement) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::NudgeJobData, vertsAfterUVDisplacement) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::NudgeJobData, "UnityEngine.UIElements.UIR", "NudgeJobData");
