#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlayerController)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPlayerController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRPlayerController);
// Type: ::OVRPlayerController
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 206, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(7535)), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4751 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(8153)) CS
// Name: ::OVRPlayerController*
class CORDL_TYPE OVRPlayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Acceleration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Acceleration, put = __cordl_internal_set_Acceleration)) float_t Acceleration;

  /// @brief Field Damping, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Damping, put = __cordl_internal_set_Damping)) float_t Damping;

  /// @brief Field BackAndSideDampen, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_BackAndSideDampen, put = __cordl_internal_set_BackAndSideDampen)) float_t BackAndSideDampen;

  /// @brief Field JumpForce, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_JumpForce, put = __cordl_internal_set_JumpForce)) float_t JumpForce;

  /// @brief Field RotationAmount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_RotationAmount, put = __cordl_internal_set_RotationAmount)) float_t RotationAmount;

  /// @brief Field RotationRatchet, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_RotationRatchet, put = __cordl_internal_set_RotationRatchet)) float_t RotationRatchet;

  /// @brief Field SnapRotation, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_SnapRotation, put = __cordl_internal_set_SnapRotation)) bool SnapRotation;

  /// @brief Field RotateAroundGuardianCenter, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_RotateAroundGuardianCenter, put = __cordl_internal_set_RotateAroundGuardianCenter)) bool RotateAroundGuardianCenter;

  /// @brief Field FixedSpeedSteps, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_FixedSpeedSteps, put = __cordl_internal_set_FixedSpeedSteps)) int32_t FixedSpeedSteps;

  /// @brief Field HmdResetsY, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_HmdResetsY, put = __cordl_internal_set_HmdResetsY)) bool HmdResetsY;

  /// @brief Field HmdRotatesY, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_HmdRotatesY, put = __cordl_internal_set_HmdRotatesY)) bool HmdRotatesY;

  /// @brief Field GravityModifier, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_GravityModifier, put = __cordl_internal_set_GravityModifier)) float_t GravityModifier;

  /// @brief Field useProfileData, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_useProfileData, put = __cordl_internal_set_useProfileData)) bool useProfileData;

  /// @brief Field CameraHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_CameraHeight, put = __cordl_internal_set_CameraHeight)) float_t CameraHeight;

  /// @brief Field TransformUpdated, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_TransformUpdated, put = __cordl_internal_set_TransformUpdated))::System::Action_1<::UnityW<::UnityEngine::Transform>>* TransformUpdated;

  /// @brief Field Teleported, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_Teleported, put = __cordl_internal_set_Teleported)) bool Teleported;

  /// @brief Field CameraUpdated, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_CameraUpdated, put = __cordl_internal_set_CameraUpdated))::System::Action* CameraUpdated;

  /// @brief Field PreCharacterMove, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PreCharacterMove, put = __cordl_internal_set_PreCharacterMove))::System::Action* PreCharacterMove;

  /// @brief Field EnableLinearMovement, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableLinearMovement, put = __cordl_internal_set_EnableLinearMovement)) bool EnableLinearMovement;

  /// @brief Field EnableRotation, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableRotation, put = __cordl_internal_set_EnableRotation)) bool EnableRotation;

  /// @brief Field RotationEitherThumbstick, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_RotationEitherThumbstick, put = __cordl_internal_set_RotationEitherThumbstick)) bool RotationEitherThumbstick;

  /// @brief Field Controller, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_Controller, put = __cordl_internal_set_Controller))::UnityW<::UnityEngine::CharacterController> Controller;

  /// @brief Field CameraRig, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_CameraRig, put = __cordl_internal_set_CameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> CameraRig;

  /// @brief Field MoveScale, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_MoveScale, put = __cordl_internal_set_MoveScale)) float_t MoveScale;

  /// @brief Field MoveThrottle, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get_MoveThrottle, put = __cordl_internal_set_MoveThrottle))::UnityEngine::Vector3 MoveThrottle;

  /// @brief Field FallSpeed, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_FallSpeed, put = __cordl_internal_set_FallSpeed)) float_t FallSpeed;

  /// @brief Field InitialPose, offset 0x94, size 0x20
  __declspec(property(get = __cordl_internal_get_InitialPose, put = __cordl_internal_set_InitialPose))::System::Nullable_1<::GlobalNamespace::OVRPose> InitialPose;

  /// @brief Field <InitialYRotation>k__BackingField, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__InitialYRotation_k__BackingField, put = __cordl_internal_set__InitialYRotation_k__BackingField)) float_t _InitialYRotation_k__BackingField;

  /// @brief Field MoveScaleMultiplier, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_MoveScaleMultiplier, put = __cordl_internal_set_MoveScaleMultiplier)) float_t MoveScaleMultiplier;

  /// @brief Field RotationScaleMultiplier, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_RotationScaleMultiplier, put = __cordl_internal_set_RotationScaleMultiplier)) float_t RotationScaleMultiplier;

  /// @brief Field SkipMouseRotation, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_SkipMouseRotation, put = __cordl_internal_set_SkipMouseRotation)) bool SkipMouseRotation;

  /// @brief Field HaltUpdateMovement, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_HaltUpdateMovement, put = __cordl_internal_set_HaltUpdateMovement)) bool HaltUpdateMovement;

  /// @brief Field prevHatLeft, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get_prevHatLeft, put = __cordl_internal_set_prevHatLeft)) bool prevHatLeft;

  /// @brief Field prevHatRight, offset 0xc3, size 0x1
  __declspec(property(get = __cordl_internal_get_prevHatRight, put = __cordl_internal_set_prevHatRight)) bool prevHatRight;

  /// @brief Field SimulationRate, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_SimulationRate, put = __cordl_internal_set_SimulationRate)) float_t SimulationRate;

  /// @brief Field buttonRotation, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonRotation, put = __cordl_internal_set_buttonRotation)) float_t buttonRotation;

  /// @brief Field ReadyToSnapTurn, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_ReadyToSnapTurn, put = __cordl_internal_set_ReadyToSnapTurn)) bool ReadyToSnapTurn;

  /// @brief Field playerControllerEnabled, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get_playerControllerEnabled, put = __cordl_internal_set_playerControllerEnabled)) bool playerControllerEnabled;

  __declspec(property(get = get_InitialYRotation, put = set_InitialYRotation)) float_t InitialYRotation;

  constexpr float_t& __cordl_internal_get_Acceleration();

  constexpr float_t const& __cordl_internal_get_Acceleration() const;

  constexpr void __cordl_internal_set_Acceleration(float_t value);

  constexpr float_t& __cordl_internal_get_Damping();

  constexpr float_t const& __cordl_internal_get_Damping() const;

  constexpr void __cordl_internal_set_Damping(float_t value);

  constexpr float_t& __cordl_internal_get_BackAndSideDampen();

  constexpr float_t const& __cordl_internal_get_BackAndSideDampen() const;

  constexpr void __cordl_internal_set_BackAndSideDampen(float_t value);

  constexpr float_t& __cordl_internal_get_JumpForce();

  constexpr float_t const& __cordl_internal_get_JumpForce() const;

  constexpr void __cordl_internal_set_JumpForce(float_t value);

  constexpr float_t& __cordl_internal_get_RotationAmount();

  constexpr float_t const& __cordl_internal_get_RotationAmount() const;

  constexpr void __cordl_internal_set_RotationAmount(float_t value);

  constexpr float_t& __cordl_internal_get_RotationRatchet();

  constexpr float_t const& __cordl_internal_get_RotationRatchet() const;

  constexpr void __cordl_internal_set_RotationRatchet(float_t value);

  constexpr bool& __cordl_internal_get_SnapRotation();

  constexpr bool const& __cordl_internal_get_SnapRotation() const;

  constexpr void __cordl_internal_set_SnapRotation(bool value);

  constexpr bool& __cordl_internal_get_RotateAroundGuardianCenter();

  constexpr bool const& __cordl_internal_get_RotateAroundGuardianCenter() const;

  constexpr void __cordl_internal_set_RotateAroundGuardianCenter(bool value);

  constexpr int32_t& __cordl_internal_get_FixedSpeedSteps();

  constexpr int32_t const& __cordl_internal_get_FixedSpeedSteps() const;

  constexpr void __cordl_internal_set_FixedSpeedSteps(int32_t value);

  constexpr bool& __cordl_internal_get_HmdResetsY();

  constexpr bool const& __cordl_internal_get_HmdResetsY() const;

  constexpr void __cordl_internal_set_HmdResetsY(bool value);

  constexpr bool& __cordl_internal_get_HmdRotatesY();

  constexpr bool const& __cordl_internal_get_HmdRotatesY() const;

  constexpr void __cordl_internal_set_HmdRotatesY(bool value);

  constexpr float_t& __cordl_internal_get_GravityModifier();

  constexpr float_t const& __cordl_internal_get_GravityModifier() const;

  constexpr void __cordl_internal_set_GravityModifier(float_t value);

  constexpr bool& __cordl_internal_get_useProfileData();

  constexpr bool const& __cordl_internal_get_useProfileData() const;

  constexpr void __cordl_internal_set_useProfileData(bool value);

  constexpr float_t& __cordl_internal_get_CameraHeight();

  constexpr float_t const& __cordl_internal_get_CameraHeight() const;

  constexpr void __cordl_internal_set_CameraHeight(float_t value);

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TransformUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_TransformUpdated() const;

  constexpr void __cordl_internal_set_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr bool& __cordl_internal_get_Teleported();

  constexpr bool const& __cordl_internal_get_Teleported() const;

  constexpr void __cordl_internal_set_Teleported(bool value);

  constexpr ::System::Action*& __cordl_internal_get_CameraUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_CameraUpdated() const;

  constexpr void __cordl_internal_set_CameraUpdated(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_PreCharacterMove();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_PreCharacterMove() const;

  constexpr void __cordl_internal_set_PreCharacterMove(::System::Action* value);

  constexpr bool& __cordl_internal_get_EnableLinearMovement();

  constexpr bool const& __cordl_internal_get_EnableLinearMovement() const;

  constexpr void __cordl_internal_set_EnableLinearMovement(bool value);

  constexpr bool& __cordl_internal_get_EnableRotation();

  constexpr bool const& __cordl_internal_get_EnableRotation() const;

  constexpr void __cordl_internal_set_EnableRotation(bool value);

  constexpr bool& __cordl_internal_get_RotationEitherThumbstick();

  constexpr bool const& __cordl_internal_get_RotationEitherThumbstick() const;

  constexpr void __cordl_internal_set_RotationEitherThumbstick(bool value);

  constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_Controller();

  constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_Controller() const;

  constexpr void __cordl_internal_set_Controller(::UnityW<::UnityEngine::CharacterController> value);

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_CameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_CameraRig() const;

  constexpr void __cordl_internal_set_CameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr float_t& __cordl_internal_get_MoveScale();

  constexpr float_t const& __cordl_internal_get_MoveScale() const;

  constexpr void __cordl_internal_set_MoveScale(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_MoveThrottle();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_MoveThrottle() const;

  constexpr void __cordl_internal_set_MoveThrottle(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_FallSpeed();

  constexpr float_t const& __cordl_internal_get_FallSpeed() const;

  constexpr void __cordl_internal_set_FallSpeed(float_t value);

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRPose>& __cordl_internal_get_InitialPose();

  constexpr ::System::Nullable_1<::GlobalNamespace::OVRPose> const& __cordl_internal_get_InitialPose() const;

  constexpr void __cordl_internal_set_InitialPose(::System::Nullable_1<::GlobalNamespace::OVRPose> value);

  constexpr float_t& __cordl_internal_get__InitialYRotation_k__BackingField();

  constexpr float_t const& __cordl_internal_get__InitialYRotation_k__BackingField() const;

  constexpr void __cordl_internal_set__InitialYRotation_k__BackingField(float_t value);

  constexpr float_t& __cordl_internal_get_MoveScaleMultiplier();

  constexpr float_t const& __cordl_internal_get_MoveScaleMultiplier() const;

  constexpr void __cordl_internal_set_MoveScaleMultiplier(float_t value);

  constexpr float_t& __cordl_internal_get_RotationScaleMultiplier();

  constexpr float_t const& __cordl_internal_get_RotationScaleMultiplier() const;

  constexpr void __cordl_internal_set_RotationScaleMultiplier(float_t value);

  constexpr bool& __cordl_internal_get_SkipMouseRotation();

  constexpr bool const& __cordl_internal_get_SkipMouseRotation() const;

  constexpr void __cordl_internal_set_SkipMouseRotation(bool value);

  constexpr bool& __cordl_internal_get_HaltUpdateMovement();

  constexpr bool const& __cordl_internal_get_HaltUpdateMovement() const;

  constexpr void __cordl_internal_set_HaltUpdateMovement(bool value);

  constexpr bool& __cordl_internal_get_prevHatLeft();

  constexpr bool const& __cordl_internal_get_prevHatLeft() const;

  constexpr void __cordl_internal_set_prevHatLeft(bool value);

  constexpr bool& __cordl_internal_get_prevHatRight();

  constexpr bool const& __cordl_internal_get_prevHatRight() const;

  constexpr void __cordl_internal_set_prevHatRight(bool value);

  constexpr float_t& __cordl_internal_get_SimulationRate();

  constexpr float_t const& __cordl_internal_get_SimulationRate() const;

  constexpr void __cordl_internal_set_SimulationRate(float_t value);

  constexpr float_t& __cordl_internal_get_buttonRotation();

  constexpr float_t const& __cordl_internal_get_buttonRotation() const;

  constexpr void __cordl_internal_set_buttonRotation(float_t value);

  constexpr bool& __cordl_internal_get_ReadyToSnapTurn();

  constexpr bool const& __cordl_internal_get_ReadyToSnapTurn() const;

  constexpr void __cordl_internal_set_ReadyToSnapTurn(bool value);

  constexpr bool& __cordl_internal_get_playerControllerEnabled();

  constexpr bool const& __cordl_internal_get_playerControllerEnabled() const;

  constexpr void __cordl_internal_set_playerControllerEnabled(bool value);

  /// @brief Method add_TransformUpdated, addr 0x27b6ee4, size 0xb0, virtual false, abstract: false, final false
  inline void add_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method remove_TransformUpdated, addr 0x27b6f94, size 0xb0, virtual false, abstract: false, final false
  inline void remove_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method add_CameraUpdated, addr 0x27b7044, size 0x9c, virtual false, abstract: false, final false
  inline void add_CameraUpdated(::System::Action* value);

  /// @brief Method remove_CameraUpdated, addr 0x27b70e0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_CameraUpdated(::System::Action* value);

  /// @brief Method add_PreCharacterMove, addr 0x27b717c, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreCharacterMove(::System::Action* value);

  /// @brief Method remove_PreCharacterMove, addr 0x27b7218, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreCharacterMove(::System::Action* value);

  /// @brief Method get_InitialYRotation, addr 0x27b72b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_InitialYRotation();

  /// @brief Method set_InitialYRotation, addr 0x27b72bc, size 0x8, virtual false, abstract: false, final false
  inline void set_InitialYRotation(float_t value);

  /// @brief Method Start, addr 0x27b72c4, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Awake, addr 0x27b7388, size 0x1c8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x27b7550, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x27b7554, size 0x19c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Update, addr 0x27b76f0, size 0x1fc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateController, addr 0x27b78ec, size 0x6f0, virtual true, abstract: false, final false
  inline void UpdateController();

  /// @brief Method UpdateMovement, addr 0x27b7fdc, size 0xc94, virtual true, abstract: false, final false
  inline void UpdateMovement();

  /// @brief Method UpdateTransform, addr 0x27b8c70, size 0x188, virtual false, abstract: false, final false
  inline void UpdateTransform(::GlobalNamespace::OVRCameraRig* rig);

  /// @brief Method Jump, addr 0x27b8df8, size 0x80, virtual false, abstract: false, final false
  inline bool Jump();

  /// @brief Method Stop, addr 0x27b8e78, size 0xa4, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method GetMoveScaleMultiplier, addr 0x27b8f1c, size 0xc, virtual false, abstract: false, final false
  inline void GetMoveScaleMultiplier(ByRef<float_t> moveScaleMultiplier);

  /// @brief Method SetMoveScaleMultiplier, addr 0x27b8f28, size 0x8, virtual false, abstract: false, final false
  inline void SetMoveScaleMultiplier(float_t moveScaleMultiplier);

  /// @brief Method GetRotationScaleMultiplier, addr 0x27b8f30, size 0xc, virtual false, abstract: false, final false
  inline void GetRotationScaleMultiplier(ByRef<float_t> rotationScaleMultiplier);

  /// @brief Method SetRotationScaleMultiplier, addr 0x27b8f3c, size 0x8, virtual false, abstract: false, final false
  inline void SetRotationScaleMultiplier(float_t rotationScaleMultiplier);

  /// @brief Method GetSkipMouseRotation, addr 0x27b8f44, size 0xc, virtual false, abstract: false, final false
  inline void GetSkipMouseRotation(ByRef<bool> skipMouseRotation);

  /// @brief Method SetSkipMouseRotation, addr 0x27b8f50, size 0xc, virtual false, abstract: false, final false
  inline void SetSkipMouseRotation(bool skipMouseRotation);

  /// @brief Method GetHaltUpdateMovement, addr 0x27b8f5c, size 0xc, virtual false, abstract: false, final false
  inline void GetHaltUpdateMovement(ByRef<bool> haltUpdateMovement);

  /// @brief Method SetHaltUpdateMovement, addr 0x27b8f68, size 0xc, virtual false, abstract: false, final false
  inline void SetHaltUpdateMovement(bool haltUpdateMovement);

  /// @brief Method ResetOrientation, addr 0x27b8f74, size 0xc4, virtual false, abstract: false, final false
  inline void ResetOrientation();

  static inline ::GlobalNamespace::OVRPlayerController* New_ctor();

  /// @brief Method .ctor, addr 0x27b9038, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPlayerController(OVRPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPlayerController(OVRPlayerController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlayerController();

public:
  /// @brief Field Acceleration, offset: 0x18, size: 0x4, def value: None
  float_t ___Acceleration;

  /// @brief Field Damping, offset: 0x1c, size: 0x4, def value: None
  float_t ___Damping;

  /// @brief Field BackAndSideDampen, offset: 0x20, size: 0x4, def value: None
  float_t ___BackAndSideDampen;

  /// @brief Field JumpForce, offset: 0x24, size: 0x4, def value: None
  float_t ___JumpForce;

  /// @brief Field RotationAmount, offset: 0x28, size: 0x4, def value: None
  float_t ___RotationAmount;

  /// @brief Field RotationRatchet, offset: 0x2c, size: 0x4, def value: None
  float_t ___RotationRatchet;

  /// @brief Field SnapRotation, offset: 0x30, size: 0x1, def value: None
  bool ___SnapRotation;

  /// @brief Field RotateAroundGuardianCenter, offset: 0x31, size: 0x1, def value: None
  bool ___RotateAroundGuardianCenter;

  /// @brief Field FixedSpeedSteps, offset: 0x34, size: 0x4, def value: None
  int32_t ___FixedSpeedSteps;

  /// @brief Field HmdResetsY, offset: 0x38, size: 0x1, def value: None
  bool ___HmdResetsY;

  /// @brief Field HmdRotatesY, offset: 0x39, size: 0x1, def value: None
  bool ___HmdRotatesY;

  /// @brief Field GravityModifier, offset: 0x3c, size: 0x4, def value: None
  float_t ___GravityModifier;

  /// @brief Field useProfileData, offset: 0x40, size: 0x1, def value: None
  bool ___useProfileData;

  /// @brief Field CameraHeight, offset: 0x44, size: 0x4, def value: None
  float_t ___CameraHeight;

  /// @brief Field TransformUpdated, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Transform>>* ___TransformUpdated;

  /// @brief Field Teleported, offset: 0x50, size: 0x1, def value: None
  bool ___Teleported;

  /// @brief Field CameraUpdated, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___CameraUpdated;

  /// @brief Field PreCharacterMove, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___PreCharacterMove;

  /// @brief Field EnableLinearMovement, offset: 0x68, size: 0x1, def value: None
  bool ___EnableLinearMovement;

  /// @brief Field EnableRotation, offset: 0x69, size: 0x1, def value: None
  bool ___EnableRotation;

  /// @brief Field RotationEitherThumbstick, offset: 0x6a, size: 0x1, def value: None
  bool ___RotationEitherThumbstick;

  /// @brief Field Controller, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CharacterController> ___Controller;

  /// @brief Field CameraRig, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___CameraRig;

  /// @brief Field MoveScale, offset: 0x80, size: 0x4, def value: None
  float_t ___MoveScale;

  /// @brief Field MoveThrottle, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___MoveThrottle;

  /// @brief Field FallSpeed, offset: 0x90, size: 0x4, def value: None
  float_t ___FallSpeed;

  /// @brief Field InitialPose, offset: 0x94, size: 0x20, def value: None
  ::System::Nullable_1<::GlobalNamespace::OVRPose> ___InitialPose;

  /// @brief Field <InitialYRotation>k__BackingField, offset: 0xb4, size: 0x4, def value: None
  float_t ____InitialYRotation_k__BackingField;

  /// @brief Field MoveScaleMultiplier, offset: 0xb8, size: 0x4, def value: None
  float_t ___MoveScaleMultiplier;

  /// @brief Field RotationScaleMultiplier, offset: 0xbc, size: 0x4, def value: None
  float_t ___RotationScaleMultiplier;

  /// @brief Field SkipMouseRotation, offset: 0xc0, size: 0x1, def value: None
  bool ___SkipMouseRotation;

  /// @brief Field HaltUpdateMovement, offset: 0xc1, size: 0x1, def value: None
  bool ___HaltUpdateMovement;

  /// @brief Field prevHatLeft, offset: 0xc2, size: 0x1, def value: None
  bool ___prevHatLeft;

  /// @brief Field prevHatRight, offset: 0xc3, size: 0x1, def value: None
  bool ___prevHatRight;

  /// @brief Field SimulationRate, offset: 0xc4, size: 0x4, def value: None
  float_t ___SimulationRate;

  /// @brief Field buttonRotation, offset: 0xc8, size: 0x4, def value: None
  float_t ___buttonRotation;

  /// @brief Field ReadyToSnapTurn, offset: 0xcc, size: 0x1, def value: None
  bool ___ReadyToSnapTurn;

  /// @brief Field playerControllerEnabled, offset: 0xcd, size: 0x1, def value: None
  bool ___playerControllerEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlayerController, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___Acceleration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___Damping) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___BackAndSideDampen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___JumpForce) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___RotationAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___RotationRatchet) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___SnapRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___RotateAroundGuardianCenter) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___FixedSpeedSteps) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___HmdResetsY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___HmdRotatesY) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___GravityModifier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___useProfileData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___CameraHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___TransformUpdated) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___Teleported) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___CameraUpdated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___PreCharacterMove) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___EnableLinearMovement) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___EnableRotation) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___RotationEitherThumbstick) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___Controller) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___CameraRig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___MoveScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___MoveThrottle) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___FallSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___InitialPose) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ____InitialYRotation_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___MoveScaleMultiplier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___RotationScaleMultiplier) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___SkipMouseRotation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___HaltUpdateMovement) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___prevHatLeft) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___prevHatRight) == 0xc3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___SimulationRate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___buttonRotation) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___ReadyToSnapTurn) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlayerController, ___playerControllerEnabled) == 0xcd, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlayerController*, "", "OVRPlayerController");
