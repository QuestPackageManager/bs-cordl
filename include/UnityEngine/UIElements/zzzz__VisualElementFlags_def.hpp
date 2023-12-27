#pragma once
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
// Type: UnityEngine.UIElements::VisualElementFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6822))
// CS Name: ::UnityEngine.UIElements::VisualElementFlags
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
    __E_LayoutManual = static_cast<int32_t>(0x20),
    __E_CompositeRoot = static_cast<int32_t>(0x40),
    __E_RequireMeasureFunction = static_cast<int32_t>(0x80),
    __E_EnableViewDataPersistence = static_cast<int32_t>(0x100),
    __E_DisableClipping = static_cast<int32_t>(0x200),
    __E_NeedsAttachToPanelEvent = static_cast<int32_t>(0x400),
    __E_HierarchyDisplayed = static_cast<int32_t>(0x800),
    __E_StyleInitialized = static_cast<int32_t>(0x1000),
    __E_Init = static_cast<int32_t>(0x81f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualElementFlags_Unwrapped() const noexcept {
    return static_cast<__VisualElementFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualElementFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field WorldTransformDirty value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformDirty;

  /// @brief Field WorldTransformInverseDirty value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformInverseDirty;

  /// @brief Field WorldClipDirty value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldClipDirty;

  /// @brief Field BoundingBoxDirty value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::VisualElementFlags const BoundingBoxDirty;

  /// @brief Field WorldBoundingBoxDirty value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::VisualElementFlags const WorldBoundingBoxDirty;

  /// @brief Field LayoutManual value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::VisualElementFlags const LayoutManual;

  /// @brief Field CompositeRoot value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::VisualElementFlags const CompositeRoot;

  /// @brief Field RequireMeasureFunction value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::VisualElementFlags const RequireMeasureFunction;

  /// @brief Field EnableViewDataPersistence value: static_cast<int32_t>(0x100)
  static ::UnityEngine::UIElements::VisualElementFlags const EnableViewDataPersistence;

  /// @brief Field DisableClipping value: static_cast<int32_t>(0x200)
  static ::UnityEngine::UIElements::VisualElementFlags const DisableClipping;

  /// @brief Field NeedsAttachToPanelEvent value: static_cast<int32_t>(0x400)
  static ::UnityEngine::UIElements::VisualElementFlags const NeedsAttachToPanelEvent;

  /// @brief Field HierarchyDisplayed value: static_cast<int32_t>(0x800)
  static ::UnityEngine::UIElements::VisualElementFlags const HierarchyDisplayed;

  /// @brief Field StyleInitialized value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::UIElements::VisualElementFlags const StyleInitialized;

  /// @brief Field Init value: static_cast<int32_t>(0x81f)
  static ::UnityEngine::UIElements::VisualElementFlags const Init;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFlags, "UnityEngine.UIElements", "VisualElementFlags");
