#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenStick.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenStick)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenStick__Behaviour;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenStick__Behaviour;
}
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenStick;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour);
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
// Type: ::Behaviour
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: true
// CS Name: ::OnScreenStick::Behaviour
struct CORDL_TYPE __OnScreenStick__Behaviour {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OnScreenStick__Behaviour_Unwrapped
  enum struct ____OnScreenStick__Behaviour_Unwrapped : int32_t {
    __E_RelativePositionWithStaticOrigin = static_cast<int32_t>(0x0),
    __E_ExactPositionWithStaticOrigin = static_cast<int32_t>(0x1),
    __E_ExactPositionWithDynamicOrigin = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OnScreenStick__Behaviour_Unwrapped() const noexcept {
    return static_cast<____OnScreenStick__Behaviour_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OnScreenStick__Behaviour();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OnScreenStick__Behaviour(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ExactPositionWithDynamicOrigin value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour const ExactPositionWithDynamicOrigin;

  /// @brief Field ExactPositionWithStaticOrigin value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour const ExactPositionWithStaticOrigin;

  /// @brief Field RelativePositionWithStaticOrigin value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour const RelativePositionWithStaticOrigin;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
// Type: UnityEngine.InputSystem.OnScreen::OnScreenStick
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.OnScreen::OnScreenStick*
class CORDL_TYPE OnScreenStick : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
  // Declarations
  using Behaviour = ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour;

  __declspec(property(get = get_behaviour, put = set_behaviour))::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour behaviour;

  __declspec(property(get = get_controlPathInternal, put = set_controlPathInternal))::StringW controlPathInternal;

  __declspec(property(get = get_dynamicOriginRange, put = set_dynamicOriginRange)) float_t dynamicOriginRange;

  /// @brief Field m_Behaviour, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Behaviour, put = __cordl_internal_set_m_Behaviour))::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour m_Behaviour;

  /// @brief Field m_ControlPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlPath, put = __cordl_internal_set_m_ControlPath))::StringW m_ControlPath;

  /// @brief Field m_DynamicOriginRange, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DynamicOriginRange, put = __cordl_internal_set_m_DynamicOriginRange)) float_t m_DynamicOriginRange;

  /// @brief Field m_MovementRange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MovementRange, put = __cordl_internal_set_m_MovementRange)) float_t m_MovementRange;

  /// @brief Field m_PointerDownAction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerDownAction, put = __cordl_internal_set_m_PointerDownAction))::UnityEngine::InputSystem::InputAction* m_PointerDownAction;

  /// @brief Field m_PointerDownPos, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerDownPos, put = __cordl_internal_set_m_PointerDownPos))::UnityEngine::Vector2 m_PointerDownPos;

  /// @brief Field m_PointerEventData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerEventData, put = __cordl_internal_set_m_PointerEventData))::UnityEngine::EventSystems::PointerEventData* m_PointerEventData;

  /// @brief Field m_PointerMoveAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerMoveAction, put = __cordl_internal_set_m_PointerMoveAction))::UnityEngine::InputSystem::InputAction* m_PointerMoveAction;

  /// @brief Field m_RaycastResults, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResults,
                      put = __cordl_internal_set_m_RaycastResults))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResults;

  /// @brief Field m_StartPos, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_m_StartPos, put = __cordl_internal_set_m_StartPos))::UnityEngine::Vector3 m_StartPos;

  /// @brief Field m_UseIsolatedInputActions, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseIsolatedInputActions, put = __cordl_internal_set_m_UseIsolatedInputActions)) bool m_UseIsolatedInputActions;

  __declspec(property(get = get_movementRange, put = set_movementRange)) float_t movementRange;

  __declspec(property(get = get_useIsolatedInputActions, put = set_useIsolatedInputActions)) bool useIsolatedInputActions;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method BeginInteraction, addr 0x317d704, size 0x238, virtual false, abstract: false, final false
  inline void BeginInteraction(::UnityEngine::Vector2 pointerPosition, ::UnityEngine::Camera* uiCamera);

  /// @brief Method DrawGizmoCircle, addr 0x317ec78, size 0xe4, virtual false, abstract: false, final false
  inline void DrawGizmoCircle(::UnityEngine::Vector2 center, float_t radius);

  /// @brief Method EndInteraction, addr 0x317ddc0, size 0xc8, virtual false, abstract: false, final false
  inline void EndInteraction();

  /// @brief Method GetCameraFromCanvas, addr 0x317e834, size 0x134, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetCameraFromCanvas();

  /// @brief Method MoveStick, addr 0x317d9d8, size 0x3d8, virtual false, abstract: false, final false
  inline void MoveStick(::UnityEngine::Vector2 pointerPosition, ::UnityEngine::Camera* uiCamera);

  static inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick* New_ctor();

  /// @brief Method OnDrag, addr 0x317d93c, size 0x9c, virtual true, abstract: false, final true
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrawGizmosSelected, addr 0x317eae4, size 0x194, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnPointerDown, addr 0x317e4e0, size 0x354, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::InputSystem::__InputAction__CallbackContext ctx);

  /// @brief Method OnPointerDown, addr 0x317d668, size 0x9c, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerMove, addr 0x317e968, size 0xe8, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::InputSystem::__InputAction__CallbackContext ctx);

