#pragma once
// IWYU pragma private; include "VRUIControls/MouseState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MouseState)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_FramePressState;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_InputButton;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace VRUIControls {
class ButtonState;
}
// Forward declare root types
namespace VRUIControls {
class MouseState;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::MouseState);
// Dependencies System.Object
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.MouseState
class CORDL_TYPE MouseState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _trackedButtons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackedButtons, put = __cordl_internal_set__trackedButtons)) ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* _trackedButtons;

  /// @brief Method AnyPressesThisFrame, addr 0x6c6bc38, size 0xb4, virtual false, abstract: false, final false
  inline bool AnyPressesThisFrame();

  /// @brief Method AnyReleasesThisFrame, addr 0x6c6bcec, size 0xb8, virtual false, abstract: false, final false
  inline bool AnyReleasesThisFrame();

  /// @brief Method GetButtonState, addr 0x6c6bda4, size 0x190, virtual false, abstract: false, final false
  inline ::VRUIControls::ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button);

  static inline ::VRUIControls::MouseState* New_ctor();

  /// @brief Method SetButtonState, addr 0x6c6bf34, size 0x34, virtual false, abstract: false, final false
  inline void SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton,
                             ::UnityEngine::EventSystems::PointerEventData* data);

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* const& __cordl_internal_get__trackedButtons() const;

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*& __cordl_internal_get__trackedButtons();

  constexpr void __cordl_internal_set__trackedButtons(::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* value);

  /// @brief Method .ctor, addr 0x6c6bf68, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseState(MouseState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseState(MouseState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22095 };

  /// @brief Field _trackedButtons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* ____trackedButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::MouseState, ____trackedButtons) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::MouseState, 0x18>, "Size mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::MouseState);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseState*, "VRUIControls", "MouseState");
