#pragma once
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
// Type: ::MouseLook
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5836))
// CS Name: ::MouseLook*
class CORDL_TYPE MouseLook : public ::System::Object {
public:
  // Declarations
  /// @brief Field _xSensitivity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__xSensitivity, put = __cordl_internal_set__xSensitivity)) float_t _xSensitivity;

  /// @brief Field _ySensitivity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ySensitivity, put = __cordl_internal_set__ySensitivity)) float_t _ySensitivity;

  /// @brief Field _clampVerticalRotation, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__clampVerticalRotation, put = __cordl_internal_set__clampVerticalRotation)) bool _clampVerticalRotation;

  /// @brief Field _minimumX, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumX, put = __cordl_internal_set__minimumX)) float_t _minimumX;

  /// @brief Field _maximumX, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maximumX, put = __cordl_internal_set__maximumX)) float_t _maximumX;

  /// @brief Field _smooth, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) bool _smooth;

  /// @brief Field _smoothTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__smoothTime, put = __cordl_internal_set__smoothTime)) float_t _smoothTime;

  /// @brief Field _lockCursor, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__lockCursor, put = __cordl_internal_set__lockCursor)) bool _lockCursor;

  /// @brief Field _characterTargetRot, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__characterTargetRot, put = __cordl_internal_set__characterTargetRot))::UnityEngine::Quaternion _characterTargetRot;

  /// @brief Field _cameraTargetRot, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraTargetRot, put = __cordl_internal_set__cameraTargetRot))::UnityEngine::Quaternion _cameraTargetRot;

  /// @brief Field _cursorIsLocked, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__cursorIsLocked, put = __cordl_internal_set__cursorIsLocked)) bool _cursorIsLocked;

  constexpr float_t& __cordl_internal_get__xSensitivity();

  constexpr float_t const& __cordl_internal_get__xSensitivity() const;

  constexpr void __cordl_internal_set__xSensitivity(float_t value);

  constexpr float_t& __cordl_internal_get__ySensitivity();

  constexpr float_t const& __cordl_internal_get__ySensitivity() const;

  constexpr void __cordl_internal_set__ySensitivity(float_t value);

  constexpr bool& __cordl_internal_get__clampVerticalRotation();

  constexpr bool const& __cordl_internal_get__clampVerticalRotation() const;

  constexpr void __cordl_internal_set__clampVerticalRotation(bool value);

  constexpr float_t& __cordl_internal_get__minimumX();

  constexpr float_t const& __cordl_internal_get__minimumX() const;

  constexpr void __cordl_internal_set__minimumX(float_t value);

  constexpr float_t& __cordl_internal_get__maximumX();

  constexpr float_t const& __cordl_internal_get__maximumX() const;

  constexpr void __cordl_internal_set__maximumX(float_t value);

  constexpr bool& __cordl_internal_get__smooth();

  constexpr bool const& __cordl_internal_get__smooth() const;

  constexpr void __cordl_internal_set__smooth(bool value);

  constexpr float_t& __cordl_internal_get__smoothTime();

  constexpr float_t const& __cordl_internal_get__smoothTime() const;

  constexpr void __cordl_internal_set__smoothTime(float_t value);

  constexpr bool& __cordl_internal_get__lockCursor();

  constexpr bool const& __cordl_internal_get__lockCursor() const;

  constexpr void __cordl_internal_set__lockCursor(bool value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__characterTargetRot();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__characterTargetRot() const;

  constexpr void __cordl_internal_set__characterTargetRot(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__cameraTargetRot();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__cameraTargetRot() const;

  constexpr void __cordl_internal_set__cameraTargetRot(::UnityEngine::Quaternion value);

  constexpr bool& __cordl_internal_get__cursorIsLocked();

  constexpr bool const& __cordl_internal_get__cursorIsLocked() const;

  constexpr void __cordl_internal_set__cursorIsLocked(bool value);

  /// @brief Method Init, addr 0x22edba4, size 0x6c, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Transform* character, ::UnityEngine::Transform* camera);

  /// @brief Method SetRotations, addr 0x22ee7bc, size 0x14, virtual false, abstract: false, final false
  inline void SetRotations(::UnityEngine::Quaternion characterRotation, ::UnityEngine::Quaternion cameraRotation);

  /// @brief Method LookRotation, addr 0x22ee248, size 0x35c, virtual false, abstract: false, final false
  inline void LookRotation(::UnityEngine::Transform* character, ::UnityEngine::Transform* camera);

  /// @brief Method SetCursorLock, addr 0x22edc10, size 0x34, virtual false, abstract: false, final false
  inline void SetCursorLock(bool value);

  /// @brief Method UpdateCursorLock, addr 0x22ee834, size 0x10, virtual false, abstract: false, final false
  inline void UpdateCursorLock();

  /// @brief Method InternalLockUpdate, addr 0x22ee844, size 0x78, virtual false, abstract: false, final false
  inline void InternalLockUpdate();

  /// @brief Method ClampRotationAroundXAxis, addr 0x22ee7d0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ClampRotationAroundXAxis(::UnityEngine::Quaternion q);

  static inline ::GlobalNamespace::MouseLook* New_ctor();

  /// @brief Method .ctor, addr 0x22ee788, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLook(MouseLook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLook(MouseLook const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLook();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MouseLook, 0x58>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MouseLook);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MouseLook*, "", "MouseLook");
