#pragma once
// IWYU pragma private; include "VRUIControls/VRPointer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRPointer)
namespace GlobalNamespace {
class VRController;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VRUIControls {
class VRLaserPointer;
}
// Forward declare root types
namespace VRUIControls {
class VRPointer;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRPointer);
// Dependencies UnityEngine.MonoBehaviour
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.VRPointer
class CORDL_TYPE VRPointer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _currentPointerData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPointerData, put = __cordl_internal_set__currentPointerData)) ::UnityEngine::EventSystems::PointerEventData* _currentPointerData;

  /// @brief Field _cursorPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorPrefab, put = __cordl_internal_set__cursorPrefab)) ::UnityW<::UnityEngine::Transform> _cursorPrefab;

  /// @brief Field _cursorTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorTransform, put = __cordl_internal_set__cursorTransform)) ::UnityW<::UnityEngine::Transform> _cursorTransform;

  /// @brief Field _defaultLaserPointerLength, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultLaserPointerLength, put = __cordl_internal_set__defaultLaserPointerLength)) float_t _defaultLaserPointerLength;

  /// @brief Field _eventSystem, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSystem, put = __cordl_internal_set__eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> _eventSystem;

  /// @brief Field _hasCursors, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCursors, put = __cordl_internal_set__hasCursors)) bool _hasCursors;

  /// @brief Field _hasLaserPointers, offset 0x9b, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLaserPointers, put = __cordl_internal_set__hasLaserPointers)) bool _hasLaserPointers;

  /// @brief Field _laserPointer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__laserPointer, put = __cordl_internal_set__laserPointer)) ::UnityW<::VRUIControls::VRLaserPointer> _laserPointer;

  /// @brief Field _laserPointerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__laserPointerPrefab, put = __cordl_internal_set__laserPointerPrefab)) ::UnityW<::VRUIControls::VRLaserPointer> _laserPointerPrefab;

  /// @brief Field _laserPointerWidth, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__laserPointerWidth, put = __cordl_internal_set__laserPointerWidth)) float_t _laserPointerWidth;

  /// @brief Field _lastSelectedControllerWasRight, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__lastSelectedControllerWasRight, put = __cordl_internal_set__lastSelectedControllerWasRight)) bool _lastSelectedControllerWasRight;

  /// @brief Field _lastSelectedVrController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSelectedVrController, put = __cordl_internal_set__lastSelectedVrController)) ::UnityW<::GlobalNamespace::VRController> _lastSelectedVrController;

  /// @brief Field _leftControllerWasReleased, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get__leftControllerWasReleased, put = __cordl_internal_set__leftControllerWasReleased)) bool _leftControllerWasReleased;

  /// @brief Field _leftCursorTransform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__leftCursorTransform, put = __cordl_internal_set__leftCursorTransform)) ::UnityW<::UnityEngine::Transform> _leftCursorTransform;

  /// @brief Field _leftLaserPointer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__leftLaserPointer, put = __cordl_internal_set__leftLaserPointer)) ::UnityW<::VRUIControls::VRLaserPointer> _leftLaserPointer;

  /// @brief Field _leftVRController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftVRController, put = __cordl_internal_set__leftVRController)) ::UnityW<::GlobalNamespace::VRController> _leftVRController;

  /// @brief Field _rightControllerWasReleased, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__rightControllerWasReleased, put = __cordl_internal_set__rightControllerWasReleased)) bool _rightControllerWasReleased;

  /// @brief Field _rightCursorTransform, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__rightCursorTransform, put = __cordl_internal_set__rightCursorTransform)) ::UnityW<::UnityEngine::Transform> _rightCursorTransform;

  /// @brief Field _rightLaserPointer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__rightLaserPointer, put = __cordl_internal_set__rightLaserPointer)) ::UnityW<::VRUIControls::VRLaserPointer> _rightLaserPointer;

  /// @brief Field _rightVRController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightVRController, put = __cordl_internal_set__rightVRController)) ::UnityW<::GlobalNamespace::VRController> _rightVRController;

  __declspec(property(get = get_cursorPosition)) ::UnityEngine::Vector3 cursorPosition;

  __declspec(property(get = get_cursorTransform)) ::UnityW<::UnityEngine::Transform> cursorTransform;

  __declspec(property(get = get_flatCanvasWorldPosition)) ::UnityEngine::Vector2 flatCanvasWorldPosition;

  __declspec(property(get = get_lastSelectedVrController)) ::UnityW<::GlobalNamespace::VRController> lastSelectedVrController;

  /// @brief Field lastUsedControllerChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lastUsedControllerChangedEvent,
                      put = __cordl_internal_set_lastUsedControllerChangedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* lastUsedControllerChangedEvent;

  __declspec(property(get = get_pointingOver)) ::UnityW<::UnityEngine::GameObject> pointingOver;

  __declspec(property(get = get_state)) ::StringW state;

  /// @brief Method Awake, addr 0x4afe558, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateCursors, addr 0x4afe700, size 0x134, virtual false, abstract: false, final false
  inline bool CreateCursors();

  /// @brief Method CreateLaserPointers, addr 0x4afe5fc, size 0x104, virtual false, abstract: false, final false
  inline bool CreateLaserPointers();

  /// @brief Method EnabledLastSelectedPointer, addr 0x4afeab0, size 0x58, virtual false, abstract: false, final false
  inline void EnabledLastSelectedPointer();

  /// @brief Method HideCursors, addr 0x4afeda4, size 0x60, virtual false, abstract: false, final false
  inline void HideCursors();

  /// @brief Method HideLaserPointers, addr 0x4afee04, size 0x60, virtual false, abstract: false, final false
  inline void HideLaserPointers();

  /// @brief Method HideLaserPointersAndCursors, addr 0x4afe8c0, size 0x18, virtual false, abstract: false, final false
  inline void HideLaserPointersAndCursors();

  /// @brief Method IsLeftControllerDown, addr 0x4afea08, size 0x54, virtual false, abstract: false, final false
  inline bool IsLeftControllerDown();

  /// @brief Method IsRightControllerDown, addr 0x4afea5c, size 0x54, virtual false, abstract: false, final false
  inline bool IsRightControllerDown();

  /// @brief Method LateUpdate, addr 0x4afe8d8, size 0x130, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::VRUIControls::VRPointer* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x4afed98, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDisable, addr 0x4afe8a8, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Process, addr 0x4afd65c, size 0x68, virtual false, abstract: false, final false
  inline void Process(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  /// @brief Method RefreshLaserPointerAndLaserHit, addr 0x4afeb7c, size 0x21c, virtual false, abstract: false, final false
  inline void RefreshLaserPointerAndLaserHit(::UnityEngine::EventSystems::PointerEventData* pointerData);

  /// @brief Method SelectLeftController, addr 0x4afe870, size 0x38, virtual false, abstract: false, final false
  inline void SelectLeftController();

  /// @brief Method SelectRightController, addr 0x4afe834, size 0x3c, virtual false, abstract: false, final false
  inline void SelectRightController();

  /// @brief Method SetupLaserPointer, addr 0x4afeb08, size 0x74, virtual false, abstract: false, final false
  inline void SetupLaserPointer(::VRUIControls::VRLaserPointer* laserPointer);

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get__currentPointerData() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get__currentPointerData();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cursorPrefab() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cursorPrefab();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cursorTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cursorTransform();

  constexpr float_t const& __cordl_internal_get__defaultLaserPointerLength() const;

  constexpr float_t& __cordl_internal_get__defaultLaserPointerLength();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__eventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__eventSystem();

  constexpr bool const& __cordl_internal_get__hasCursors() const;

  constexpr bool& __cordl_internal_get__hasCursors();

  constexpr bool const& __cordl_internal_get__hasLaserPointers() const;

  constexpr bool& __cordl_internal_get__hasLaserPointers();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__laserPointer() const;

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__laserPointer();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__laserPointerPrefab() const;

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__laserPointerPrefab();

  constexpr float_t const& __cordl_internal_get__laserPointerWidth() const;

  constexpr float_t& __cordl_internal_get__laserPointerWidth();

  constexpr bool const& __cordl_internal_get__lastSelectedControllerWasRight() const;

  constexpr bool& __cordl_internal_get__lastSelectedControllerWasRight();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__lastSelectedVrController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__lastSelectedVrController();

  constexpr bool const& __cordl_internal_get__leftControllerWasReleased() const;

  constexpr bool& __cordl_internal_get__leftControllerWasReleased();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftCursorTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftCursorTransform();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__leftLaserPointer() const;

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__leftLaserPointer();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__leftVRController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__leftVRController();

  constexpr bool const& __cordl_internal_get__rightControllerWasReleased() const;

  constexpr bool& __cordl_internal_get__rightControllerWasReleased();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightCursorTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightCursorTransform();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__rightLaserPointer() const;

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__rightLaserPointer();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__rightVRController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__rightVRController();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* const& __cordl_internal_get_lastUsedControllerChangedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*& __cordl_internal_get_lastUsedControllerChangedEvent();

  constexpr void __cordl_internal_set__currentPointerData(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set__cursorPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__cursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__defaultLaserPointerLength(float_t value);

  constexpr void __cordl_internal_set__eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set__hasCursors(bool value);

  constexpr void __cordl_internal_set__hasLaserPointers(bool value);

  constexpr void __cordl_internal_set__laserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr void __cordl_internal_set__laserPointerPrefab(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr void __cordl_internal_set__laserPointerWidth(float_t value);

  constexpr void __cordl_internal_set__lastSelectedControllerWasRight(bool value);

  constexpr void __cordl_internal_set__lastSelectedVrController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__leftControllerWasReleased(bool value);

  constexpr void __cordl_internal_set__leftCursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr void __cordl_internal_set__leftVRController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__rightControllerWasReleased(bool value);

  constexpr void __cordl_internal_set__rightCursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr void __cordl_internal_set__rightVRController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value);

  /// @brief Method .ctor, addr 0x4afee64, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_lastUsedControllerChangedEvent, addr 0x4afdf6c, size 0xb0, virtual false, abstract: false, final false
  inline void add_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value);

  /// @brief Method get_cursorPosition, addr 0x4afe464, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cursorPosition();

  /// @brief Method get_cursorTransform, addr 0x4afe140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_cursorTransform();

  /// @brief Method get_flatCanvasWorldPosition, addr 0x4afe0e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_flatCanvasWorldPosition();

  /// @brief Method get_lastSelectedVrController, addr 0x4afe45c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_lastSelectedVrController();

  /// @brief Method get_pointingOver, addr 0x4afe0cc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointingOver();

  /// @brief Method get_state, addr 0x4afe148, size 0x314, virtual false, abstract: false, final false
  inline ::StringW get_state();

  /// @brief Method remove_lastUsedControllerChangedEvent, addr 0x4afe01c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPointer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPointer(VRPointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPointer(VRPointer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18263 };

  /// @brief Field kScrollMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kScrollMultiplier{ static_cast<float_t>(1.0f) };

  /// @brief Field kTriggerThreshold offset 0xffffffff size 0x4
  static constexpr float_t kTriggerThreshold{ static_cast<float_t>(0.1f) };

  /// @brief Field _leftVRController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____leftVRController;

  /// @brief Field _rightVRController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____rightVRController;

  /// @brief Field _laserPointerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____laserPointerPrefab;

  /// @brief Field _cursorPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cursorPrefab;

  /// @brief Field _defaultLaserPointerLength, offset: 0x40, size: 0x4, def value: None
  float_t ____defaultLaserPointerLength;

  /// @brief Field _laserPointerWidth, offset: 0x44, size: 0x4, def value: None
  float_t ____laserPointerWidth;

  /// @brief Field lastUsedControllerChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* ___lastUsedControllerChangedEvent;

  /// @brief Field _currentPointerData, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ____currentPointerData;

  /// @brief Field _laserPointer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____laserPointer;

  /// @brief Field _cursorTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cursorTransform;

  /// @brief Field _leftLaserPointer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____leftLaserPointer;

  /// @brief Field _rightLaserPointer, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____rightLaserPointer;

  /// @brief Field _leftCursorTransform, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftCursorTransform;

  /// @brief Field _rightCursorTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightCursorTransform;

  /// @brief Field _eventSystem, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____eventSystem;

  /// @brief Field _lastSelectedVrController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____lastSelectedVrController;

  /// @brief Field _lastSelectedControllerWasRight, offset: 0x98, size: 0x1, def value: None
  bool ____lastSelectedControllerWasRight;

  /// @brief Field _rightControllerWasReleased, offset: 0x99, size: 0x1, def value: None
  bool ____rightControllerWasReleased;

  /// @brief Field _leftControllerWasReleased, offset: 0x9a, size: 0x1, def value: None
  bool ____leftControllerWasReleased;

  /// @brief Field _hasLaserPointers, offset: 0x9b, size: 0x1, def value: None
  bool ____hasLaserPointers;

  /// @brief Field _hasCursors, offset: 0x9c, size: 0x1, def value: None
  bool ____hasCursors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::VRPointer, ____leftVRController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightVRController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____cursorPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____defaultLaserPointerLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointerWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ___lastUsedControllerChangedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____currentPointerData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____cursorTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftLaserPointer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightLaserPointer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftCursorTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightCursorTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____eventSystem) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____lastSelectedVrController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____lastSelectedControllerWasRight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightControllerWasReleased) == 0x99, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftControllerWasReleased) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____hasLaserPointers) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____hasCursors) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::VRPointer, 0xa0>, "Size mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRPointer*, "VRUIControls", "VRPointer");
