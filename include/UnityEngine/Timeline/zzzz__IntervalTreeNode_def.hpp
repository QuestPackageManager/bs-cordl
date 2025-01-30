#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IntervalTreeNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTreeNode)
// Forward declare root types
namespace UnityEngine::Timeline {
struct IntervalTreeNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::IntervalTreeNode);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.IntervalTreeNode
struct CORDL_TYPE IntervalTreeNode {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTreeNode();

  // Ctor Parameters [CppParam { name: "center", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "last",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr IntervalTreeNode(int64_t center, int32_t first, int32_t last, int32_t left, int32_t right) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field center, offset: 0x0, size: 0x8, def value: None
  int64_t center;

  /// @brief Field first, offset: 0x8, size: 0x4, def value: None
  int32_t first;

  /// @brief Field last, offset: 0xc, size: 0x4, def value: None
  int32_t last;

  /// @brief Field left, offset: 0x10, size: 0x4, def value: None
  int32_t left;

  /// @brief Field right, offset: 0x14, size: 0x4, def value: None
  int32_t right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::IntervalTreeNode, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::IntervalTreeNode, first) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::IntervalTreeNode, last) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::IntervalTreeNode, left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::IntervalTreeNode, right) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::IntervalTreeNode, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IntervalTreeNode, "UnityEngine.Timeline", "IntervalTreeNode");
