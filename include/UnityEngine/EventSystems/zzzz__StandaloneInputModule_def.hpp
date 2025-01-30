#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/StandaloneInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneInputModule)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class PointerInputModule_MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
struct StandaloneInputModule_InputMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct StandaloneInputModule_InputMode;
}
namespace UnityEngine::EventSystems {
class StandaloneInputModule;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::StandaloneInputModule_InputMode);
MARK_REF_PTR_T(::UnityEngine::EventSystems::StandaloneInputModule);
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.StandaloneInputModule/InputMode
struct CORDL_TYPE StandaloneInputModule_InputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StandaloneInputModule_InputMode_Unwrapped
  enum struct __StandaloneInputModule_InputMode_Unwrapped : int32_t {
    __E_Mouse = static_cast<int32_t>(0x0),
    __E_Buttons = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StandaloneInputModule_InputMode_Unwrapped() const noexcept {
    return static_cast<__StandaloneInputModule_InputMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneInputModule_InputMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandaloneInputModule_InputMode(int32_t value__) noexcept;

  /// @brief Field Buttons value: I32(1)
  static ::UnityEngine::EventSystems::StandaloneInputModule_InputMode const Buttons;

  /// @brief Field Mouse value: I32(0)
  static ::UnityEngine::EventSystems::StandaloneInputModule_InputMode const Mouse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule_InputMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::StandaloneInputModule_InputMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.PointerInputModule, UnityEngine.Vector2
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.StandaloneInputModule
class CORDL_TYPE StandaloneInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
  // Declarations
  using InputMode = ::UnityEngine::EventSystems::StandaloneInputModule_InputMode;

  __declspec(property(get = get_allowActivationOnMobileDevice, put = set_allowActivationOnMobileDevice)) bool allowActivationOnMobileDevice;

  __declspec(property(get = get_cancelButton, put = set_cancelButton)) ::StringW cancelButton;

  __declspec(property(get = get_forceModuleActive, put = set_forceModuleActive)) bool forceModuleActive;

  __declspec(property(get = get_horizontalAxis, put = set_horizontalAxis)) ::StringW horizontalAxis;

  __declspec(property(get = get_inputActionsPerSecond, put = set_inputActionsPerSecond)) float_t inputActionsPerSecond;

  __declspec(property(get = get_inputMode)) ::UnityEngine::EventSystems::StandaloneInputModule_InputMode inputMode;

  /// @brief Field m_CancelButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelButton, put = __cordl_internal_set_m_CancelButton)) ::StringW m_CancelButton;

  /// @brief Field m_ConsecutiveMoveCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMoveCount, put = __cordl_internal_set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_CurrentFocusedGameObject, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentFocusedGameObject, put = __cordl_internal_set_m_CurrentFocusedGameObject)) ::UnityW<::UnityEngine::GameObject> m_CurrentFocusedGameObject;

  /// @brief Field m_ForceModuleActive, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceModuleActive, put = __cordl_internal_set_m_ForceModuleActive)) bool m_ForceModuleActive;

  /// @brief Field m_HorizontalAxis, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalAxis, put = __cordl_internal_set_m_HorizontalAxis)) ::StringW m_HorizontalAxis;

  /// @brief Field m_InputActionsPerSecond, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputActionsPerSecond, put = __cordl_internal_set_m_InputActionsPerSecond)) float_t m_InputActionsPerSecond;

  /// @brief Field m_InputPointerEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputPointerEvent, put = __cordl_internal_set_m_InputPointerEvent)) ::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;

  /// @brief Field m_LastMousePosition, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMousePosition, put = __cordl_internal_set_m_LastMousePosition)) ::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_LastMoveVector, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMoveVector, put = __cordl_internal_set_m_LastMoveVector)) ::UnityEngine::Vector2 m_LastMoveVector;

  /// @brief Field m_MousePosition, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MousePosition, put = __cordl_internal_set_m_MousePosition)) ::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_PrevActionTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevActionTime, put = __cordl_internal_set_m_PrevActionTime)) float_t m_PrevActionTime;

  /// @brief Field m_RepeatDelay, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepeatDelay, put = __cordl_internal_set_m_RepeatDelay)) float_t m_RepeatDelay;

  /// @brief Field m_SubmitButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitButton, put = __cordl_internal_set_m_SubmitButton)) ::StringW m_SubmitButton;

  /// @brief Field m_VerticalAxis, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalAxis, put = __cordl_internal_set_m_VerticalAxis)) ::StringW m_VerticalAxis;

  __declspec(property(get = get_repeatDelay, put = set_repeatDelay)) float_t repeatDelay;

  __declspec(property(get = get_submitButton, put = set_submitButton)) ::StringW submitButton;

  __declspec(property(get = get_verticalAxis, put = set_verticalAxis)) ::StringW verticalAxis;

  /// @brief Method ActivateModule, addr 0x4adff84, size 0x100, virtual true, abstract: false, final false
  inline void ActivateModule();

  /// @brief Method DeactivateModule, addr 0x4ae0084, size 0x4, virtual true, abstract: false, final false
  inline void DeactivateModule();

  /// @brief Method ForceAutoSelect, addr 0x4ae129c, size 0x8, virtual true, abstract: false, final false
  inline bool ForceAutoSelect();

  /// @brief Method GetCurrentFocusedGameObject, addr 0x4ae1618, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetCurrentFocusedGameObject();

  /// @brief Method GetRawMoveVector, addr 0x4ae0ee8, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  static inline ::UnityEngine::EventSystems::StandaloneInputModule* New_ctor();

  /// @brief Method Process, addr 0x4ae0088, size 0xa4, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessMouseEvent, addr 0x4ae03d8, size 0x8, virtual false, abstract: false, final false
  inline void ProcessMouseEvent();

  /// @brief Method ProcessMouseEvent, addr 0x4ae0ff4, size 0x2a8, virtual false, abstract: false, final false
  inline void ProcessMouseEvent(int32_t id);

  /// @brief Method ProcessMousePress, addr 0x4ae12a4, size 0x374, virtual false, abstract: false, final false
  inline void ProcessMousePress(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data);

  /// @brief Method ProcessTouchEvents, addr 0x4ae0274, size 0x164, virtual false, abstract: false, final false
  inline bool ProcessTouchEvents();

  /// @brief Method ProcessTouchPress, addr 0x4ae0854, size 0x694, virtual false, abstract: false, final false
  inline void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);

  /// @brief Method ReleaseMouse, addr 0x4adf9e0, size 0x36c, virtual false, abstract: false, final false
  inline void ReleaseMouse(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::UnityEngine::GameObject* currentOverGo);

  /// @brief Method SendMoveEventToSelectedObject, addr 0x4ae03e0, size 0x260, virtual false, abstract: false, final false
  inline bool SendMoveEventToSelectedObject();

  /// @brief Method SendSubmitEventToSelectedObject, addr 0x4ae0640, size 0x214, virtual false, abstract: false, final false
  inline bool SendSubmitEventToSelectedObject();

  /// @brief Method SendUpdateEventToSelectedObject, addr 0x4ae012c, size 0x148, virtual false, abstract: false, final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method ShouldActivateModule, addr 0x4adfd4c, size 0x238, virtual true, abstract: false, final false
  inline bool ShouldActivateModule();

  /// @brief Method ShouldIgnoreEventsOnNoFocus, addr 0x4adf908, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldIgnoreEventsOnNoFocus();

  /// @brief Method UpdateModule, addr 0x4adf910, size 0xd0, virtual true, abstract: false, final false
  inline void UpdateModule();

  constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelButton();

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CurrentFocusedGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CurrentFocusedGameObject();

  constexpr bool const& __cordl_internal_get_m_ForceModuleActive() const;

  constexpr bool& __cordl_internal_get_m_ForceModuleActive();

  constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis();

  constexpr float_t const& __cordl_internal_get_m_InputActionsPerSecond() const;

  constexpr float_t& __cordl_internal_get_m_InputActionsPerSecond();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_m_InputPointerEvent() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_m_InputPointerEvent();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMousePosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMoveVector() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMoveVector();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition();

  constexpr float_t const& __cordl_internal_get_m_PrevActionTime() const;

  constexpr float_t& __cordl_internal_get_m_PrevActionTime();

  constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

  constexpr float_t& __cordl_internal_get_m_RepeatDelay();

  constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

  constexpr ::StringW& __cordl_internal_get_m_SubmitButton();

  constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_VerticalAxis();

  constexpr void __cordl_internal_set_m_CancelButton(::StringW value);

  constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentFocusedGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ForceModuleActive(bool value);

  constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW value);

  constexpr void __cordl_internal_set_m_InputActionsPerSecond(float_t value);

  constexpr void __cordl_internal_set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PrevActionTime(float_t value);

  constexpr void __cordl_internal_set_m_RepeatDelay(float_t value);

  constexpr void __cordl_internal_set_m_SubmitButton(::StringW value);

  constexpr void __cordl_internal_set_m_VerticalAxis(::StringW value);

  /// @brief Method .ctor, addr 0x4adf7c4, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowActivationOnMobileDevice, addr 0x4adf880, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowActivationOnMobileDevice();

  /// @brief Method get_cancelButton, addr 0x4adf8f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_cancelButton();

  /// @brief Method get_forceModuleActive, addr 0x4adf894, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceModuleActive();

  /// @brief Method get_horizontalAxis, addr 0x4adf8c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_horizontalAxis();

  /// @brief Method get_inputActionsPerSecond, addr 0x4adf8a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_inputActionsPerSecond();

  /// @brief Method get_inputMode, addr 0x4adf878, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::StandaloneInputModule_InputMode get_inputMode();

  /// @brief Method get_repeatDelay, addr 0x4adf8b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_repeatDelay();

  /// @brief Method get_submitButton, addr 0x4adf8e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_submitButton();

  /// @brief Method get_verticalAxis, addr 0x4adf8d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_verticalAxis();

  /// @brief Method set_allowActivationOnMobileDevice, addr 0x4adf888, size 0xc, virtual false, abstract: false, final false
  inline void set_allowActivationOnMobileDevice(bool value);

  /// @brief Method set_cancelButton, addr 0x4adf900, size 0x8, virtual false, abstract: false, final false
  inline void set_cancelButton(::StringW value);

  /// @brief Method set_forceModuleActive, addr 0x4adf89c, size 0xc, virtual false, abstract: false, final false
  inline void set_forceModuleActive(bool value);

  /// @brief Method set_horizontalAxis, addr 0x4adf8d0, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalAxis(::StringW value);

  /// @brief Method set_inputActionsPerSecond, addr 0x4adf8b0, size 0x8, virtual false, abstract: false, final false
  inline void set_inputActionsPerSecond(float_t value);

  /// @brief Method set_repeatDelay, addr 0x4adf8c0, size 0x8, virtual false, abstract: false, final false
  inline void set_repeatDelay(float_t value);

  /// @brief Method set_submitButton, addr 0x4adf8f0, size 0x8, virtual false, abstract: false, final false
  inline void set_submitButton(::StringW value);

  /// @brief Method set_verticalAxis, addr 0x4adf8e0, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalAxis(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneInputModule(StandaloneInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneInputModule(StandaloneInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15218 };

  /// @brief Field doubleClickTime offset 0xffffffff size 0x4
  static constexpr float_t doubleClickTime{ static_cast<float_t>(0.3f) };

  /// @brief Field m_PrevActionTime, offset: 0x68, size: 0x4, def value: None
  float_t ___m_PrevActionTime;

  /// @brief Field m_LastMoveVector, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMoveVector;

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastMousePosition, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MousePosition, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_CurrentFocusedGameObject, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CurrentFocusedGameObject;

  /// @brief Field m_InputPointerEvent, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___m_InputPointerEvent;

  /// @brief Field m_HorizontalAxis, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset: 0xb8, size: 0x4, def value: None
  float_t ___m_InputActionsPerSecond;

  /// @brief Field m_RepeatDelay, offset: 0xbc, size: 0x4, def value: None
  float_t ___m_RepeatDelay;

  /// @brief Field m_ForceModuleActive, offset: 0xc0, size: 0x1, def value: None
  bool ___m_ForceModuleActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_PrevActionTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_LastMoveVector) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_ConsecutiveMoveCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_LastMousePosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_MousePosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_CurrentFocusedGameObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_InputPointerEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_HorizontalAxis) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_VerticalAxis) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_SubmitButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_CancelButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_InputActionsPerSecond) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_RepeatDelay) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::StandaloneInputModule, ___m_ForceModuleActive) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::StandaloneInputModule, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::StandaloneInputModule_InputMode, "UnityEngine.EventSystems", "StandaloneInputModule/InputMode");
NEED_NO_BOX(::UnityEngine::EventSystems::StandaloneInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::StandaloneInputModule*, "UnityEngine.EventSystems", "StandaloneInputModule");