  /// @brief Method OnPointerUp, addr 0x317ea50, size 0x94, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::InputSystem::__InputAction__CallbackContext ctx);

  /// @brief Method OnPointerUp, addr 0x317ddb0, size 0x10, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Start, addr 0x317de88, size 0x658, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateDynamicOriginClickableArea, addr 0x317ed5c, size 0xec, virtual false, abstract: false, final false
  inline void UpdateDynamicOriginClickableArea();

  constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour const& __cordl_internal_get_m_Behaviour() const;

  constexpr ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour& __cordl_internal_get_m_Behaviour();

  constexpr ::StringW const& __cordl_internal_get_m_ControlPath() const;

  constexpr ::StringW& __cordl_internal_get_m_ControlPath();

  constexpr float_t const& __cordl_internal_get_m_DynamicOriginRange() const;

  constexpr float_t& __cordl_internal_get_m_DynamicOriginRange();

  constexpr float_t const& __cordl_internal_get_m_MovementRange() const;

  constexpr float_t& __cordl_internal_get_m_MovementRange();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_PointerDownAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_PointerDownAction() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PointerDownPos() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PointerDownPos();

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_m_PointerEventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __cordl_internal_get_m_PointerEventData() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_PointerMoveAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_PointerMoveAction() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __cordl_internal_get_m_RaycastResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*> const& __cordl_internal_get_m_RaycastResults() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartPos();

  constexpr bool const& __cordl_internal_get_m_UseIsolatedInputActions() const;

  constexpr bool& __cordl_internal_get_m_UseIsolatedInputActions();

  constexpr void __cordl_internal_set_m_Behaviour(::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour value);

  constexpr void __cordl_internal_set_m_ControlPath(::StringW value);

  constexpr void __cordl_internal_set_m_DynamicOriginRange(float_t value);

  constexpr void __cordl_internal_set_m_MovementRange(float_t value);

  constexpr void __cordl_internal_set_m_PointerDownAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_PointerDownPos(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PointerEventData(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_m_PointerMoveAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value);

  constexpr void __cordl_internal_set_m_StartPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_UseIsolatedInputActions(bool value);

  /// @brief Method .ctor, addr 0x317eeac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_behaviour, addr 0x317ee9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour get_behaviour();

  /// @brief Method get_controlPathInternal, addr 0x317ee8c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_controlPathInternal();

  /// @brief Method get_dynamicOriginRange, addr 0x317ee58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicOriginRange();

  /// @brief Method get_movementRange, addr 0x317ee48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_movementRange();

  /// @brief Method get_useIsolatedInputActions, addr 0x317ee78, size 0x8, virtual false, abstract: false, final false
  inline bool get_useIsolatedInputActions();

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method set_behaviour, addr 0x317eea4, size 0x8, virtual false, abstract: false, final false
  inline void set_behaviour(::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour value);

  /// @brief Method set_controlPathInternal, addr 0x317ee94, size 0x8, virtual true, abstract: false, final false
  inline void set_controlPathInternal(::StringW value);

  /// @brief Method set_dynamicOriginRange, addr 0x317ee60, size 0x18, virtual false, abstract: false, final false
  inline void set_dynamicOriginRange(float_t value);

  /// @brief Method set_movementRange, addr 0x317ee50, size 0x8, virtual false, abstract: false, final false
  inline void set_movementRange(float_t value);

  /// @brief Method set_useIsolatedInputActions, addr 0x317ee80, size 0xc, virtual false, abstract: false, final false
  inline void set_useIsolatedInputActions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenStick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenStick(OnScreenStick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenStick(OnScreenStick const&) = delete;

  /// @brief Field m_MovementRange, offset: 0x30, size: 0x4, def value: None
  float_t ___m_MovementRange;

  /// @brief Field m_DynamicOriginRange, offset: 0x34, size: 0x4, def value: None
  float_t ___m_DynamicOriginRange;

  /// @brief Field m_ControlPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_ControlPath;

  /// @brief Field m_Behaviour, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour ___m_Behaviour;

  /// @brief Field m_UseIsolatedInputActions, offset: 0x44, size: 0x1, def value: None
  bool ___m_UseIsolatedInputActions;

  /// @brief Field m_PointerDownAction, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_PointerDownAction;

  /// @brief Field m_PointerMoveAction, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_PointerMoveAction;

  /// @brief Field m_StartPos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_StartPos;

  /// @brief Field m_PointerDownPos, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PointerDownPos;

  /// @brief Field m_RaycastResults, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* ___m_RaycastResults;

  /// @brief Field m_PointerEventData, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___m_PointerEventData;

  /// @brief Field kDynamicOriginClickable offset 0xffffffff size 0x8
  static constexpr ::ConstString kDynamicOriginClickable{ u"DynamicOriginClickable" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenStick, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_MovementRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_DynamicOriginRange) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_ControlPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_Behaviour) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_UseIsolatedInputActions) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_PointerDownAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_PointerMoveAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_StartPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_PointerDownPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_RaycastResults) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenStick, ___m_PointerEventData) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::__OnScreenStick__Behaviour, "UnityEngine.InputSystem.OnScreen", "OnScreenStick/Behaviour");
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenStick*, "UnityEngine.InputSystem.OnScreen", "OnScreenStick");
