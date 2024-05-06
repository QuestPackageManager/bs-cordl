#pragma once
// IWYU pragma private; include "VRUIControls/ButtonState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ButtonState)
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
}
namespace VRUIControls {
class MouseButtonEventData;
}
// Forward declare root types
namespace VRUIControls {
class ButtonState;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::ButtonState);
// Type: VRUIControls::ButtonState
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// CS Name: ::VRUIControls::ButtonState*
class CORDL_TYPE ButtonState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _button, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityEngine::EventSystems::__PointerEventData__InputButton _button;

  /// @brief Field _eventData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventData, put = __cordl_internal_set__eventData))::VRUIControls::MouseButtonEventData* _eventData;

  /// @brief Field _pressedValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__pressedValue, put = __cordl_internal_set__pressedValue)) float_t _pressedValue;

  __declspec(property(get = get_button, put = set_button))::UnityEngine::EventSystems::__PointerEventData__InputButton button;

  __declspec(property(get = get_eventData, put = set_eventData))::VRUIControls::MouseButtonEventData* eventData;

  __declspec(property(get = get_pressedValue, put = set_pressedValue)) float_t pressedValue;

  static inline ::VRUIControls::ButtonState* New_ctor();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __cordl_internal_get__button() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __cordl_internal_get__button();

  constexpr ::VRUIControls::MouseButtonEventData*& __cordl_internal_get__eventData();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseButtonEventData*> const& __cordl_internal_get__eventData() const;

  constexpr float_t const& __cordl_internal_get__pressedValue() const;

  constexpr float_t& __cordl_internal_get__pressedValue();

  constexpr void __cordl_internal_set__button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr void __cordl_internal_set__eventData(::VRUIControls::MouseButtonEventData* value);

  constexpr void __cordl_internal_set__pressedValue(float_t value);

  /// @brief Method .ctor, addr 0x3608e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x3608de8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerEventData__InputButton get_button();

  /// @brief Method get_eventData, addr 0x3608dd8, size 0x8, virtual false, abstract: false, final false
  inline ::VRUIControls::MouseButtonEventData* get_eventData();

  /// @brief Method get_pressedValue, addr 0x3608df8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedValue();

  /// @brief Method set_button, addr 0x3608df0, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  /// @brief Method set_eventData, addr 0x3608de0, size 0x8, virtual false, abstract: false, final false
  inline void set_eventData(::VRUIControls::MouseButtonEventData* value);

  /// @brief Method set_pressedValue, addr 0x3608e00, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedValue(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonState(ButtonState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonState(ButtonState const&) = delete;

  /// @brief Field _button, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ____button;

  /// @brief Field _eventData, offset: 0x18, size: 0x8, def value: None
  ::VRUIControls::MouseButtonEventData* ____eventData;

  /// @brief Field _pressedValue, offset: 0x20, size: 0x4, def value: None
  float_t ____pressedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::ButtonState, 0x28>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::ButtonState, ____button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::ButtonState, ____eventData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::ButtonState, ____pressedValue) == 0x20, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::ButtonState*, "VRUIControls", "ButtonState");
