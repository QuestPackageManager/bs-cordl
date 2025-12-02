#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Cursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Cursor)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Panel;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_FramePressState;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Cursor;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor);
// Dependencies OVRCursor, UnityEngine.EventSystems.PointerEventData::FramePressState, UnityEngine.Vector3
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor
class CORDL_TYPE Cursor : public ::GlobalNamespace::OVRCursor {
public:
  // Declarations
  __declspec(property(get = get_GameObject, put = set_GameObject)) ::UnityW<::UnityEngine::GameObject> GameObject;

  __declspec(property(get = get_Transform, put = set_Transform)) ::UnityW<::UnityEngine::Transform> Transform;

  /// @brief Field <GameObject>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__GameObject_k__BackingField, put = __cordl_internal_set__GameObject_k__BackingField)) ::UnityW<::UnityEngine::GameObject> _GameObject_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Transform_k__BackingField, put = __cordl_internal_set__Transform_k__BackingField)) ::UnityW<::UnityEngine::Transform> _Transform_k__BackingField;

  /// @brief Field _canvas, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__canvas, put = __cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas> _canvas;

  /// @brief Field _endPoint, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__endPoint, put = __cordl_internal_set__endPoint)) ::UnityEngine::Vector3 _endPoint;

  /// @brief Field _forward, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__forward, put = __cordl_internal_set__forward)) ::UnityEngine::Vector3 _forward;

  /// @brief Field _hit, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__hit, put = __cordl_internal_set__hit)) bool _hit;

  /// @brief Field _normal, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__normal, put = __cordl_internal_set__normal)) ::UnityEngine::Vector3 _normal;

  /// @brief Field _pressState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__pressState, put = __cordl_internal_set__pressState)) ::UnityEngine::EventSystems::PointerEventData_FramePressState _pressState;

  /// @brief Method Attach, addr 0x58472c4, size 0xdc, virtual false, abstract: false, final false
  inline void Attach(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel* panel);

  /// @brief Method Awake, addr 0x58492e8, size 0x1f4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x5849560, size 0x194, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor* New_ctor();

  /// @brief Method SetClickState, addr 0x5849540, size 0x20, virtual false, abstract: false, final false
  inline void SetClickState(::UnityEngine::EventSystems::PointerEventData_FramePressState state);

  /// @brief Method SetCursorRay, addr 0x5849500, size 0x40, virtual true, abstract: false, final false
  inline void SetCursorRay(::UnityEngine::Transform* t);

  /// @brief Method SetCursorStartDest, addr 0x58494dc, size 0x24, virtual true, abstract: false, final false
  inline void SetCursorStartDest(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dest, ::UnityEngine::Vector3 normal);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__GameObject_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__GameObject_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPoint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__forward() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__forward();

  constexpr bool const& __cordl_internal_get__hit() const;

  constexpr bool& __cordl_internal_get__hit();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__normal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__normal();

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& __cordl_internal_get__pressState() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& __cordl_internal_get__pressState();

  constexpr void __cordl_internal_set__GameObject_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set__endPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__forward(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__hit(bool value);

  constexpr void __cordl_internal_set__normal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__pressState(::UnityEngine::EventSystems::PointerEventData_FramePressState value);

  /// @brief Method .ctor, addr 0x58496f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GameObject, addr 0x58492c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_GameObject();

  /// @brief Method get_Transform, addr 0x58492d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Transform();

  /// @brief Method set_GameObject, addr 0x58492d0, size 0x8, virtual false, abstract: false, final false
  inline void set_GameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_Transform, addr 0x58492e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Transform(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cursor(Cursor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cursor(Cursor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18366 };

  /// @brief Field _pressedScale offset 0xffffffff size 0x4
  static constexpr float_t _pressedScale{ static_cast<float_t>(0.8f) };

  /// @brief Field _releasedScale offset 0xffffffff size 0x4
  static constexpr float_t _releasedScale{ static_cast<float_t>(1.0f) };

  /// @brief Field _forward, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____forward;

  /// @brief Field _endPoint, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPoint;

  /// @brief Field _normal, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____normal;

  /// @brief Field _hit, offset: 0x44, size: 0x1, def value: None
  bool ____hit;

  /// @brief Field _pressState, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_FramePressState ____pressState;

  /// @brief Field _canvas, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____canvas;

  /// @brief Field <GameObject>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____GameObject_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____Transform_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____forward) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____endPoint) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____normal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____hit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____pressState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____canvas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____GameObject_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, ____Transform_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor, 0x68>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Cursor");
