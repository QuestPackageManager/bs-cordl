#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusController);
MARK_VAL_T(::UnityEngine::UIElements::__FocusController__FocusedElement);
// Type: ::FocusedElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::FocusController::FocusedElement
struct CORDL_TYPE __FocusController__FocusedElement {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FocusController__FocusedElement();

  // Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_FocusedElement", ty:
  // "::UnityEngine::UIElements::Focusable*", modifiers: "", def_value: None }]
  constexpr __FocusController__FocusedElement(::UnityEngine::UIElements::VisualElement* m_SubTreeRoot, ::UnityEngine::UIElements::Focusable* m_FocusedElement) noexcept;

  /// @brief Field m_SubTreeRoot, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_SubTreeRoot;

  /// @brief Field m_FocusedElement, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* m_FocusedElement;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusController__FocusedElement, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__FocusController__FocusedElement, m_SubTreeRoot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__FocusController__FocusedElement, m_FocusedElement) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusController*
class CORDL_TYPE FocusController : public ::System::Object {
public:
  // Declarations
  using FocusedElement = ::UnityEngine::UIElements::__FocusController__FocusedElement;

  /// @brief Field <focusRing>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__focusRing_k__BackingField, put = __cordl_internal_set__focusRing_k__BackingField))::UnityEngine::UIElements::IFocusRing* _focusRing_k__BackingField;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__imguiKeyboardControl_k__BackingField,
                      put = __cordl_internal_set__imguiKeyboardControl_k__BackingField)) int32_t _imguiKeyboardControl_k__BackingField;

  __declspec(property(get = get_focusRing))::UnityEngine::UIElements::IFocusRing* focusRing;

  __declspec(property(get = get_focusedElement))::UnityEngine::UIElements::Focusable* focusedElement;

  __declspec(property(get = get_imguiKeyboardControl, put = set_imguiKeyboardControl)) int32_t imguiKeyboardControl;

  /// @brief Field m_FocusedElements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusedElements,
                      put = __cordl_internal_set_m_FocusedElements))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastFocusedElement, put = __cordl_internal_set_m_LastFocusedElement))::UnityEngine::UIElements::Focusable* m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPendingFocusedElement, put = __cordl_internal_set_m_LastPendingFocusedElement))::UnityEngine::UIElements::Focusable* m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PendingFocusCount, put = __cordl_internal_set_m_PendingFocusCount)) int32_t m_PendingFocusCount;

  /// @brief Method AboutToGrabFocus, addr 0x354f480, size 0x1c4, virtual false, abstract: false, final false
  inline void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                               ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method AboutToReleaseFocus, addr 0x354f0f8, size 0x1c4, virtual false, abstract: false, final false
  inline void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                                  ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method Blur, addr 0x354dd54, size 0x58, virtual false, abstract: false, final false
  inline void Blur(::UnityEngine::UIElements::Focusable* focusable, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method BlurLastFocusedElement, addr 0x354edf4, size 0x88, virtual false, abstract: false, final false
  inline void BlurLastFocusedElement();

  /// @brief Method DoFocusChange, addr 0x354ee7c, size 0x190, virtual false, abstract: false, final false
  inline void DoFocusChange(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method FocusNextInDirection, addr 0x354f00c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection* direction);

  /// @brief Method GetFocusableParentForPointerEvent, addr 0x354f8d4, size 0x104, virtual false, abstract: false, final false
  inline bool GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable* target, ByRef<::UnityEngine::UIElements::Focusable*> effectiveTarget);

  /// @brief Method GetLeafFocusedElement, addr 0x354ec18, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement();

  /// @brief Method GetRetargetedFocusedElement, addr 0x354e864, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// @brief Method GrabFocus, addr 0x354f644, size 0x1d0, virtual false, abstract: false, final false
  inline void GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                        bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method IsFocused, addr 0x354eaa4, size 0x174, virtual false, abstract: false, final false
  inline bool IsFocused(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method IsLocalElement, addr 0x354ea68, size 0x3c, virtual false, abstract: false, final false
  inline bool IsLocalElement(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method IsPendingFocus, addr 0x354ecbc, size 0xb0, virtual false, abstract: false, final false
  inline bool IsPendingFocus(::UnityEngine::UIElements::Focusable* f);

  static inline ::UnityEngine::UIElements::FocusController* New_ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method ReevaluateFocus, addr 0x354f814, size 0xc0, virtual false, abstract: false, final false
  inline void ReevaluateFocus();

  /// @brief Method ReleaseFocus, addr 0x354f2bc, size 0x1c4, virtual false, abstract: false, final false
  inline void ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                           ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SetFocusToLastFocusedElement, addr 0x354ed6c, size 0x88, virtual false, abstract: false, final false
  inline void SetFocusToLastFocusedElement();

  /// @brief Method SwitchFocus, addr 0x354dc64, size 0xb8, virtual false, abstract: false, final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocus, addr 0x354e41c, size 0x294, virtual false, abstract: false, final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction, bool bIsFocusDelegated,
                          ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocusOnEvent, addr 0x354dfbc, size 0x2ec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SyncIMGUIFocus, addr 0x354f9e8, size 0xcc, virtual false, abstract: false, final false
  inline void SyncIMGUIFocus(int32_t imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, bool forceSwitch);

  constexpr ::UnityEngine::UIElements::IFocusRing*& __cordl_internal_get__focusRing_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IFocusRing*> const& __cordl_internal_get__focusRing_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__imguiKeyboardControl_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__imguiKeyboardControl_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*& __cordl_internal_get_m_FocusedElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*> const&
  __cordl_internal_get_m_FocusedElements() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastFocusedElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __cordl_internal_get_m_LastFocusedElement() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_LastPendingFocusedElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __cordl_internal_get_m_LastPendingFocusedElement() const;

  constexpr int32_t const& __cordl_internal_get_m_PendingFocusCount() const;

  constexpr int32_t& __cordl_internal_get_m_PendingFocusCount();

  constexpr void __cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing* value);

  constexpr void __cordl_internal_set__imguiKeyboardControl_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* value);

  constexpr void __cordl_internal_set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_PendingFocusCount(int32_t value);

  /// @brief Method .ctor, addr 0x354e780, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method get_focusRing, addr 0x354e818, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IFocusRing* get_focusRing();

  /// @brief Method get_focusedElement, addr 0x354e820, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_focusedElement();

  /// @brief Method get_imguiKeyboardControl, addr 0x354f9d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_imguiKeyboardControl();

  /// @brief Method set_imguiKeyboardControl, addr 0x354f9e0, size 0x8, virtual false, abstract: false, final false
  inline void set_imguiKeyboardControl(int32_t value);

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

  /// @brief Field <focusRing>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IFocusRing* ____focusRing_k__BackingField;

  /// @brief Field m_FocusedElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* ___m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_PendingFocusCount;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____imguiKeyboardControl_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusController, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____focusRing_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_FocusedElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastFocusedElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_LastPendingFocusedElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ___m_PendingFocusCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusController, ____imguiKeyboardControl_k__BackingField) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusController__FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
