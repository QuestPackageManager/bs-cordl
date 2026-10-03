#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatchUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::UIElements::EventDispatchUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventDispatchUtilities*, "UnityEngine.UIElements", "EventDispatchUtilities");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventDispatchUtilities
class CORDL_TYPE EventDispatchUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method DefaultDispatch, addr 0x7225c14, size 0x34, virtual false, abstract: false, final false
  static inline void DefaultDispatch(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method Disabled, addr 0x7228c78, size 0x30, virtual false, abstract: false, final false
  static inline bool Disabled(/* [NotNull] */ ::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method DispatchToAssignedTarget, addr 0x722978c, size 0x8c, virtual false, abstract: false, final false
  static inline void DispatchToAssignedTarget(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToCapturingElement, addr 0x722985c, size 0x1ec, virtual false, abstract: false, final false
  static inline bool DispatchToCapturingElement(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId);

  /// @brief Method DispatchToCapturingElementOrElementUnderPointer, addr 0x7229818, size 0x44, virtual false, abstract: false, final false
  static inline void DispatchToCapturingElementOrElementUnderPointer(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                     int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToElementUnderPointerOrPanelRoot, addr 0x72296ac, size 0xe0, virtual false, abstract: false, final false
  static inline void DispatchToElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                              ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToFocusedElementOrPanelRoot, addr 0x722935c, size 0x238, virtual false, abstract: false, final false
  static inline void DispatchToFocusedElementOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToPanelRoot, addr 0x7229a48, size 0x54, virtual false, abstract: false, final false
  static inline void DispatchToPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method HandleEventAcrossPropagationPath, addr 0x7227fd4, size 0x7c4, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method HandleEventAcrossPropagationPathWithCompatibilityEvent, addr 0x72273a0, size 0xc34, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPathWithCompatibilityEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::EventBase* compatibilityEvt,
                                                                            /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                            /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method HandleEventAtTargetAndDefaultPhase, addr 0x72287e8, size 0x490, virtual false, abstract: false, final false
  static inline void HandleEventAtTargetAndDefaultPhase(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method HandleEvent_BubbleUpAllDefaultActions, addr 0x72291a4, size 0x1b8, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpAllDefaultActions(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                           /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled, bool isCapturingTarget);

  /// @brief Method HandleEvent_BubbleUpCallbacks, addr 0x72290c8, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpCallbacks(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                   /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_BubbleUpHandleEvent, addr 0x722914c, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpHandleEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                     /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_DefaultAction, addr 0x7229008, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultAction(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                               /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_DefaultActionAtTarget, addr 0x7228f74, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                       /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_TrickleDownCallbacks, addr 0x722909c, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownCallbacks(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_TrickleDownHandleEvent, addr 0x72290f4, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownHandleEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method PropagateEvent, addr 0x7227244, size 0x15c, virtual false, abstract: false, final false
  static inline void PropagateEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                    /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method PropagateToRemainingIMGUIContainerRecursive, addr 0x7229a9c, size 0x3b4, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainerRecursive(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method PropagateToRemainingIMGUIContainers, addr 0x7229644, size 0x68, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainers(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method SendEventDirectlyToTarget, addr 0x7228798, size 0x50, virtual false, abstract: false, final false
  static inline void SendEventDirectlyToTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                               /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatchUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDispatchUtilities(EventDispatchUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDispatchUtilities(EventDispatchUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::EventDispatchUtilities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
