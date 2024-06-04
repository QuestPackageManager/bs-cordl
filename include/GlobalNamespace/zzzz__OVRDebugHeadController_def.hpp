#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDebugHeadController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRDebugHeadController)
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDebugHeadController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDebugHeadController);
// Type: ::OVRDebugHeadController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRDebugHeadController*
class CORDL_TYPE OVRDebugHeadController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AllowMovement, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowMovement, put = __cordl_internal_set_AllowMovement)) bool AllowMovement;

  /// @brief Field AllowPitchLook, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowPitchLook, put = __cordl_internal_set_AllowPitchLook)) bool AllowPitchLook;

  /// @brief Field AllowYawLook, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_AllowYawLook, put = __cordl_internal_set_AllowYawLook)) bool AllowYawLook;

  /// @brief Field CameraRig, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CameraRig, put = __cordl_internal_set_CameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> CameraRig;

  /// @brief Field ForwardSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ForwardSpeed, put = __cordl_internal_set_ForwardSpeed)) float_t ForwardSpeed;

  /// @brief Field GamePad_PitchDegreesPerSec, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_GamePad_PitchDegreesPerSec, put = __cordl_internal_set_GamePad_PitchDegreesPerSec)) float_t GamePad_PitchDegreesPerSec;

  /// @brief Field GamePad_YawDegreesPerSec, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_GamePad_YawDegreesPerSec, put = __cordl_internal_set_GamePad_YawDegreesPerSec)) float_t GamePad_YawDegreesPerSec;

  /// @brief Field InvertPitch, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_InvertPitch, put = __cordl_internal_set_InvertPitch)) bool InvertPitch;

  /// @brief Field StrafeSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_StrafeSpeed, put = __cordl_internal_set_StrafeSpeed)) float_t StrafeSpeed;

  /// @brief Method Awake, addr 0x2b127b8, size 0xf0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRDebugHeadController* New_ctor();

  /// @brief Method Start, addr 0x2b128a8, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2b128ac, size 0x524, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_AllowMovement() const;

  constexpr bool& __cordl_internal_get_AllowMovement();

  constexpr bool const& __cordl_internal_get_AllowPitchLook() const;

  constexpr bool& __cordl_internal_get_AllowPitchLook();

  constexpr bool const& __cordl_internal_get_AllowYawLook() const;

  constexpr bool& __cordl_internal_get_AllowYawLook();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_CameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_CameraRig();

  constexpr float_t const& __cordl_internal_get_ForwardSpeed() const;

  constexpr float_t& __cordl_internal_get_ForwardSpeed();

  constexpr float_t const& __cordl_internal_get_GamePad_PitchDegreesPerSec() const;

  constexpr float_t& __cordl_internal_get_GamePad_PitchDegreesPerSec();

  constexpr float_t const& __cordl_internal_get_GamePad_YawDegreesPerSec() const;

  constexpr float_t& __cordl_internal_get_GamePad_YawDegreesPerSec();

  constexpr bool const& __cordl_internal_get_InvertPitch() const;

  constexpr bool& __cordl_internal_get_InvertPitch();

  constexpr float_t const& __cordl_internal_get_StrafeSpeed() const;

  constexpr float_t& __cordl_internal_get_StrafeSpeed();

  constexpr void __cordl_internal_set_AllowMovement(bool value);

  constexpr void __cordl_internal_set_AllowPitchLook(bool value);

  constexpr void __cordl_internal_set_AllowYawLook(bool value);

  constexpr void __cordl_internal_set_CameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_ForwardSpeed(float_t value);

  constexpr void __cordl_internal_set_GamePad_PitchDegreesPerSec(float_t value);

  constexpr void __cordl_internal_set_GamePad_YawDegreesPerSec(float_t value);

  constexpr void __cordl_internal_set_InvertPitch(bool value);

  constexpr void __cordl_internal_set_StrafeSpeed(float_t value);

  /// @brief Method .ctor, addr 0x2b12dd0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDebugHeadController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDebugHeadController(OVRDebugHeadController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDebugHeadController(OVRDebugHeadController const&) = delete;

  /// @brief Field AllowPitchLook, offset: 0x18, size: 0x1, def value: None
  bool ___AllowPitchLook;

  /// @brief Field AllowYawLook, offset: 0x19, size: 0x1, def value: None
  bool ___AllowYawLook;

  /// @brief Field InvertPitch, offset: 0x1a, size: 0x1, def value: None
  bool ___InvertPitch;

  /// @brief Field GamePad_PitchDegreesPerSec, offset: 0x1c, size: 0x4, def value: None
  float_t ___GamePad_PitchDegreesPerSec;

  /// @brief Field GamePad_YawDegreesPerSec, offset: 0x20, size: 0x4, def value: None
  float_t ___GamePad_YawDegreesPerSec;

  /// @brief Field AllowMovement, offset: 0x24, size: 0x1, def value: None
  bool ___AllowMovement;

  /// @brief Field ForwardSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___ForwardSpeed;

  /// @brief Field StrafeSpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ___StrafeSpeed;

  /// @brief Field CameraRig, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___CameraRig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDebugHeadController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___AllowPitchLook) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___AllowYawLook) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___InvertPitch) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___GamePad_PitchDegreesPerSec) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___GamePad_YawDegreesPerSec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___AllowMovement) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___ForwardSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___StrafeSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugHeadController, ___CameraRig) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDebugHeadController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDebugHeadController*, "", "OVRDebugHeadController");
