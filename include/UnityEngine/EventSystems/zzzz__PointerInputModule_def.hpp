#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerInputModule)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
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
namespace UnityEngine::EventSystems {
class PointerInputModule_ButtonState;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerInputModule;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_ButtonState;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule_ButtonState);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule_MouseState);
// Dependencies System.Object, UnityEngine.EventSystems.PointerEventData::InputButton
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerInputModule/ButtonState
class CORDL_TYPE PointerInputModule_ButtonState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_button, put = set_button)) ::UnityEngine::EventSystems::PointerEventData_InputButton button;

  __declspec(property(get = get_eventData, put = set_eventData)) ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* eventData;

  /// @brief Field m_Button, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Button, put = __cordl_internal_set_m_Button)) ::UnityEngine::EventSystems::PointerEventData_InputButton m_Button;

  /// @brief Field m_EventData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventData, put = __cordl_internal_set_m_EventData)) ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* m_EventData;

  static inline ::UnityEngine::EventSystems::PointerInputModule_ButtonState* New_ctor();

  constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton const& __cordl_internal_get_m_Button() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton& __cordl_internal_get_m_Button();

  constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* const& __cordl_internal_get_m_EventData() const;

  constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*& __cordl_internal_get_m_EventData();

  constexpr void __cordl_internal_set_m_Button(::UnityEngine::EventSystems::PointerEventData_InputButton value);

  constexpr void __cordl_internal_set_m_EventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value);

  /// @brief Method .ctor, addr 0x4ad8cec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x4ad8cdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData_InputButton get_button();

  /// @brief Method get_eventData, addr 0x4ad8ccc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* get_eventData();

  /// @brief Method set_button, addr 0x4ad8ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value);

  /// @brief Method set_eventData, addr 0x4ad8cd4, size 0x8, virtual false, abstract: false, final false
  inline void set_eventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule_ButtonState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_ButtonState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule_ButtonState(PointerInputModule_ButtonState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_ButtonState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule_ButtonState(PointerInputModule_ButtonState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15213 };

  /// @brief Field m_Button, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_InputButton ___m_Button;

  /// @brief Field m_EventData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* ___m_EventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule_ButtonState, ___m_Button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule_ButtonState, ___m_EventData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule_ButtonState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerInputModule/MouseState
class CORDL_TYPE PointerInputModule_MouseState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_TrackedButtons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedButtons,
                      put = __cordl_internal_set_m_TrackedButtons)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* m_TrackedButtons;

  /// @brief Method AnyPressesThisFrame, addr 0x4ad8cf4, size 0xbc, virtual false, abstract: false, final false
  inline bool AnyPressesThisFrame();

  /// @brief Method AnyReleasesThisFrame, addr 0x4ad8dc0, size 0xc0, virtual false, abstract: false, final false
  inline bool AnyReleasesThisFrame();

  /// @brief Method GetButtonState, addr 0x4ad8e94, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerInputModule_ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button);

  static inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* New_ctor();

  /// @brief Method SetButtonState, addr 0x4ad8274, size 0x38, virtual false, abstract: false, final false
  inline void SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton,
                             ::UnityEngine::EventSystems::PointerEventData* data);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* const& __cordl_internal_get_m_TrackedButtons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>*& __cordl_internal_get_m_TrackedButtons();

  constexpr void __cordl_internal_set_m_TrackedButtons(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* value);

  /// @brief Method .ctor, addr 0x4ad8c50, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule_MouseState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_MouseState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule_MouseState(PointerInputModule_MouseState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_MouseState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule_MouseState(PointerInputModule_MouseState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15214 };

  /// @brief Field m_TrackedButtons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* ___m_TrackedButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule_MouseState, ___m_TrackedButtons) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule_MouseState, 0x18>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies System.Object, UnityEngine.EventSystems.PointerEventData::FramePressState
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
class CORDL_TYPE PointerInputModule_MouseButtonEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonData, put = __cordl_internal_set_buttonData)) ::UnityEngine::EventSystems::PointerEventData* buttonData;

  /// @brief Field buttonState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonState, put = __cordl_internal_set_buttonState)) ::UnityEngine::EventSystems::PointerEventData_FramePressState buttonState;

  static inline ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* New_ctor();

  /// @brief Method PressedThisFrame, addr 0x4ad8db0, size 0x10, virtual false, abstract: false, final false
  inline bool PressedThisFrame();

  /// @brief Method ReleasedThisFrame, addr 0x4ad8e80, size 0x14, virtual false, abstract: false, final false
  inline bool ReleasedThisFrame();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_buttonData() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_buttonData();

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& __cordl_internal_get_buttonState() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& __cordl_internal_get_buttonState();

  constexpr void __cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState value);

  /// @brief Method .ctor, addr 0x4ad9024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule_MouseButtonEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_MouseButtonEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule_MouseButtonEventData(PointerInputModule_MouseButtonEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule_MouseButtonEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule_MouseButtonEventData(PointerInputModule_MouseButtonEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15215 };

  /// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_FramePressState ___buttonState;

  /// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___buttonData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData, ___buttonState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData, ___buttonData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.BaseInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerInputModule
class CORDL_TYPE PointerInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  using ButtonState = ::UnityEngine::EventSystems::PointerInputModule_ButtonState;

  using MouseButtonEventData = ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData;

  using MouseState = ::UnityEngine::EventSystems::PointerInputModule_MouseState;

  /// @brief Field m_MouseState, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseState, put = __cordl_internal_set_m_MouseState)) ::UnityEngine::EventSystems::PointerInputModule_MouseState* m_MouseState;

  /// @brief Field m_PointerData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerData,
                      put = __cordl_internal_set_m_PointerData)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* m_PointerData;

  /// @brief Method ClearSelection, addr 0x4ad869c, size 0x1c0, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method CopyFromTo, addr 0x4ad7e44, size 0x88, virtual false, abstract: false, final false
  inline void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to);

  /// @brief Method DeselectIfSelectionChanged, addr 0x4ad8ac4, size 0xec, virtual false, abstract: false, final false
  inline void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);

  /// @brief Method GetLastPointerEventData, addr 0x4ad82ac, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);

  /// @brief Method GetMousePointerEventData, addr 0x4ad7f48, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData();

  /// @brief Method GetMousePointerEventData, addr 0x4ad7f5c, size 0x318, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData(int32_t id);

  /// @brief Method GetPointerData, addr 0x4ad7980, size 0xec, virtual false, abstract: false, final false
  inline bool GetPointerData(int32_t id, ::ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);

  /// @brief Method GetTouchPointerEventData, addr 0x4ad7ac8, size 0x37c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch input, ::ByRef<bool> pressed, ::ByRef<bool> released);

  /// @brief Method IsPointerOverGameObject, addr 0x4ad8600, size 0x9c, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::UnityEngine::EventSystems::PointerInputModule* New_ctor();

  /// @brief Method ProcessDrag, addr 0x4ad8340, size 0x2c0, virtual true, abstract: false, final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessMove, addr 0x4ad82fc, size 0x44, virtual true, abstract: false, final false
  inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method RemovePointerData, addr 0x4ad7a6c, size 0x5c, virtual false, abstract: false, final false
  inline void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method ShouldStartDrag, addr 0x4ad82cc, size 0x30, virtual false, abstract: false, final false
  static inline bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold);

  /// @brief Method StateForMouseButton, addr 0x4ad7ecc, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(int32_t buttonId);

  /// @brief Method ToString, addr 0x4ad885c, size 0x268, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState* const& __cordl_internal_get_m_MouseState() const;

  constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState*& __cordl_internal_get_m_MouseState();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_m_PointerData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_m_PointerData();

  constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::EventSystems::PointerInputModule_MouseState* value);

  constexpr void __cordl_internal_set_m_PointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method .ctor, addr 0x4ad8bb0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule(PointerInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule(PointerInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15216 };

  /// @brief Field kFakeTouchesId offset 0xffffffff size 0x4
  static constexpr int32_t kFakeTouchesId{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field kMouseLeftId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseLeftId{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kMouseMiddleId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseMiddleId{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field kMouseRightId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseRightId{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field m_PointerData, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ___m_PointerData;

  /// @brief Field m_MouseState, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerInputModule_MouseState* ___m_MouseState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule, ___m_PointerData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule, ___m_MouseState) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule, 0x68>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule*, "UnityEngine.EventSystems", "PointerInputModule");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule_ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule_ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule_MouseState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule_MouseState*, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
