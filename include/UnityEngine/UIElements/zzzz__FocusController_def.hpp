#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FocusController)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
struct FocusController_FocusedElement;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct FocusController_FocusedElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusController);
MARK_VAL_T(::UnityEngine::UIElements::FocusController_FocusedElement);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FocusController/FocusedElement
struct CORDL_TYPE FocusController_FocusedElement {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusController_FocusedElement();

  // Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_FocusedElement", ty:
  // "::UnityEngine::UIElements::Focusable*", modifiers: "", def_value: None }]
  constexpr FocusController_FocusedElement(::UnityEngine::UIElements::VisualElement* m_SubTreeRoot, ::UnityEngine::UIElements::Focusable* m_FocusedElement) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_SubTreeRoot, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_SubTreeRoot;

  /// @brief Field m_FocusedElement, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* m_FocusedElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FocusController_FocusedElement, m_SubTreeRoot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController_FocusedElement, m_FocusedElement) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusController_FocusedElement, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusController
class CORDL_TYPE FocusController : public ::System::Object {
public:
  // Declarations
  using FocusedElement = ::UnityEngine::UIElements::FocusController_FocusedElement;

  /// @brief Field <focusRing>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__focusRing_k__BackingField, put = __cordl_internal_set__focusRing_k__BackingField)) ::UnityEngine::UIElements::IFocusRing* _focusRing_k__BackingField;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__imguiKeyboardControl_k__BackingField,
                      put = __cordl_internal_set__imguiKeyboardControl_k__BackingField)) int32_t _imguiKeyboardControl_k__BackingField;

  __declspec(property(get = get_focusRing)) ::UnityEngine::UIElements::IFocusRing* focusRing;

  __declspec(property(get = get_focusedElement)) ::UnityEngine::UIElements::Focusable* focusedElement;

  __declspec(property(get = get_imguiKeyboardControl, put = set_imguiKeyboardControl)) int32_t imguiKeyboardControl;

  /// @brief Field m_FocusedElements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusedElements,
                      put = __cordl_internal_set_m_FocusedElements)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastFocusedElement, put = __cordl_internal_set_m_LastFocusedElement)) ::UnityEngine::UIElements::Focusable* m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPendingFocusedElement,
                      put = __cordl_internal_set_m_LastPendingFocusedElement)) ::UnityEngine::UIElements::Focusable* m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PendingFocusCount, put = __cordl_internal_set_m_PendingFocusCount)) int32_t m_PendingFocusCount;

  /// @brief Field m_SelectedTextElement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedTextElement, put = __cordl_internal_set_m_SelectedTextElement)) ::UnityEngine::UIElements::TextElement* m_SelectedTextElement;

  __declspec(property(put = set_selectedTextElement)) ::UnityEngine::UIElements::TextElement* selectedTextElement;

  /// @brief Method AboutToGrabFocus, addr 0x4a37b98, size 0x1c0, virtual false, abstract: false, final false
  inline void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                               ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method AboutToReleaseFocus, addr 0x4a37818, size 0x1c0, virtual false, abstract: false, final false
  inline void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                                  ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method Blur, addr 0x4a364fc, size 0x58, virtual false, abstract: false, final false
  inline void Blur(::UnityEngine::UIElements::Focusable* focusable, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method BlurLastFocusedElement, addr 0x4a37520, size 0x94, virtual false, abstract: false, final false
  inline void BlurLastFocusedElement();

  /// @brief Method DoFocusChange, addr 0x4a375b4, size 0x178, virtual false, abstract: false, final false
  inline void DoFocusChange(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method FocusNextInDirection, addr 0x4a3772c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection* direction);

  /// @brief Method GetFocusableParentForPointerEvent, addr 0x4a37fdc, size 0x108, virtual false, abstract: false, final false
  inline bool GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable* target, ::ByRef<::UnityEngine::UIElements::Focusable*> effectiveTarget);

  /// @brief Method GetLeafFocusedElement, addr 0x4a24ca4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement();

  /// @brief Method GetRetargetedFocusedElement, addr 0x4a36ff0, size 0x214, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// @brief Method GrabFocus, addr 0x4a37d58, size 0x1cc, virtual false, abstract: false, final false
  inline void GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                        bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method IsFocused, addr 0x4a37240, size 0x18c, virtual false, abstract: false, final false
  inline bool IsFocused(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method IsLocalElement, addr 0x4a37204, size 0x3c, virtual false, abstract: false, final false
  inline bool IsLocalElement(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method IsPendingFocus, addr 0x4a373cc, size 0xcc, virtual false, abstract: false, final false
  inline bool IsPendingFocus(::UnityEngine::UIElements::Focusable* f);

  static inline ::UnityEngine::UIElements::FocusController* New_ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method ProcessPendingFocusChange, addr 0x4a291e4, size 0x1c, virtual false, abstract: false, final false
  inline void ProcessPendingFocusChange(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method ReevaluateFocus, addr 0x4a37f24, size 0xb8, virtual false, abstract: false, final false
  inline void ReevaluateFocus();

  /// @brief Method ReleaseFocus, addr 0x4a379d8, size 0x1c0, virtual false, abstract: false, final false
  inline void ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                           ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SetFocusToLastFocusedElement, addr 0x4a37498, size 0x88, virtual false, abstract: false, final false
  inline void SetFocusToLastFocusedElement();

  /// @brief Method SwitchFocus, addr 0x4a3640c, size 0xb8, virtual false, abstract: false, final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocus, addr 0x4a36af4, size 0x294, virtual false, abstract: false, final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction, bool bIsFocusDelegated,
                          ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocusOnEvent, addr 0x4a366f0, size 0x290, virtual false, abstract: false, final false
  inline void SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SyncIMGUIFocus, addr 0x4a380f4, size 0xcc, virtual false, abstract: false, final false
  inline void SyncIMGUIFocus(int32_t imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, bool forceSwitch);

  constexpr ::UnityEngine::UIElements::IFocusRing* const& __cordl_internal_get__focusRing_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IFocusRing*& __cordl_internal_get__focusRing_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__imguiKeyboardControl_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__imguiKeyboardControl_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* const& __cordl_internal_get_m_FocusedElements() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>*& __cordl_internal_get_m_FocusedElements();

  constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_LastFocusedElement() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastFocusedElement();

  constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_LastPendingFocusedElement() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastPendingFocusedElement();

  constexpr int32_t const& __cordl_internal_get_m_PendingFocusCount() const;

  constexpr int32_t& __cordl_internal_get_m_PendingFocusCount();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_SelectedTextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_SelectedTextElement();

  constexpr void __cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing* value);

  constexpr void __cordl_internal_set__imguiKeyboardControl_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* value);

  constexpr void __cordl_internal_set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_PendingFocusCount(int32_t value);

  constexpr void __cordl_internal_set_m_SelectedTextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x4a36e4c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method get_focusRing, addr 0x4a36edc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IFocusRing* get_focusRing();

  /// @brief Method get_focusedElement, addr 0x4a36fac, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_focusedElement();

  /// @brief Method get_imguiKeyboardControl, addr 0x4a380e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_imguiKeyboardControl();

  /// @brief Method set_imguiKeyboardControl, addr 0x4a380ec, size 0x8, virtual false, abstract: false, final false
  inline void set_imguiKeyboardControl(int32_t value);

  /// @brief Method set_selectedTextElement, addr 0x4a36ee4, size 0xc8, virtual false, abstract: false, final false
  inline void set_selectedTextElement(::UnityEngine::UIElements::TextElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusController(FocusController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusController(FocusController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5956 };

  /// @brief Field <focusRing>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IFocusRing* ____focusRing_k__BackingField;

  /// @brief Field m_SelectedTextElement, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_SelectedTextElement;

  /// @brief Field m_FocusedElements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* ___m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_PendingFocusCount;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____imguiKeyboardControl_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____focusRing_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_SelectedTextElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_FocusedElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastFocusedElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastPendingFocusedElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_PendingFocusCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____imguiKeyboardControl_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusController, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController_FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
