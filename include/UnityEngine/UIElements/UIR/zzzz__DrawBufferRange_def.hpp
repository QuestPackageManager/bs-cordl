#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DrawBufferRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBufferRange)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::DrawBufferRange);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.DrawBufferRange
struct CORDL_TYPE DrawBufferRange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawBufferRange();

  // Ctor Parameters [CppParam { name: "firstIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "minIndexVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertsReferenced", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawBufferRange(int32_t firstIndex, int32_t indexCount, int32_t minIndexVal, int32_t vertsReferenced) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6352 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field firstIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstIndex;

  /// @brief Field indexCount, offset: 0x4, size: 0x4, def value: None
  int32_t indexCount;

  /// @brief Field minIndexVal, offset: 0x8, size: 0x4, def value: None
  int32_t minIndexVal;

  /// @brief Field vertsReferenced, offset: 0xc, size: 0x4, def value: None
  int32_t vertsReferenced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawBufferRange, firstIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawBufferRange, indexCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawBufferRange, minIndexVal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DrawBufferRange, vertsReferenced) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DrawBufferRange, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawBufferRange, "UnityEngine.UIElements.UIR", "DrawBufferRange");
