#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEventDispatchingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
CORDL_MODULE_EXPORT(MouseEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEventDispatchingStrategy);
// Dependencies System.Object, UnityEngine.UIElements.IEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseEventDispatchingStrategy
class CORDL_TYPE MouseEventDispatchingStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

  /// @brief Method CanDispatchEvent, addr 0x4a2625c, size 0x54, virtual true, abstract: false, final true
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x4a262b0, size 0x108, virtual true, abstract: false, final true
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* iPanel);

  /// @brief Method IsDone, addr 0x4a26710, size 0x48, virtual false, abstract: false, final false
  static inline bool IsDone(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::MouseEventDispatchingStrategy* New_ctor();

  /// @brief Method SendEventToIMGUIContainer, addr 0x4a26548, size 0x1c8, virtual false, abstract: false, final false
  static inline bool SendEventToIMGUIContainer(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SendEventToRegularTarget, addr 0x4a26494, size 0xb4, virtual false, abstract: false, final false
  static inline bool SendEventToRegularTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SendEventToTarget, addr 0x4a26458, size 0x3c, virtual false, abstract: false, final false
  static inline bool SendEventToTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method SetBestTargetForEvent, addr 0x4a263b8, size 0xa0, virtual false, abstract: false, final false
  static inline void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method UpdateElementUnderMouse, addr 0x4a26758, size 0x300, virtual false, abstract: false, final false
  static inline void UpdateElementUnderMouse(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                             ::ByRef<::UnityEngine::UIElements::VisualElement*> elementUnderMouse);

  /// @brief Method .ctor, addr 0x4a1e108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEventDispatchingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEventDispatchingStrategy(MouseEventDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEventDispatchingStrategy(MouseEventDispatchingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventDispatchingStrategy*, "UnityEngine.UIElements", "MouseEventDispatchingStrategy");
