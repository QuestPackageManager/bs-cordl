#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFlags)
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualElementFlags);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElementFlags
struct CORDL_TYPE VisualElementFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualElementFlags_Unwrapped
  enum struct __VisualElementFlags_Unwrapped : int32_t {
    __E_WorldTransformDirty = static_cast<int32_t>(0x1),
    __E_WorldTransformInverseDirty = static_cast<int32_t>(0x2),
    __E_WorldClipDirty = static_cast<int32_t>(0x4),
    __E_BoundingBoxDirty = static_cast<int32_t>(0x8),
    __E_WorldBoundingBoxDirty = static_cast<int32_t>(0x10),
    __E_EventCallbackParentCategoriesDirty = static_cast<int32_t>(0x20),
    __E_LayoutManual = static_cast<int32_t>(0x40),
    __E_CompositeRoot = static_cast<int32_t>(0x80),
    __E_RequireMeasureFunction = static_cast<int32_t>(0x100),
    __E_EnableViewDataPersistence = static_cast<int32_t>(0x200),
    __E_DisableClipping = static_cast<int32_t>(0x400),
    __E_NeedsAttachToPanelEvent = static_cast<int32_t>(0x800),
    __E_HierarchyDisplayed = static_cast<int32_t>(0x1000),
    __E_StyleInitialized = static_cast<int32_t>(0x2000),
    __E_Init = static_cast<int32_t>(0x103f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualElementFlags_Unwrapped() const noexcept {
    return static_cast<__VisualElementFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualElementFlags(int32_t value__) noexcept;

  /// @brief Field BoundingBoxDirty value: I32(8)
  static ::UnityEngine::UIElements::VisualElementFlags const BoundingBoxDirty;

  /// @brief Field CompositeRoot value: I32(128)
  static ::UnityEngine::UIElements::VisualElementFlags const CompositeRoot;

  /// @brief Field DisableClipping value: I32(1024)
  static ::UnityEngine::UIElements::VisualElementFlags const DisableClipping;

  /// @brief Field EnableViewDataPersistence value: I32(512)
  static ::UnityEngine::UIElements::VisualElementFlags const EnableViewDataPersistence;

  /// @brief Field EventCallbackParentCategoriesDirty value: I32(32)
  static ::UnityEngine::UIElements::VisualElementFlags const EventCallbackParentCategoriesDirty;

  /// @brief Field HierarchyDisplayed value: I32(4096)
  static ::UnityEngine::UIElements::VisualElementFlags const HierarchyDisplayed;

  /// @brief Field Init value: I32(4159)
  static ::UnityEngine::UIElements::VisualElementFlags const Init;

  /// @brief Field LayoutManual value: I32(64)
  static ::UnityEngine::UIElements::VisualElementFlags const LayoutManual;

  /// @brief Field NeedsAttachToPanelEvent value: I32(2048)
  static ::UnityEngine::UIElements::VisualElementFlags const NeedsAttachToPanelEvent;

  /// @brief Field RequireMeasureFunction value: I32(256)
  static ::UnityEngine::UIElements::VisualElementFlags const RequireMeasureFunction;

  /// @brief Field StyleInitialized value: I32(8192)
  static ::UnityEngine::UIElements::VisualElementFlags const StyleInitialized;

  /// @brief Field WorldBoundingBoxDirty value: I32(16)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldBoundingBoxDirty;

  /// @brief Field WorldClipDirty value: I32(4)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldClipDirty;

  /// @brief Field WorldTransformDirty value: I32(1)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformDirty;

  /// @brief Field WorldTransformInverseDirty value: I32(2)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformInverseDirty;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6306 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFlags, "UnityEngine.UIElements", "VisualElementFlags");
