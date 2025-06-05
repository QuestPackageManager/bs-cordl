#pragma once
// IWYU pragma private; include "GlobalNamespace/MouseLook.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MouseLook)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MouseLook;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MouseLook);
// Dependencies System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: MouseLook
class CORDL_TYPE MouseLook : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cameraTargetRot, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraTargetRot, put = __cordl_internal_set__cameraTargetRot)) ::UnityEngine::Quaternion _cameraTargetRot;

  /// @brief Field _characterTargetRot, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__characterTargetRot, put = __cordl_internal_set__characterTargetRot)) ::UnityEngine::Quaternion _characterTargetRot;

  /// @brief Field _clampVerticalRotation, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__clampVerticalRotation, put = __cordl_internal_set__clampVerticalRotation)) bool _clampVerticalRotation;

  /// @brief Field _cursorIsLocked, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__cursorIsLocked, put = __cordl_internal_set__cursorIsLocked)) bool _cursorIsLocked;

  /// @brief Field _lockCursor, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__lockCursor, put = __cordl_internal_set__lockCursor)) bool _lockCursor;

  /// @brief Field _maximumX, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maximumX, put = __cordl_internal_set__maximumX)) float_t _maximumX;

  /// @brief Field _minimumX, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumX, put = __cordl_internal_set__minimumX)) float_t _minimumX;

  /// @brief Field _smooth, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) bool _smooth;

  /// @brief Field _smoothTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__smoothTime, put = __cordl_internal_set__smoothTime)) float_t _smoothTime;

  /// @brief Field _xSensitivity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__xSensitivity, put = __cordl_internal_set__xSensitivity)) float_t _xSensitivity;

  /// @brief Field _ySensitivity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ySensitivity, put = __cordl_internal_set__ySensitivity)) float_t _ySensitivity;

  /// @brief Method ClampRotationAroundXAxis, addr 0x3b0e3d8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ClampRotationAroundXAxis(::UnityEngine::Quaternion q);

  /// @brief Method Init, addr 0x3b0d6b4, size 0x6c, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Transform* character);

  /// @brief Method InternalLockUpdate, addr 0x3b0e44c, size 0xe4, virtual false, abstract: false, final false
  inline void InternalLockUpdate();

  /// @brief Method LookRotation, addr 0x3b0dd5c, size 0x3a8, virtual false, abstract: false, final false
  inline void LookRotation(::UnityEngine::Transform* character, ::UnityEngine::Transform* camera);

  static inline ::GlobalNamespace::MouseLook* New_ctor();

  /// @brief Method SetCursorLock, addr 0x3b0d720, size 0x34, virtual false, abstract: false, final false
  inline void SetCursorLock(bool value);

  /// @brief Method SetRotations, addr 0x3b0e3c4, size 0x14, virtual false, abstract: false, final false
  inline void SetRotations(::UnityEngine::Quaternion characterRotation, ::UnityEngine::Quaternion cameraRotation);

  /// @brief Method UpdateCursorLock, addr 0x3b0e43c, size 0x10, virtual false, abstract: false, final false
  inline void UpdateCursorLock();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__cameraTargetRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__cameraTargetRot();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__characterTargetRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__characterTargetRot();

  constexpr bool const& __cordl_internal_get__clampVerticalRotation() const;

  constexpr bool& __cordl_internal_get__clampVerticalRotation();

  constexpr bool const& __cordl_internal_get__cursorIsLocked() const;

  constexpr bool& __cordl_internal_get__cursorIsLocked();

  constexpr bool const& __cordl_internal_get__lockCursor() const;

  constexpr bool& __cordl_internal_get__lockCursor();

  constexpr float_t const& __cordl_internal_get__maximumX() const;

  constexpr float_t& __cordl_internal_get__maximumX();

  constexpr float_t const& __cordl_internal_get__minimumX() const;

  constexpr float_t& __cordl_internal_get__minimumX();

  constexpr bool const& __cordl_internal_get__smooth() const;

  constexpr bool& __cordl_internal_get__smooth();

  constexpr float_t const& __cordl_internal_get__smoothTime() const;

  constexpr float_t& __cordl_internal_get__smoothTime();

  constexpr float_t const& __cordl_internal_get__xSensitivity() const;

  constexpr float_t& __cordl_internal_get__xSensitivity();

  constexpr float_t const& __cordl_internal_get__ySensitivity() const;

  constexpr float_t& __cordl_internal_get__ySensitivity();

  constexpr void __cordl_internal_set__cameraTargetRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__characterTargetRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__clampVerticalRotation(bool value);

  constexpr void __cordl_internal_set__cursorIsLocked(bool value);

  constexpr void __cordl_internal_set__lockCursor(bool value);

  constexpr void __cordl_internal_set__maximumX(float_t value);

  constexpr void __cordl_internal_set__minimumX(float_t value);

  constexpr void __cordl_internal_set__smooth(bool value);

  constexpr void __cordl_internal_set__smoothTime(float_t value);

  constexpr void __cordl_internal_set__xSensitivity(float_t value);

  constexpr void __cordl_internal_set__ySensitivity(float_t value);

  /// @brief Method .ctor, addr 0x3b0e29c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLook();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLook(MouseLook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLook(MouseLook const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5036 };

  /// @brief Field _xSensitivity, offset: 0x10, size: 0x4, def value: None
  float_t ____xSensitivity;

  /// @brief Field _ySensitivity, offset: 0x14, size: 0x4, def value: None
  float_t ____ySensitivity;

  /// @brief Field _clampVerticalRotation, offset: 0x18, size: 0x1, def value: None
  bool ____clampVerticalRotation;

  /// @brief Field _minimumX, offset: 0x1c, size: 0x4, def value: None
  float_t ____minimumX;

  /// @brief Field _maximumX, offset: 0x20, size: 0x4, def value: None
  float_t ____maximumX;

  /// @brief Field _smooth, offset: 0x24, size: 0x1, def value: None
  bool ____smooth;

  /// @brief Field _smoothTime, offset: 0x28, size: 0x4, def value: None
  float_t ____smoothTime;

  /// @brief Field _lockCursor, offset: 0x2c, size: 0x1, def value: None
  bool ____lockCursor;

  /// @brief Field _characterTargetRot, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____characterTargetRot;

  /// @brief Field _cameraTargetRot, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____cameraTargetRot;

  /// @brief Field _cursorIsLocked, offset: 0x50, size: 0x1, def value: None
  bool ____cursorIsLocked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MouseLook, ____xSensitivity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____ySensitivity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____clampVerticalRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____minimumX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____maximumX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____smooth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____smoothTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____lockCursor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____characterTargetRot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____cameraTargetRot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseLook, ____cursorIsLocked) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MouseLook, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MouseLook);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MouseLook*, "", "MouseLook");
