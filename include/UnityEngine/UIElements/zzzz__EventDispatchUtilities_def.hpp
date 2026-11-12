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
  /// @brief Method DefaultDispatch, addr 0x7263c28, size 0x34, virtual false, abstract: false, final false
  static inline void DefaultDispatch(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method Disabled, addr 0x7266c8c, size 0x30, virtual false, abstract: false, final false
  static inline bool Disabled(/* [NotNull] */ ::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method DispatchToAssignedTarget, addr 0x72677a0, size 0x8c, virtual false, abstract: false, final false
  static inline void DispatchToAssignedTarget(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToCapturingElement, addr 0x7267870, size 0x1ec, virtual false, abstract: false, final false
  static inline bool DispatchToCapturingElement(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId);

  /// @brief Method DispatchToCapturingElementOrElementUnderPointer, addr 0x726782c, size 0x44, virtual false, abstract: false, final false
  static inline void DispatchToCapturingElementOrElementUnderPointer(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                     int32_t pointerId, ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToElementUnderPointerOrPanelRoot, addr 0x72676c0, size 0xe0, virtual false, abstract: false, final false
  static inline void DispatchToElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                              ::UnityEngine::Vector2 position);

  /// @brief Method DispatchToFocusedElementOrPanelRoot, addr 0x7267370, size 0x238, virtual false, abstract: false, final false
  static inline void DispatchToFocusedElementOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method DispatchToPanelRoot, addr 0x7267a5c, size 0x54, virtual false, abstract: false, final false
  static inline void DispatchToPanelRoot(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method HandleEventAcrossPropagationPath, addr 0x7265fe8, size 0x7c4, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method HandleEventAcrossPropagationPathWithCompatibilityEvent, addr 0x72653b4, size 0xc34, virtual false, abstract: false, final false
  static inline void HandleEventAcrossPropagationPathWithCompatibilityEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::EventBase* compatibilityEvt,
                                                                            /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                            /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method HandleEventAtTargetAndDefaultPhase, addr 0x72667fc, size 0x490, virtual false, abstract: false, final false
  static inline void HandleEventAtTargetAndDefaultPhase(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method HandleEvent_BubbleUpAllDefaultActions, addr 0x72671b8, size 0x1b8, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpAllDefaultActions(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                           /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled, bool isCapturingTarget);

  /// @brief Method HandleEvent_BubbleUpCallbacks, addr 0x72670dc, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpCallbacks(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                   /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_BubbleUpHandleEvent, addr 0x7267160, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_BubbleUpHandleEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                     /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_DefaultAction, addr 0x726701c, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultAction(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                               /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_DefaultActionAtTarget, addr 0x7266f88, size 0x94, virtual false, abstract: false, final false
  static inline void HandleEvent_DefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                       /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method HandleEvent_TrickleDownCallbacks, addr 0x72670b0, size 0x2c, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownCallbacks(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                      /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method HandleEvent_TrickleDownHandleEvent, addr 0x7267108, size 0x58, virtual false, abstract: false, final false
  static inline void HandleEvent_TrickleDownHandleEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                        /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* element, bool disabled);

  /// @brief Method PropagateEvent, addr 0x7265258, size 0x15c, virtual false, abstract: false, final false
  static inline void PropagateEvent(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                    /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget);

  /// @brief Method PropagateToRemainingIMGUIContainerRecursive, addr 0x7267ab0, size 0x3b4, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainerRecursive(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method PropagateToRemainingIMGUIContainers, addr 0x7267658, size 0x68, virtual false, abstract: false, final false
  static inline void PropagateToRemainingIMGUIContainers(::UnityEngine::UIElements::EventBase* evt, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method SendEventDirectlyToTarget, addr 0x72667ac, size 0x50, virtual false, abstract: false, final false
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
