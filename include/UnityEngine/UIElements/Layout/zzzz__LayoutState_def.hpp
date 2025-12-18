#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutState)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutState);
// Dependencies System.IntPtr
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutState
struct CORDL_TYPE LayoutState {
public:
  // Declarations
  /// @brief Method get_Default, addr 0x6b38698, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutState get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutState();

  // Ctor Parameters [CppParam { name: "measureFunctionCallback", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "baselineFunctionCallback", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }, CppParam { name: "unusedExceptionPointer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "currentGenerationCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "error", ty: "bool", modifiers: "", def_value: None }]
  constexpr LayoutState(::System::IntPtr measureFunctionCallback, ::System::IntPtr baselineFunctionCallback, ::System::IntPtr unusedExceptionPointer, uint32_t depth, uint32_t currentGenerationCount,
                        bool error) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field measureFunctionCallback, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr measureFunctionCallback;

  /// @brief Field baselineFunctionCallback, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr baselineFunctionCallback;

  /// @brief Field unusedExceptionPointer, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr unusedExceptionPointer;

  /// @brief Field depth, offset: 0x18, size: 0x4, def value: None
  uint32_t depth;

  /// @brief Field currentGenerationCount, offset: 0x1c, size: 0x4, def value: None
  uint32_t currentGenerationCount;

  /// @brief Field error, offset: 0x20, size: 0x1, def value: None
  bool error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, measureFunctionCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, baselineFunctionCallback) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, unusedExceptionPointer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, currentGenerationCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutState, error) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutState, "UnityEngine.UIElements.Layout", "LayoutState");
