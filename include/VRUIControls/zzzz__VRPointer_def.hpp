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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15678))
// CS Name: ::VRUIControls::VRPointer*
class CORDL_TYPE VRPointer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftVRController, offset 0x18, size 0x8
  __declspec(property(get = __get__leftVRController, put = __set__leftVRController))::GlobalNamespace::VRController* _leftVRController;

  /// @brief Field _rightVRController, offset 0x20, size 0x8
  __declspec(property(get = __get__rightVRController, put = __set__rightVRController))::GlobalNamespace::VRController* _rightVRController;

  /// @brief Field _laserPointerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__laserPointerPrefab, put = __set__laserPointerPrefab))::VRUIControls::VRLaserPointer* _laserPointerPrefab;

  /// @brief Field _cursorPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__cursorPrefab, put = __set__cursorPrefab))::UnityEngine::Transform* _cursorPrefab;

  /// @brief Field _defaultLaserPointerLength, offset 0x38, size 0x4
  __declspec(property(get = __get__defaultLaserPointerLength, put = __set__defaultLaserPointerLength)) float_t _defaultLaserPointerLength;

  /// @brief Field _laserPointerWidth, offset 0x3c, size 0x4
  __declspec(property(get = __get__laserPointerWidth, put = __set__laserPointerWidth)) float_t _laserPointerWidth;

  /// @brief Field _laserPointer, offset 0x40, size 0x8
  __declspec(property(get = __get__laserPointer, put = __set__laserPointer))::VRUIControls::VRLaserPointer* _laserPointer;

  /// @brief Field _cursorTransform, offset 0x48, size 0x8
  __declspec(property(get = __get__cursorTransform, put = __set__cursorTransform))::UnityEngine::Transform* _cursorTransform;

  /// @brief Field _leftLaserPointer, offset 0x50, size 0x8
  __declspec(property(get = __get__leftLaserPointer, put = __set__leftLaserPointer))::VRUIControls::VRLaserPointer* _leftLaserPointer;

  /// @brief Field _rightLaserPointer, offset 0x58, size 0x8
  __declspec(property(get = __get__rightLaserPointer, put = __set__rightLaserPointer))::VRUIControls::VRLaserPointer* _rightLaserPointer;

  /// @brief Field _leftCursorTransform, offset 0x60, size 0x8
  __declspec(property(get = __get__leftCursorTransform, put = __set__leftCursorTransform))::UnityEngine::Transform* _leftCursorTransform;

  /// @brief Field _rightCursorTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__rightCursorTransform, put = __set__rightCursorTransform))::UnityEngine::Transform* _rightCursorTransform;

  /// @brief Field _eventSystem, offset 0x70, size 0x8
  __declspec(property(get = __get__eventSystem, put = __set__eventSystem))::UnityEngine::EventSystems::EventSystem* _eventSystem;

  /// @brief Field _lastSelectedVrController, offset 0x78, size 0x8
  __declspec(property(get = __get__lastSelectedVrController, put = __set__lastSelectedVrController))::GlobalNamespace::VRController* _lastSelectedVrController;

  /// @brief Field _lastSelectedControllerWasRight, offset 0x80, size 0x1
  __declspec(property(get = __get__lastSelectedControllerWasRight, put = __set__lastSelectedControllerWasRight)) bool _lastSelectedControllerWasRight;

  /// @brief Field _rightControllerWasReleased, offset 0x81, size 0x1
  __declspec(property(get = __get__rightControllerWasReleased, put = __set__rightControllerWasReleased)) bool _rightControllerWasReleased;

  /// @brief Field _leftControllerWasReleased, offset 0x82, size 0x1
  __declspec(property(get = __get__leftControllerWasReleased, put = __set__leftControllerWasReleased)) bool _leftControllerWasReleased;

  /// @brief Field _hasLaserPointers, offset 0x83, size 0x1
  __declspec(property(get = __get__hasLaserPointers, put = __set__hasLaserPointers)) bool _hasLaserPointers;

  /// @brief Field _hasCursors, offset 0x84, size 0x1
  __declspec(property(get = __get__hasCursors, put = __set__hasCursors)) bool _hasCursors;

  /// @brief Field _pointerData, offset 0x88, size 0x8
  __declspec(property(get = __get__pointerData, put = __set__pointerData))::UnityEngine::EventSystems::PointerEventData* _pointerData;

  __declspec(property(get = get_lastSelectedVrController))::GlobalNamespace::VRController* lastSelectedVrController;

  __declspec(property(get = get_cursorPosition))::UnityEngine::Vector3 cursorPosition;

  __declspec(property(get = get_state))::StringW state;

  constexpr ::GlobalNamespace::VRController*& __get__leftVRController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__leftVRController() const;

  constexpr void __set__leftVRController(::GlobalNamespace::VRController* value);

  constexpr ::GlobalNamespace::VRController*& __get__rightVRController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__rightVRController() const;

  constexpr void __set__rightVRController(::GlobalNamespace::VRController* value);

  constexpr ::VRUIControls::VRLaserPointer*& __get__laserPointerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRLaserPointer*> const& __get__laserPointerPrefab() const;

  constexpr void __set__laserPointerPrefab(::VRUIControls::VRLaserPointer* value);

  constexpr ::UnityEngine::Transform*& __get__cursorPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__cursorPrefab() const;

  constexpr void __set__cursorPrefab(::UnityEngine::Transform* value);

  constexpr float_t& __get__defaultLaserPointerLength();

  constexpr float_t const& __get__defaultLaserPointerLength() const;

  constexpr void __set__defaultLaserPointerLength(float_t value);

  constexpr float_t& __get__laserPointerWidth();

  constexpr float_t const& __get__laserPointerWidth() const;

  constexpr void __set__laserPointerWidth(float_t value);

  constexpr ::VRUIControls::VRLaserPointer*& __get__laserPointer();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRLaserPointer*> const& __get__laserPointer() const;

  constexpr void __set__laserPointer(::VRUIControls::VRLaserPointer* value);

  constexpr ::UnityEngine::Transform*& __get__cursorTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__cursorTransform() const;

  constexpr void __set__cursorTransform(::UnityEngine::Transform* value);

  constexpr ::VRUIControls::VRLaserPointer*& __get__leftLaserPointer();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRLaserPointer*> const& __get__leftLaserPointer() const;

  constexpr void __set__leftLaserPointer(::VRUIControls::VRLaserPointer* value);

  constexpr ::VRUIControls::VRLaserPointer*& __get__rightLaserPointer();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRLaserPointer*> const& __get__rightLaserPointer() const;

  constexpr void __set__rightLaserPointer(::VRUIControls::VRLaserPointer* value);

  constexpr ::UnityEngine::Transform*& __get__leftCursorTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftCursorTransform() const;

  constexpr void __set__leftCursorTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightCursorTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightCursorTransform() const;

  constexpr void __set__rightCursorTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get__eventSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get__eventSystem() const;

  constexpr void __set__eventSystem(::UnityEngine::EventSystems::EventSystem* value);

  constexpr ::GlobalNamespace::VRController*& __get__lastSelectedVrController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__lastSelectedVrController() const;

  constexpr void __set__lastSelectedVrController(::GlobalNamespace::VRController* value);

  constexpr bool& __get__lastSelectedControllerWasRight();

  constexpr bool const& __get__lastSelectedControllerWasRight() const;

  constexpr void __set__lastSelectedControllerWasRight(bool value);

  constexpr bool& __get__rightControllerWasReleased();

  constexpr bool const& __get__rightControllerWasReleased() const;

  constexpr void __set__rightControllerWasReleased(bool value);

  constexpr bool& __get__leftControllerWasReleased();

  constexpr bool const& __get__leftControllerWasReleased() const;

  constexpr void __set__leftControllerWasReleased(bool value);

  constexpr bool& __get__hasLaserPointers();

  constexpr bool const& __get__hasLaserPointers() const;

  constexpr void __set__hasLaserPointers(bool value);

  constexpr bool& __get__hasCursors();

  constexpr bool const& __get__hasCursors() const;

  constexpr void __set__hasCursors(bool value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get__pointerData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get__pointerData() const;

  constexpr void __set__pointerData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method get_lastSelectedVrController, addr 0x2eb8a44, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::VRController* get_lastSelectedVrController();

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
  ::GlobalNamespace::VRController* ____leftVRController;

  /// @brief Field _rightVRController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____rightVRController;

  /// @brief Field _laserPointerPrefab, offset: 0x28, size: 0x8, def value: None
  ::VRUIControls::VRLaserPointer* ____laserPointerPrefab;

  /// @brief Field _cursorPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____cursorPrefab;

  /// @brief Field _defaultLaserPointerLength, offset: 0x38, size: 0x4, def value: None
  float_t ____defaultLaserPointerLength;

  /// @brief Field _laserPointerWidth, offset: 0x3c, size: 0x4, def value: None
  float_t ____laserPointerWidth;

  /// @brief Field _laserPointer, offset: 0x40, size: 0x8, def value: None
  ::VRUIControls::VRLaserPointer* ____laserPointer;

  /// @brief Field _cursorTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____cursorTransform;

  /// @brief Field _leftLaserPointer, offset: 0x50, size: 0x8, def value: None
  ::VRUIControls::VRLaserPointer* ____leftLaserPointer;

  /// @brief Field _rightLaserPointer, offset: 0x58, size: 0x8, def value: None
  ::VRUIControls::VRLaserPointer* ____rightLaserPointer;

  /// @brief Field _leftCursorTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftCursorTransform;

  /// @brief Field _rightCursorTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightCursorTransform;

  /// @brief Field _eventSystem, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ____eventSystem;

  /// @brief Field _lastSelectedVrController, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____lastSelectedVrController;

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
