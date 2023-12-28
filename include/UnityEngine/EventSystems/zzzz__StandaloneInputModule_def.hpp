#pragma once
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
struct __StandaloneInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct __StandaloneInputModule__InputMode;
}
namespace UnityEngine::EventSystems {
class StandaloneInputModule;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::__StandaloneInputModule__InputMode);
MARK_REF_PTR_T(::UnityEngine::EventSystems::StandaloneInputModule);
// Type: ::InputMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13204))
// CS Name: ::StandaloneInputModule::InputMode
struct CORDL_TYPE __StandaloneInputModule__InputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StandaloneInputModule__InputMode_Unwrapped
  enum struct ____StandaloneInputModule__InputMode_Unwrapped : int32_t {
    __E_Mouse = static_cast<int32_t>(0x0),
    __E_Buttons = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StandaloneInputModule__InputMode_Unwrapped() const noexcept {
    return static_cast<____StandaloneInputModule__InputMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StandaloneInputModule__InputMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandaloneInputModule__InputMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Mouse value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode const Mouse;

  /// @brief Field Buttons value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode const Buttons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__StandaloneInputModule__InputMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::StandaloneInputModule
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 185, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13205))
// CS Name: ::UnityEngine.EventSystems::StandaloneInputModule*
class CORDL_TYPE StandaloneInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
  // Declarations
  using InputMode = ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode;

  /// @brief Field m_PrevActionTime, offset 0x60, size 0x4
  __declspec(property(get = __get_m_PrevActionTime, put = __set_m_PrevActionTime)) float_t m_PrevActionTime;

  /// @brief Field m_LastMoveVector, offset 0x64, size 0x8
  __declspec(property(get = __get_m_LastMoveVector, put = __set_m_LastMoveVector))::UnityEngine::Vector2 m_LastMoveVector;

  /// @brief Field m_ConsecutiveMoveCount, offset 0x6c, size 0x4
  __declspec(property(get = __get_m_ConsecutiveMoveCount, put = __set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_LastMousePosition, offset 0x70, size 0x8
  __declspec(property(get = __get_m_LastMousePosition, put = __set_m_LastMousePosition))::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_MousePosition, offset 0x78, size 0x8
  __declspec(property(get = __get_m_MousePosition, put = __set_m_MousePosition))::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_CurrentFocusedGameObject, offset 0x80, size 0x8
  __declspec(property(get = __get_m_CurrentFocusedGameObject, put = __set_m_CurrentFocusedGameObject))::UnityEngine::GameObject* m_CurrentFocusedGameObject;

  /// @brief Field m_InputPointerEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_m_InputPointerEvent, put = __set_m_InputPointerEvent))::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;

  /// @brief Field m_HorizontalAxis, offset 0x90, size 0x8
  __declspec(property(get = __get_m_HorizontalAxis, put = __set_m_HorizontalAxis))::StringW m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset 0x98, size 0x8
  __declspec(property(get = __get_m_VerticalAxis, put = __set_m_VerticalAxis))::StringW m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_SubmitButton, put = __set_m_SubmitButton))::StringW m_SubmitButton;

  /// @brief Field m_CancelButton, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_CancelButton, put = __set_m_CancelButton))::StringW m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset 0xb0, size 0x4
  __declspec(property(get = __get_m_InputActionsPerSecond, put = __set_m_InputActionsPerSecond)) float_t m_InputActionsPerSecond;

  /// @brief Field m_RepeatDelay, offset 0xb4, size 0x4
  __declspec(property(get = __get_m_RepeatDelay, put = __set_m_RepeatDelay)) float_t m_RepeatDelay;

  /// @brief Field m_ForceModuleActive, offset 0xb8, size 0x1
  __declspec(property(get = __get_m_ForceModuleActive, put = __set_m_ForceModuleActive)) bool m_ForceModuleActive;

  __declspec(property(get = get_inputMode))::UnityEngine::EventSystems::__StandaloneInputModule__InputMode inputMode;

  __declspec(property(get = get_allowActivationOnMobileDevice, put = set_allowActivationOnMobileDevice)) bool allowActivationOnMobileDevice;

  __declspec(property(get = get_forceModuleActive, put = set_forceModuleActive)) bool forceModuleActive;

  __declspec(property(get = get_inputActionsPerSecond, put = set_inputActionsPerSecond)) float_t inputActionsPerSecond;

  __declspec(property(get = get_repeatDelay, put = set_repeatDelay)) float_t repeatDelay;

  __declspec(property(get = get_horizontalAxis, put = set_horizontalAxis))::StringW horizontalAxis;

  __declspec(property(get = get_verticalAxis, put = set_verticalAxis))::StringW verticalAxis;

  __declspec(property(get = get_submitButton, put = set_submitButton))::StringW submitButton;

  __declspec(property(get = get_cancelButton, put = set_cancelButton))::StringW cancelButton;

  constexpr float_t& __get_m_PrevActionTime();

  constexpr float_t const& __get_m_PrevActionTime() const;

  constexpr void __set_m_PrevActionTime(float_t value);

  constexpr ::UnityEngine::Vector2& __get_m_LastMoveVector();

  constexpr ::UnityEngine::Vector2 const& __get_m_LastMoveVector() const;

  constexpr void __set_m_LastMoveVector(::UnityEngine::Vector2 value);

  constexpr int32_t& __get_m_ConsecutiveMoveCount();

  constexpr int32_t const& __get_m_ConsecutiveMoveCount() const;

  constexpr void __set_m_ConsecutiveMoveCount(int32_t value);

  constexpr ::UnityEngine::Vector2& __get_m_LastMousePosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_LastMousePosition() const;

  constexpr void __set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_MousePosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_MousePosition() const;

  constexpr void __set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::GameObject*& __get_m_CurrentFocusedGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_CurrentFocusedGameObject() const;

  constexpr void __set_m_CurrentFocusedGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_m_InputPointerEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_m_InputPointerEvent() const;

  constexpr void __set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr ::StringW& __get_m_HorizontalAxis();

  constexpr ::StringW const& __get_m_HorizontalAxis() const;

  constexpr void __set_m_HorizontalAxis(::StringW value);

  constexpr ::StringW& __get_m_VerticalAxis();

  constexpr ::StringW const& __get_m_VerticalAxis() const;

  constexpr void __set_m_VerticalAxis(::StringW value);

  constexpr ::StringW& __get_m_SubmitButton();

  constexpr ::StringW const& __get_m_SubmitButton() const;

  constexpr void __set_m_SubmitButton(::StringW value);

  constexpr ::StringW& __get_m_CancelButton();

  constexpr ::StringW const& __get_m_CancelButton() const;

  constexpr void __set_m_CancelButton(::StringW value);

  constexpr float_t& __get_m_InputActionsPerSecond();

  constexpr float_t const& __get_m_InputActionsPerSecond() const;

  constexpr void __set_m_InputActionsPerSecond(float_t value);

  constexpr float_t& __get_m_RepeatDelay();

  constexpr float_t const& __get_m_RepeatDelay() const;

  constexpr void __set_m_RepeatDelay(float_t value);

  constexpr bool& __get_m_ForceModuleActive();

  constexpr bool const& __get_m_ForceModuleActive() const;

  constexpr void __set_m_ForceModuleActive(bool value);

  static inline ::UnityEngine::EventSystems::StandaloneInputModule* New_ctor();

  /// @brief Method .ctor addr 0x2d9d1dc size 0xbc virtual false final false
  inline void _ctor();

  /// @brief Method get_inputMode addr 0x2d9d298 size 0x8 virtual false final false
  inline ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode get_inputMode();

  /// @brief Method get_allowActivationOnMobileDevice addr 0x2d9d2a0 size 0x8 virtual false final false
  inline bool get_allowActivationOnMobileDevice();

  /// @brief Method set_allowActivationOnMobileDevice addr 0x2d9d2a8 size 0xc virtual false final false
  inline void set_allowActivationOnMobileDevice(bool value);

  /// @brief Method get_forceModuleActive addr 0x2d9d2b4 size 0x8 virtual false final false
  inline bool get_forceModuleActive();

  /// @brief Method set_forceModuleActive addr 0x2d9d2bc size 0xc virtual false final false
  inline void set_forceModuleActive(bool value);

  /// @brief Method get_inputActionsPerSecond addr 0x2d9d2c8 size 0x8 virtual false final false
  inline float_t get_inputActionsPerSecond();

  /// @brief Method set_inputActionsPerSecond addr 0x2d9d2d0 size 0x8 virtual false final false
  inline void set_inputActionsPerSecond(float_t value);

  /// @brief Method get_repeatDelay addr 0x2d9d2d8 size 0x8 virtual false final false
  inline float_t get_repeatDelay();

  /// @brief Method set_repeatDelay addr 0x2d9d2e0 size 0x8 virtual false final false
  inline void set_repeatDelay(float_t value);

  /// @brief Method get_horizontalAxis addr 0x2d9d2e8 size 0x8 virtual false final false
  inline ::StringW get_horizontalAxis();

  /// @brief Method set_horizontalAxis addr 0x2d9d2f0 size 0x8 virtual false final false
  inline void set_horizontalAxis(::StringW value);

  /// @brief Method get_verticalAxis addr 0x2d9d2f8 size 0x8 virtual false final false
  inline ::StringW get_verticalAxis();

  /// @brief Method set_verticalAxis addr 0x2d9d300 size 0x8 virtual false final false
  inline void set_verticalAxis(::StringW value);

  /// @brief Method get_submitButton addr 0x2d9d308 size 0x8 virtual false final false
  inline ::StringW get_submitButton();

  /// @brief Method set_submitButton addr 0x2d9d310 size 0x8 virtual false final false
  inline void set_submitButton(::StringW value);

  /// @brief Method get_cancelButton addr 0x2d9d318 size 0x8 virtual false final false
  inline ::StringW get_cancelButton();

  /// @brief Method set_cancelButton addr 0x2d9d320 size 0x8 virtual false final false
  inline void set_cancelButton(::StringW value);

  /// @brief Method ShouldIgnoreEventsOnNoFocus addr 0x2d9d328 size 0x8 virtual false final false
  inline bool ShouldIgnoreEventsOnNoFocus();

  /// @brief Method UpdateModule addr 0x2d9d330 size 0xd0 virtual true final false
  inline void UpdateModule();

  /// @brief Method ReleaseMouse addr 0x2d9d400 size 0x36c virtual false final false
  inline void ReleaseMouse(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::UnityEngine::GameObject* currentOverGo);

  /// @brief Method ShouldActivateModule addr 0x2d9d76c size 0x234 virtual true final false
  inline bool ShouldActivateModule();

  /// @brief Method ActivateModule addr 0x2d9d9a0 size 0x100 virtual true final false
  inline void ActivateModule();

  /// @brief Method DeactivateModule addr 0x2d9daa0 size 0x4 virtual true final false
  inline void DeactivateModule();

  /// @brief Method Process addr 0x2d9daa4 size 0xa4 virtual true final false
  inline void Process();

  /// @brief Method ProcessTouchEvents addr 0x2d9dc90 size 0x164 virtual false final false
  inline bool ProcessTouchEvents();

  /// @brief Method ProcessTouchPress addr 0x2d9e26c size 0x664 virtual false final false
  inline void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);

  /// @brief Method SendSubmitEventToSelectedObject addr 0x2d9e060 size 0x20c virtual false final false
  inline bool SendSubmitEventToSelectedObject();

  /// @brief Method GetRawMoveVector addr 0x2d9e8d0 size 0x110 virtual false final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  /// @brief Method SendMoveEventToSelectedObject addr 0x2d9ddfc size 0x264 virtual false final false
  inline bool SendMoveEventToSelectedObject();

  /// @brief Method ProcessMouseEvent addr 0x2d9ddf4 size 0x8 virtual false final false
  inline void ProcessMouseEvent();

  /// @brief Method ForceAutoSelect addr 0x2d9ec88 size 0x8 virtual true final false
  inline bool ForceAutoSelect();

  /// @brief Method ProcessMouseEvent addr 0x2d9e9e0 size 0x2a8 virtual false final false
  inline void ProcessMouseEvent(int32_t id);

  /// @brief Method SendUpdateEventToSelectedObject addr 0x2d9db48 size 0x148 virtual false final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method ProcessMousePress addr 0x2d9ec90 size 0x354 virtual false final false
  inline void ProcessMousePress(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* data);

  /// @brief Method GetCurrentFocusedGameObject addr 0x2d9efe4 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* GetCurrentFocusedGameObject();

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneInputModule(StandaloneInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneInputModule(StandaloneInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneInputModule();

public:
  /// @brief Field m_PrevActionTime, offset: 0x60, size: 0x4, def value: None
  float_t ___m_PrevActionTime;

  /// @brief Field m_LastMoveVector, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMoveVector;

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastMousePosition, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MousePosition, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_CurrentFocusedGameObject, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_CurrentFocusedGameObject;

  /// @brief Field m_InputPointerEvent, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___m_InputPointerEvent;

  /// @brief Field m_HorizontalAxis, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset: 0xb0, size: 0x4, def value: None
  float_t ___m_InputActionsPerSecond;

  /// @brief Field m_RepeatDelay, offset: 0xb4, size: 0x4, def value: None
  float_t ___m_RepeatDelay;

  /// @brief Field m_ForceModuleActive, offset: 0xb8, size: 0x1, def value: None
  bool ___m_ForceModuleActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::StandaloneInputModule, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__StandaloneInputModule__InputMode, "UnityEngine.EventSystems", "StandaloneInputModule/InputMode");
NEED_NO_BOX(::UnityEngine::EventSystems::StandaloneInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::StandaloneInputModule*, "UnityEngine.EventSystems", "StandaloneInputModule");
