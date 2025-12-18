#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNodeData)
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeData_FlexStatus;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeData_FlexStatus;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus);
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutNodeData);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNodeData/FlexStatus
struct CORDL_TYPE LayoutNodeData_FlexStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutNodeData_FlexStatus_Unwrapped
  enum struct __LayoutNodeData_FlexStatus_Unwrapped : int32_t {
    __E_IsDirty = static_cast<int32_t>(0x1),
    __E_HasNewLayout = static_cast<int32_t>(0x4),
    __E_DependsOnParentSize = static_cast<int32_t>(0x40),
    __E_Fixed = static_cast<int32_t>(0x8),
    __E_MinViolation = static_cast<int32_t>(0x10),
    __E_MaxViolation = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutNodeData_FlexStatus_Unwrapped() const noexcept {
    return static_cast<__LayoutNodeData_FlexStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNodeData_FlexStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutNodeData_FlexStatus(int32_t value__) noexcept;

  /// @brief Field DependsOnParentSize value: I32(64)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const DependsOnParentSize;

  /// @brief Field Fixed value: I32(8)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const Fixed;

  /// @brief Field HasNewLayout value: I32(4)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const HasNewLayout;

  /// @brief Field IsDirty value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const IsDirty;

  /// @brief Field MaxViolation value: I32(32)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const MaxViolation;

  /// @brief Field MinViolation value: I32(16)
  static ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus const MinViolation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5418 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies UnityEngine.UIElements.Layout.FixedBuffer2`1<T>, UnityEngine.UIElements.Layout.LayoutHandle, UnityEngine.UIElements.Layout.LayoutList`1<T>,
// UnityEngine.UIElements.Layout.LayoutNodeData::FlexStatus, UnityEngine.UIElements.Layout.LayoutValue
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNodeData
struct CORDL_TYPE LayoutNodeData {
public:
  // Declarations
  using FlexStatus = ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus;

  __declspec(property(get = get_HasNewLayout, put = set_HasNewLayout)) bool HasNewLayout;

  __declspec(property(get = get_IsDirty, put = set_IsDirty)) bool IsDirty;

  /// @brief Method get_HasNewLayout, addr 0x6b360e4, size 0xc, virtual false, abstract: false, final false
  inline bool get_HasNewLayout();

  /// @brief Method get_IsDirty, addr 0x6b35fe8, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDirty();

  /// @brief Method set_HasNewLayout, addr 0x6b36174, size 0x20, virtual false, abstract: false, final false
  inline void set_HasNewLayout(bool value);

  /// @brief Method set_IsDirty, addr 0x6b36068, size 0x10, virtual false, abstract: false, final false
  inline void set_IsDirty(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNodeData();

  // Ctor Parameters [CppParam { name: "ResolvedDimensions", ty: "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None },
  // CppParam { name: "TargetSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ManagedMeasureFunctionIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ManagedBaselineFunctionIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ManagedOwnerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "LineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Config", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None }, CppParam { name:
  // "Parent", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None }, CppParam { name: "NextChild", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers:
  // "", def_value: None }, CppParam { name: "Children", ty: "::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle>", modifiers: "", def_value: None },
  // CppParam { name: "Status", ty: "::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus", modifiers: "", def_value: None }]
  constexpr LayoutNodeData(::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> ResolvedDimensions, float_t TargetSize,
                           int32_t ManagedMeasureFunctionIndex, int32_t ManagedBaselineFunctionIndex, int32_t ManagedOwnerIndex, int32_t LineIndex,
                           ::UnityEngine::UIElements::Layout::LayoutHandle Config, ::UnityEngine::UIElements::Layout::LayoutHandle Parent, ::UnityEngine::UIElements::Layout::LayoutHandle NextChild,
                           ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle> Children,
                           ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus Status) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5419 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field ResolvedDimensions, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> ResolvedDimensions;

  /// @brief Field TargetSize, offset: 0x10, size: 0x4, def value: None
  float_t TargetSize;

  /// @brief Field ManagedMeasureFunctionIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ManagedMeasureFunctionIndex;

  /// @brief Field ManagedBaselineFunctionIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ManagedBaselineFunctionIndex;

  /// @brief Field ManagedOwnerIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ManagedOwnerIndex;

  /// @brief Field LineIndex, offset: 0x20, size: 0x4, def value: None
  int32_t LineIndex;

  /// @brief Field Config, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle Config;

  /// @brief Field Parent, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle Parent;

  /// @brief Field NextChild, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle NextChild;

  /// @brief Field Children, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle> Children;

  /// @brief Field Status, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ResolvedDimensions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, TargetSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ManagedMeasureFunctionIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ManagedBaselineFunctionIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ManagedOwnerIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, LineIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Config) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Parent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, NextChild) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Children) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Status) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutNodeData, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus, "UnityEngine.UIElements.Layout", "LayoutNodeData/FlexStatus");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutNodeData, "UnityEngine.UIElements.Layout", "LayoutNodeData");
