#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8442))
// CS Name: ::OVRDebugHeadController*
class CORDL_TYPE OVRDebugHeadController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AllowPitchLook, offset 0x18, size 0x1
  __declspec(property(get = __get_AllowPitchLook, put = __set_AllowPitchLook)) bool AllowPitchLook;

  /// @brief Field AllowYawLook, offset 0x19, size 0x1
  __declspec(property(get = __get_AllowYawLook, put = __set_AllowYawLook)) bool AllowYawLook;

  /// @brief Field InvertPitch, offset 0x1a, size 0x1
  __declspec(property(get = __get_InvertPitch, put = __set_InvertPitch)) bool InvertPitch;

  /// @brief Field GamePad_PitchDegreesPerSec, offset 0x1c, size 0x4
  __declspec(property(get = __get_GamePad_PitchDegreesPerSec, put = __set_GamePad_PitchDegreesPerSec)) float_t GamePad_PitchDegreesPerSec;

  /// @brief Field GamePad_YawDegreesPerSec, offset 0x20, size 0x4
  __declspec(property(get = __get_GamePad_YawDegreesPerSec, put = __set_GamePad_YawDegreesPerSec)) float_t GamePad_YawDegreesPerSec;

  /// @brief Field AllowMovement, offset 0x24, size 0x1
  __declspec(property(get = __get_AllowMovement, put = __set_AllowMovement)) bool AllowMovement;

  /// @brief Field ForwardSpeed, offset 0x28, size 0x4
  __declspec(property(get = __get_ForwardSpeed, put = __set_ForwardSpeed)) float_t ForwardSpeed;

  /// @brief Field StrafeSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __get_StrafeSpeed, put = __set_StrafeSpeed)) float_t StrafeSpeed;

  /// @brief Field CameraRig, offset 0x30, size 0x8
  __declspec(property(get = __get_CameraRig, put = __set_CameraRig))::GlobalNamespace::OVRCameraRig* CameraRig;

  constexpr bool& __get_AllowPitchLook();

  constexpr bool const& __get_AllowPitchLook() const;

  constexpr void __set_AllowPitchLook(bool value);

  constexpr bool& __get_AllowYawLook();

  constexpr bool const& __get_AllowYawLook() const;

  constexpr void __set_AllowYawLook(bool value);

  constexpr bool& __get_InvertPitch();

  constexpr bool const& __get_InvertPitch() const;

  constexpr void __set_InvertPitch(bool value);

  constexpr float_t& __get_GamePad_PitchDegreesPerSec();

  constexpr float_t const& __get_GamePad_PitchDegreesPerSec() const;

  constexpr void __set_GamePad_PitchDegreesPerSec(float_t value);

  constexpr float_t& __get_GamePad_YawDegreesPerSec();

  constexpr float_t const& __get_GamePad_YawDegreesPerSec() const;

  constexpr void __set_GamePad_YawDegreesPerSec(float_t value);

  constexpr bool& __get_AllowMovement();

  constexpr bool const& __get_AllowMovement() const;

  constexpr void __set_AllowMovement(bool value);

  constexpr float_t& __get_ForwardSpeed();

  constexpr float_t const& __get_ForwardSpeed() const;

  constexpr void __set_ForwardSpeed(float_t value);

  constexpr float_t& __get_StrafeSpeed();

  constexpr float_t const& __get_StrafeSpeed() const;

  constexpr void __set_StrafeSpeed(float_t value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get_CameraRig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get_CameraRig() const;

  constexpr void __set_CameraRig(::GlobalNamespace::OVRCameraRig* value);

  /// @brief Method Awake addr 0x25c2888 size 0xf0 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x25c2978 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x25c297c size 0x524 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRDebugHeadController* New_ctor();

  /// @brief Method .ctor addr 0x25c2ea0 size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDebugHeadController(OVRDebugHeadController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugHeadController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDebugHeadController(OVRDebugHeadController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDebugHeadController();

public:
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
  ::GlobalNamespace::OVRCameraRig* ___CameraRig;

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
