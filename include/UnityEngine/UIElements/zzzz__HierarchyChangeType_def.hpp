#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HierarchyChangeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyChangeType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::HierarchyChangeType);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.HierarchyChangeType
struct CORDL_TYPE HierarchyChangeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HierarchyChangeType_Unwrapped
  enum struct __HierarchyChangeType_Unwrapped : int32_t {
    __E_AddedToParent = static_cast<int32_t>(0x0),
    __E_RemovedFromParent = static_cast<int32_t>(0x1),
    __E_ChildrenReordered = static_cast<int32_t>(0x2),
    __E_AttachedToPanel = static_cast<int32_t>(0x3),
    __E_DetachedFromPanel = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HierarchyChangeType_Unwrapped() const noexcept {
    return static_cast<__HierarchyChangeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyChangeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyChangeType(int32_t value__) noexcept;

  /// @brief Field AddedToParent value: I32(0)
  static ::UnityEngine::UIElements::HierarchyChangeType const AddedToParent;

  /// @brief Field AttachedToPanel value: I32(3)
  static ::UnityEngine::UIElements::HierarchyChangeType const AttachedToPanel;

  /// @brief Field ChildrenReordered value: I32(2)
  static ::UnityEngine::UIElements::HierarchyChangeType const ChildrenReordered;

  /// @brief Field DetachedFromPanel value: I32(4)
  static ::UnityEngine::UIElements::HierarchyChangeType const DetachedFromPanel;

  /// @brief Field RemovedFromParent value: I32(1)
  static ::UnityEngine::UIElements::HierarchyChangeType const RemovedFromParent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5254 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::HierarchyChangeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HierarchyChangeType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyChangeType, "UnityEngine.UIElements", "HierarchyChangeType");
