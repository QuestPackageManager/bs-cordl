#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatchUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatchUtilities)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatchUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatchUtilities);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventDispatchUtilities
class CORDL_TYPE EventDispatchUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method DefaultDispatch, addr 0x6bccb84, size 0x34, virtual false, abstract: false, final false
  static inline void DefaultDispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method Disabled, addr 0x6bcfbb4, size 0x30, virtual false, abstract: false, final false
  static inline bool Disabled(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method DispatchToAssignedTarget, addr 0x6bd07ac, size 0x8c, virtual false, abstract: false, final false
  static inline void DispatchToAssignedTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToCachedElementUnderPointerOrPanelRoot, addr 0x6bd06cc, size 0xe0, virtual false, abstract: false, final false
  static inline void DispatchToCachedElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                                    ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToCapturingElement, addr 0x6bd08c0, size 0x110, virtual false, abstract: false, final false
  static inline bool DispatchToCapturingElement(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToCapturingElementOrElementUnderPointer, addr 0x6bd0838, size 0x88, virtual false, abstract: false, final false
  static inline void DispatchToCapturingElementOrElementUnderPointer(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                                     ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToElementUnderPointerOrPanelRoot, addr 0x6bd05e8, size 0xe4, virtual false, abstract: false, final false
  static inline void DispatchToElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                              ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToFocusedElementOrPanelRoot, addr 0x6bd0298, size 0x238, virtual false, abstract: false, final false
  static inline void DispatchToFocusedElementOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToPanelRoot, addr 0x6bd09d0, size 0x54, virtual false, abstract: false, final false
  static inline void DispatchToPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method HandleEventAcrossPropagationPath, addr 0x6bcef5c, size 0x7c4, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method HandleEventAcrossPropagationPathWithCompatibilityEvent, addr 0x6bce328, size 0xc34, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPathWithCompatibilityEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::EventBase* compatibilityEvt,
                                                                            ::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::VisualElement* target,
                                                                            bool isCapturingTarget);

  /// @brief Method HandleEventAtTargetAndDefaultPhase, addr 0x6bcf720, size 0x494, virtual false, abstract: false, final false
  static inline void HandleEventAtTargetAndDefaultPhase(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method HandleEvent_BubbleUpAllDefaultActions, addr 0x6bd00e0, size 0x1b8, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpAllDefaultActions(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                           ::UnityEngine::UIElements::VisualElement* element, bool disabled, bool isCapturingTarget);

  /// @brief Method HandleEvent_BubbleUpCallbacks, addr 0x6bd0004, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                   ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_BubbleUpHandleEvent, addr 0x6bd0088, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpHandleEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                     ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_DefaultAction, addr 0x6bcff44, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultAction(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::VisualElement* element,
                                               bool disabled);

  /// @brief Method HandleEvent_DefaultActionAtTarget, addr 0x6bcfeb0, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                       ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_TrickleDownCallbacks, addr 0x6bcffd8, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_TrickleDownHandleEvent, addr 0x6bd0030, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownHandleEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method PropagateEvent, addr 0x6bce1d8, size 0x150, virtual false, abstract: false, final false
  static inline void PropagateEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::VisualElement* target,
                                    bool isCapturingTarget);

  /// @brief Method PropagateToRemainingIMGUIContainerRecursive, addr 0x6bd0a24, size 0x3b4, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainerRecursive(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method PropagateToRemainingIMGUIContainers, addr 0x6bd0580, size 0x68, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainers(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* root);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatchUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDispatchUtilities(EventDispatchUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDispatchUtilities(EventDispatchUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatchUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatchUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatchUtilities*, "UnityEngine.UIElements", "EventDispatchUtilities");
