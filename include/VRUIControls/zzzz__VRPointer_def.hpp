#pragma once
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
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Transform;
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
// Type: VRUIControls::VRPointer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15678))
// CS Name: ::VRUIControls::VRPointer*
class CORDL_TYPE VRPointer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftVRController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftVRController, put = __cordl_internal_set__leftVRController))::UnityW<::GlobalNamespace::VRController> _leftVRController;

  /// @brief Field _rightVRController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightVRController, put = __cordl_internal_set__rightVRController))::UnityW<::GlobalNamespace::VRController> _rightVRController;

  /// @brief Field _laserPointerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__laserPointerPrefab, put = __cordl_internal_set__laserPointerPrefab))::UnityW<::VRUIControls::VRLaserPointer> _laserPointerPrefab;

  /// @brief Field _cursorPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorPrefab, put = __cordl_internal_set__cursorPrefab))::UnityW<::UnityEngine::Transform> _cursorPrefab;

  /// @brief Field _defaultLaserPointerLength, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultLaserPointerLength, put = __cordl_internal_set__defaultLaserPointerLength)) float_t _defaultLaserPointerLength;

  /// @brief Field _laserPointerWidth, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__laserPointerWidth, put = __cordl_internal_set__laserPointerWidth)) float_t _laserPointerWidth;

  /// @brief Field _laserPointer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__laserPointer, put = __cordl_internal_set__laserPointer))::UnityW<::VRUIControls::VRLaserPointer> _laserPointer;

  /// @brief Field _cursorTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__cursorTransform, put = __cordl_internal_set__cursorTransform))::UnityW<::UnityEngine::Transform> _cursorTransform;

  /// @brief Field _leftLaserPointer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__leftLaserPointer, put = __cordl_internal_set__leftLaserPointer))::UnityW<::VRUIControls::VRLaserPointer> _leftLaserPointer;

  /// @brief Field _rightLaserPointer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rightLaserPointer, put = __cordl_internal_set__rightLaserPointer))::UnityW<::VRUIControls::VRLaserPointer> _rightLaserPointer;

  /// @brief Field _leftCursorTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__leftCursorTransform, put = __cordl_internal_set__leftCursorTransform))::UnityW<::UnityEngine::Transform> _leftCursorTransform;

  /// @brief Field _rightCursorTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__rightCursorTransform, put = __cordl_internal_set__rightCursorTransform))::UnityW<::UnityEngine::Transform> _rightCursorTransform;

  /// @brief Field _eventSystem, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSystem, put = __cordl_internal_set__eventSystem))::UnityW<::UnityEngine::EventSystems::EventSystem> _eventSystem;

  /// @brief Field _lastSelectedVrController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSelectedVrController, put = __cordl_internal_set__lastSelectedVrController))::UnityW<::GlobalNamespace::VRController> _lastSelectedVrController;

  /// @brief Field _lastSelectedControllerWasRight, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__lastSelectedControllerWasRight, put = __cordl_internal_set__lastSelectedControllerWasRight)) bool _lastSelectedControllerWasRight;

  /// @brief Field _rightControllerWasReleased, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__rightControllerWasReleased, put = __cordl_internal_set__rightControllerWasReleased)) bool _rightControllerWasReleased;

  /// @brief Field _leftControllerWasReleased, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get__leftControllerWasReleased, put = __cordl_internal_set__leftControllerWasReleased)) bool _leftControllerWasReleased;

  /// @brief Field _hasLaserPointers, offset 0x83, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLaserPointers, put = __cordl_internal_set__hasLaserPointers)) bool _hasLaserPointers;

  /// @brief Field _hasCursors, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCursors, put = __cordl_internal_set__hasCursors)) bool _hasCursors;

  /// @brief Field _pointerData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerData, put = __cordl_internal_set__pointerData))::UnityEngine::EventSystems::PointerEventData* _pointerData;

  __declspec(property(get = get_lastSelectedVrController))::UnityW<::GlobalNamespace::VRController> lastSelectedVrController;

  __declspec(property(get = get_cursorPosition))::UnityEngine::Vector3 cursorPosition;

  __declspec(property(get = get_state))::StringW state;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__leftVRController();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__leftVRController() const;

  constexpr void __cordl_internal_set__leftVRController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__rightVRController();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__rightVRController() const;

  constexpr void __cordl_internal_set__rightVRController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__laserPointerPrefab();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__laserPointerPrefab() const;

  constexpr void __cordl_internal_set__laserPointerPrefab(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cursorPrefab();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cursorPrefab() const;

  constexpr void __cordl_internal_set__cursorPrefab(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get__defaultLaserPointerLength();

  constexpr float_t const& __cordl_internal_get__defaultLaserPointerLength() const;

  constexpr void __cordl_internal_set__defaultLaserPointerLength(float_t value);

  constexpr float_t& __cordl_internal_get__laserPointerWidth();

  constexpr float_t const& __cordl_internal_get__laserPointerWidth() const;

  constexpr void __cordl_internal_set__laserPointerWidth(float_t value);

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__laserPointer();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__laserPointer() const;

  constexpr void __cordl_internal_set__laserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cursorTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cursorTransform() const;

  constexpr void __cordl_internal_set__cursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__leftLaserPointer();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__leftLaserPointer() const;

  constexpr void __cordl_internal_set__leftLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr ::UnityW<::VRUIControls::VRLaserPointer>& __cordl_internal_get__rightLaserPointer();

  constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& __cordl_internal_get__rightLaserPointer() const;

  constexpr void __cordl_internal_set__rightLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftCursorTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftCursorTransform() const;

  constexpr void __cordl_internal_set__leftCursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightCursorTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightCursorTransform() const;

  constexpr void __cordl_internal_set__rightCursorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__eventSystem();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__eventSystem() const;

  constexpr void __cordl_internal_set__eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__lastSelectedVrController();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__lastSelectedVrController() const;

  constexpr void __cordl_internal_set__lastSelectedVrController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr bool& __cordl_internal_get__lastSelectedControllerWasRight();

  constexpr bool const& __cordl_internal_get__lastSelectedControllerWasRight() const;

  constexpr void __cordl_internal_set__lastSelectedControllerWasRight(bool value);

  constexpr bool& __cordl_internal_get__rightControllerWasReleased();

  constexpr bool const& __cordl_internal_get__rightControllerWasReleased() const;

  constexpr void __cordl_internal_set__rightControllerWasReleased(bool value);

  constexpr bool& __cordl_internal_get__leftControllerWasReleased();

  constexpr bool const& __cordl_internal_get__leftControllerWasReleased() const;

  constexpr void __cordl_internal_set__leftControllerWasReleased(bool value);

  constexpr bool& __cordl_internal_get__hasLaserPointers();

  constexpr bool const& __cordl_internal_get__hasLaserPointers() const;

  constexpr void __cordl_internal_set__hasLaserPointers(bool value);

  constexpr bool& __cordl_internal_get__hasCursors();

  constexpr bool const& __cordl_internal_get__hasCursors() const;

  constexpr void __cordl_internal_set__hasCursors(bool value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get__pointerData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __cordl_internal_get__pointerData() const;

  constexpr void __cordl_internal_set__pointerData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method get_lastSelectedVrController, addr 0x2eb8a44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_lastSelectedVrController();

  /// @brief Method get_cursorPosition, addr 0x2eb8a4c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cursorPosition();

  /// @brief Method Awake, addr 0x2eb8b3c, size 0xb4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDisable, addr 0x2eb8e4c, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method LateUpdate, addr 0x2eb8e7c, size 0x14c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method IsLeftControllerDown, addr 0x2eb8fc8, size 0x50, virtual false, abstract: false, final false
  inline bool IsLeftControllerDown();

  /// @brief Method IsRightControllerDown, addr 0x2eb9018, size 0x50, virtual false, abstract: false, final false
  inline bool IsRightControllerDown();

  /// @brief Method SelectRightController, addr 0x2eb8e28, size 0x14, virtual false, abstract: false, final false
  inline void SelectRightController();

  /// @brief Method SelectLeftController, addr 0x2eb8e3c, size 0x10, virtual false, abstract: false, final false
  inline void SelectLeftController();

  /// @brief Method EnabledLastSelectedPointer, addr 0x2eb9068, size 0x54, virtual false, abstract: false, final false
  inline void EnabledLastSelectedPointer();

  /// @brief Method CreateLaserPointers, addr 0x2eb8bf0, size 0x104, virtual false, abstract: false, final false
  inline bool CreateLaserPointers();

  /// @brief Method SetupLaserPointer, addr 0x2eb90bc, size 0x74, virtual false, abstract: false, final false
  inline void SetupLaserPointer(::VRUIControls::VRLaserPointer* laserPointer);

  /// @brief Method CreateCursors, addr 0x2eb8cf4, size 0x134, virtual false, abstract: false, final false
  inline bool CreateCursors();

  /// @brief Method RefreshLaserPointerAndLaserHit, addr 0x2eb9130, size 0x238, virtual false, abstract: false, final false
  inline void RefreshLaserPointerAndLaserHit(::UnityEngine::EventSystems::PointerEventData* pointerData);

  /// @brief Method OnApplicationFocus, addr 0x2eb9368, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method HideLaserPointersAndCursors, addr 0x2eb8e64, size 0x18, virtual false, abstract: false, final false
  inline void HideLaserPointersAndCursors();

  /// @brief Method HideLaserPointers, addr 0x2eb93d4, size 0x60, virtual false, abstract: false, final false
  inline void HideLaserPointers();

  /// @brief Method HideCursors, addr 0x2eb9374, size 0x60, virtual false, abstract: false, final false
  inline void HideCursors();

  /// @brief Method get_state, addr 0x2eb9434, size 0x2f4, virtual false, abstract: false, final false
  inline ::StringW get_state();

  /// @brief Method Process, addr 0x2eb8130, size 0x68, virtual false, abstract: false, final false
  inline void Process(::UnityEngine::EventSystems::PointerEventData* pointerEventData);

  static inline ::VRUIControls::VRPointer* New_ctor();

  /// @brief Method .ctor, addr 0x2eb9728, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPointer(VRPointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPointer(VRPointer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPointer();

public:
  /// @brief Field _leftVRController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____leftVRController;

  /// @brief Field _rightVRController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____rightVRController;

  /// @brief Field _laserPointerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____laserPointerPrefab;

  /// @brief Field _cursorPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cursorPrefab;

  /// @brief Field _defaultLaserPointerLength, offset: 0x38, size: 0x4, def value: None
  float_t ____defaultLaserPointerLength;

  /// @brief Field _laserPointerWidth, offset: 0x3c, size: 0x4, def value: None
  float_t ____laserPointerWidth;

  /// @brief Field _laserPointer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____laserPointer;

  /// @brief Field _cursorTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cursorTransform;

  /// @brief Field _leftLaserPointer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____leftLaserPointer;

  /// @brief Field _rightLaserPointer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRLaserPointer> ____rightLaserPointer;

  /// @brief Field _leftCursorTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftCursorTransform;

  /// @brief Field _rightCursorTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightCursorTransform;

  /// @brief Field _eventSystem, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____eventSystem;

  /// @brief Field _lastSelectedVrController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____lastSelectedVrController;

  /// @brief Field _lastSelectedControllerWasRight, offset: 0x80, size: 0x1, def value: None
  bool ____lastSelectedControllerWasRight;

  /// @brief Field _rightControllerWasReleased, offset: 0x81, size: 0x1, def value: None
  bool ____rightControllerWasReleased;

  /// @brief Field _leftControllerWasReleased, offset: 0x82, size: 0x1, def value: None
  bool ____leftControllerWasReleased;

  /// @brief Field _hasLaserPointers, offset: 0x83, size: 0x1, def value: None
  bool ____hasLaserPointers;

  /// @brief Field _hasCursors, offset: 0x84, size: 0x1, def value: None
  bool ____hasCursors;

  /// @brief Field _pointerData, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ____pointerData;

  /// @brief Field kScrollMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kScrollMultiplier{ 1.0 };

  /// @brief Field kTriggerThreshold offset 0xffffffff size 0x4
  static constexpr float_t kTriggerThreshold{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRPointer, 0x90>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftVRController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightVRController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____cursorPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____defaultLaserPointerLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointerWidth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____laserPointer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____cursorTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftLaserPointer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightLaserPointer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftCursorTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightCursorTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____eventSystem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____lastSelectedVrController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____lastSelectedControllerWasRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____rightControllerWasReleased) == 0x81, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____leftControllerWasReleased) == 0x82, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____hasLaserPointers) == 0x83, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____hasCursors) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRPointer, ____pointerData) == 0x88, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRPointer*, "VRUIControls", "VRPointer");
