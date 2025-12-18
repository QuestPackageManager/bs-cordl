#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeWorldSpaceHierarchyFlagsUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualTreeHierarchyFlagsUpdater_def.hpp"
CORDL_MODULE_EXPORT(VisualTreeWorldSpaceHierarchyFlagsUpdater)
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeWorldSpaceHierarchyFlagsUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater);
// Dependencies UnityEngine.UIElements.VisualTreeHierarchyFlagsUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeWorldSpaceHierarchyFlagsUpdater
class CORDL_TYPE VisualTreeWorldSpaceHierarchyFlagsUpdater : public ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater {
public:
  // Declarations
  /// @brief Method GetParentMustDirtyFlags, addr 0x6b029cc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementFlags GetParentMustDirtyFlags(::UnityEngine::UIElements::VisualElement* ve);

  static inline ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x6b02894, size 0x138, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x6b02a00, size 0x4, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x6b02a04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeWorldSpaceHierarchyFlagsUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeWorldSpaceHierarchyFlagsUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeWorldSpaceHierarchyFlagsUpdater(VisualTreeWorldSpaceHierarchyFlagsUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeWorldSpaceHierarchyFlagsUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeWorldSpaceHierarchyFlagsUpdater(VisualTreeWorldSpaceHierarchyFlagsUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5253 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*, "UnityEngine.UIElements", "VisualTreeWorldSpaceHierarchyFlagsUpdater");
