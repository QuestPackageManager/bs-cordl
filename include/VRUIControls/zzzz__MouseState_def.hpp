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
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
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
// Type: VRUIControls::MouseState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// CS Name: ::VRUIControls::MouseState*
class CORDL_TYPE MouseState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _trackedButtons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackedButtons, put = __cordl_internal_set__trackedButtons)) ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* _trackedButtons;

  /// @brief Method AnyPressesThisFrame, addr 0x4a85ccc, size 0xa8, virtual false, abstract: false, final false
  inline bool AnyPressesThisFrame();

  /// @brief Method AnyReleasesThisFrame, addr 0x4a85d74, size 0xac, virtual false, abstract: false, final false
  inline bool AnyReleasesThisFrame();

  /// @brief Method GetButtonState, addr 0x4a85e20, size 0x194, virtual false, abstract: false, final false
  inline ::VRUIControls::ButtonState* GetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button);

  static inline ::VRUIControls::MouseState* New_ctor();

  /// @brief Method SetButtonState, addr 0x4a85fb4, size 0x38, virtual false, abstract: false, final false
  inline void SetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button, ::UnityEngine::EventSystems::__PointerEventData__FramePressState stateForMouseButton,
                             ::UnityEngine::EventSystems::PointerEventData* data);

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*& __cordl_internal_get__trackedButtons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*> const& __cordl_internal_get__trackedButtons() const;

  constexpr void __cordl_internal_set__trackedButtons(::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* value);

  /// @brief Method .ctor, addr 0x4a85fec, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Field _trackedButtons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* ____trackedButtons;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18165 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::MouseState, 0x18>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::MouseState, ____trackedButtons) == 0x10, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::MouseState);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseState*, "VRUIControls", "MouseState");
