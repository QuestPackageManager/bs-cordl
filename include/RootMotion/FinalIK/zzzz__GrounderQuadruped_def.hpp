#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GrounderQuadruped)
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Rigidbody;
}
namespace RootMotion::FinalIK {
struct __GrounderQuadruped__Foot;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class Grounding;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderQuadruped;
}
namespace RootMotion::FinalIK {
struct __GrounderQuadruped__Foot;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderQuadruped);
MARK_VAL_T(::RootMotion::FinalIK::__GrounderQuadruped__Foot);
// Type: ::Foot
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12523))
// CS Name: ::GrounderQuadruped::Foot
struct CORDL_TYPE __GrounderQuadruped__Foot {
public:
  // Declarations
  /// @brief Method .ctor addr 0x1249b74 size 0x34 virtual false final false
  inline void _ctor(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform);

  // Ctor Parameters [CppParam { name: "solver", ty: "::RootMotion::FinalIK::IKSolver*", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityEngine::Transform*", modifiers: "",
  // def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "leg", ty: "::RootMotion::FinalIK::__Grounding__Leg*",
  // modifiers: "", def_value: None }]
  constexpr __GrounderQuadruped__Foot(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform, ::UnityEngine::Quaternion rotation,
                                      ::RootMotion::FinalIK::__Grounding__Leg* leg) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GrounderQuadruped__Foot();

  /// @brief Field solver, offset: 0x0, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolver* solver;

  /// @brief Field transform, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Transform* transform;

  /// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field leg, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::__Grounding__Leg* leg;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__GrounderQuadruped__Foot, 0x28>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderQuadruped
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12524))
// CS Name: ::RootMotion.FinalIK::GrounderQuadruped*
class CORDL_TYPE GrounderQuadruped : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  using Foot = ::RootMotion::FinalIK::__GrounderQuadruped__Foot;

  /// @brief Field forelegSolver, offset 0x40, size 0x8
  __declspec(property(get = __get_forelegSolver, put = __set_forelegSolver))::RootMotion::FinalIK::Grounding* forelegSolver;

  /// @brief Field rootRotationWeight, offset 0x48, size 0x4
  __declspec(property(get = __get_rootRotationWeight, put = __set_rootRotationWeight)) float_t rootRotationWeight;

  /// @brief Field minRootRotation, offset 0x4c, size 0x4
  __declspec(property(get = __get_minRootRotation, put = __set_minRootRotation)) float_t minRootRotation;

  /// @brief Field maxRootRotation, offset 0x50, size 0x4
  __declspec(property(get = __get_maxRootRotation, put = __set_maxRootRotation)) float_t maxRootRotation;

  /// @brief Field rootRotationSpeed, offset 0x54, size 0x4
  __declspec(property(get = __get_rootRotationSpeed, put = __set_rootRotationSpeed)) float_t rootRotationSpeed;

  /// @brief Field maxLegOffset, offset 0x58, size 0x4
  __declspec(property(get = __get_maxLegOffset, put = __set_maxLegOffset)) float_t maxLegOffset;

  /// @brief Field maxForeLegOffset, offset 0x5c, size 0x4
  __declspec(property(get = __get_maxForeLegOffset, put = __set_maxForeLegOffset)) float_t maxForeLegOffset;

  /// @brief Field maintainHeadRotationWeight, offset 0x60, size 0x4
  __declspec(property(get = __get_maintainHeadRotationWeight, put = __set_maintainHeadRotationWeight)) float_t maintainHeadRotationWeight;

  /// @brief Field characterRoot, offset 0x68, size 0x8
  __declspec(property(get = __get_characterRoot, put = __set_characterRoot))::UnityEngine::Transform* characterRoot;

  /// @brief Field pelvis, offset 0x70, size 0x8
  __declspec(property(get = __get_pelvis, put = __set_pelvis))::UnityEngine::Transform* pelvis;

  /// @brief Field lastSpineBone, offset 0x78, size 0x8
  __declspec(property(get = __get_lastSpineBone, put = __set_lastSpineBone))::UnityEngine::Transform* lastSpineBone;

  /// @brief Field head, offset 0x80, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::UnityEngine::Transform* head;

  /// @brief Field legs, offset 0x88, size 0x8
  __declspec(property(get = __get_legs, put = __set_legs))::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> legs;

  /// @brief Field forelegs, offset 0x90, size 0x8
  __declspec(property(get = __get_forelegs, put = __set_forelegs))::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> forelegs;

  /// @brief Field gravity, offset 0x98, size 0xc
  __declspec(property(get = __get_gravity, put = __set_gravity))::UnityEngine::Vector3 gravity;

  /// @brief Field feet, offset 0xa8, size 0x8
  __declspec(property(get = __get_feet, put = __set_feet))::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> feet;

  /// @brief Field animatedPelvisLocalPosition, offset 0xb0, size 0xc
  __declspec(property(get = __get_animatedPelvisLocalPosition, put = __set_animatedPelvisLocalPosition))::UnityEngine::Vector3 animatedPelvisLocalPosition;

  /// @brief Field animatedPelvisLocalRotation, offset 0xbc, size 0x10
  __declspec(property(get = __get_animatedPelvisLocalRotation, put = __set_animatedPelvisLocalRotation))::UnityEngine::Quaternion animatedPelvisLocalRotation;

  /// @brief Field animatedHeadLocalRotation, offset 0xcc, size 0x10
  __declspec(property(get = __get_animatedHeadLocalRotation, put = __set_animatedHeadLocalRotation))::UnityEngine::Quaternion animatedHeadLocalRotation;

  /// @brief Field solvedPelvisLocalPosition, offset 0xdc, size 0xc
  __declspec(property(get = __get_solvedPelvisLocalPosition, put = __set_solvedPelvisLocalPosition))::UnityEngine::Vector3 solvedPelvisLocalPosition;

  /// @brief Field solvedPelvisLocalRotation, offset 0xe8, size 0x10
  __declspec(property(get = __get_solvedPelvisLocalRotation, put = __set_solvedPelvisLocalRotation))::UnityEngine::Quaternion solvedPelvisLocalRotation;

  /// @brief Field solvedHeadLocalRotation, offset 0xf8, size 0x10
  __declspec(property(get = __get_solvedHeadLocalRotation, put = __set_solvedHeadLocalRotation))::UnityEngine::Quaternion solvedHeadLocalRotation;

  /// @brief Field solvedFeet, offset 0x108, size 0x4
  __declspec(property(get = __get_solvedFeet, put = __set_solvedFeet)) int32_t solvedFeet;

  /// @brief Field solved, offset 0x10c, size 0x1
  __declspec(property(get = __get_solved, put = __set_solved)) bool solved;

  /// @brief Field angle, offset 0x110, size 0x4
  __declspec(property(get = __get_angle, put = __set_angle)) float_t angle;

  /// @brief Field forefeetRoot, offset 0x118, size 0x8
  __declspec(property(get = __get_forefeetRoot, put = __set_forefeetRoot))::UnityEngine::Transform* forefeetRoot;

  /// @brief Field headRotation, offset 0x120, size 0x10
  __declspec(property(get = __get_headRotation, put = __set_headRotation))::UnityEngine::Quaternion headRotation;

  /// @brief Field lastWeight, offset 0x130, size 0x4
  __declspec(property(get = __get_lastWeight, put = __set_lastWeight)) float_t lastWeight;

  /// @brief Field characterRootRigidbody, offset 0x138, size 0x8
  __declspec(property(get = __get_characterRootRigidbody, put = __set_characterRootRigidbody))::UnityEngine::Rigidbody* characterRootRigidbody;

  constexpr ::RootMotion::FinalIK::Grounding*& __get_forelegSolver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& __get_forelegSolver() const;

  constexpr void __set_forelegSolver(::RootMotion::FinalIK::Grounding* value);

  constexpr float_t& __get_rootRotationWeight();

  constexpr float_t const& __get_rootRotationWeight() const;

  constexpr void __set_rootRotationWeight(float_t value);

  constexpr float_t& __get_minRootRotation();

  constexpr float_t const& __get_minRootRotation() const;

  constexpr void __set_minRootRotation(float_t value);

  constexpr float_t& __get_maxRootRotation();

  constexpr float_t const& __get_maxRootRotation() const;

  constexpr void __set_maxRootRotation(float_t value);

  constexpr float_t& __get_rootRotationSpeed();

  constexpr float_t const& __get_rootRotationSpeed() const;

  constexpr void __set_rootRotationSpeed(float_t value);

  constexpr float_t& __get_maxLegOffset();

  constexpr float_t const& __get_maxLegOffset() const;

  constexpr void __set_maxLegOffset(float_t value);

  constexpr float_t& __get_maxForeLegOffset();

  constexpr float_t const& __get_maxForeLegOffset() const;

  constexpr void __set_maxForeLegOffset(float_t value);

  constexpr float_t& __get_maintainHeadRotationWeight();

  constexpr float_t const& __get_maintainHeadRotationWeight() const;

  constexpr void __set_maintainHeadRotationWeight(float_t value);

  constexpr ::UnityEngine::Transform*& __get_characterRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_characterRoot() const;

  constexpr void __set_characterRoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_pelvis() const;

  constexpr void __set_pelvis(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_lastSpineBone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_lastSpineBone() const;

  constexpr void __set_lastSpineBone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_head() const;

  constexpr void __set_head(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& __get_legs();

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& __get_legs() const;

  constexpr void __set_legs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& __get_forelegs();

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& __get_forelegs() const;

  constexpr void __set_forelegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value);

  constexpr ::UnityEngine::Vector3& __get_gravity();

  constexpr ::UnityEngine::Vector3 const& __get_gravity() const;

  constexpr void __set_gravity(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>& __get_feet();

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> const& __get_feet() const;

  constexpr void __set_feet(::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> value);

  constexpr ::UnityEngine::Vector3& __get_animatedPelvisLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_animatedPelvisLocalPosition() const;

  constexpr void __set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_animatedPelvisLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_animatedPelvisLocalRotation() const;

  constexpr void __set_animatedPelvisLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_animatedHeadLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_animatedHeadLocalRotation() const;

  constexpr void __set_animatedHeadLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_solvedPelvisLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_solvedPelvisLocalPosition() const;

  constexpr void __set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_solvedPelvisLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_solvedPelvisLocalRotation() const;

  constexpr void __set_solvedPelvisLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_solvedHeadLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_solvedHeadLocalRotation() const;

  constexpr void __set_solvedHeadLocalRotation(::UnityEngine::Quaternion value);

  constexpr int32_t& __get_solvedFeet();

  constexpr int32_t const& __get_solvedFeet() const;

  constexpr void __set_solvedFeet(int32_t value);

  constexpr bool& __get_solved();

  constexpr bool const& __get_solved() const;

  constexpr void __set_solved(bool value);

  constexpr float_t& __get_angle();

  constexpr float_t const& __get_angle() const;

  constexpr void __set_angle(float_t value);

  constexpr ::UnityEngine::Transform*& __get_forefeetRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_forefeetRoot() const;

  constexpr void __set_forefeetRoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Quaternion& __get_headRotation();

  constexpr ::UnityEngine::Quaternion const& __get_headRotation() const;

  constexpr void __set_headRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get_lastWeight();

  constexpr float_t const& __get_lastWeight() const;

  constexpr void __set_lastWeight(float_t value);

  constexpr ::UnityEngine::Rigidbody*& __get_characterRootRigidbody();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get_characterRootRigidbody() const;

  constexpr void __set_characterRootRigidbody(::UnityEngine::Rigidbody* value);

  /// @brief Method OpenUserManual addr 0x12490b8 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x12490fc size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method ResetPosition addr 0x1249140 size 0x28 virtual true final false
  inline void ResetPosition();

  /// @brief Method IsReadyToInitiate addr 0x1249168 size 0x104 virtual false final false
  inline bool IsReadyToInitiate();

  /// @brief Method IsReadyToInitiateLegs addr 0x124926c size 0x1e4 virtual false final false
  inline bool IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents);

  /// @brief Method OnDisable addr 0x1249450 size 0x64 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x12494b4 size 0x58 virtual false final false
  inline void Update();

  /// @brief Method Initiate addr 0x124950c size 0x314 virtual false final false
  inline void Initiate();

  /// @brief Method InitiateFeet addr 0x1249820 size 0x354 virtual false final false
  inline ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>
  InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents,
               ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>> f, int32_t indexOffset);

  /// @brief Method LateUpdate addr 0x1249ba8 size 0x90 virtual false final false
  inline void LateUpdate();

  /// @brief Method RootRotation addr 0x1249c38 size 0x450 virtual false final false
  inline void RootRotation();

  /// @brief Method OnSolverUpdate addr 0x124a088 size 0x6c0 virtual false final false
  inline void OnSolverUpdate();

  /// @brief Method UpdateForefeetRoot addr 0x124a748 size 0x2b8 virtual false final false
  inline void UpdateForefeetRoot();

  /// @brief Method SetFootIK addr 0x124aa00 size 0x134 virtual false final false
  inline void SetFootIK(::RootMotion::FinalIK::__GrounderQuadruped__Foot foot, float_t maxOffset);

  /// @brief Method OnPostSolverUpdate addr 0x124ab34 size 0x2c8 virtual false final false
  inline void OnPostSolverUpdate();

  /// @brief Method OnDestroy addr 0x124adfc size 0x30 virtual false final false
  inline void OnDestroy();

  /// @brief Method DestroyLegs addr 0x124ae2c size 0x1fc virtual false final false
  inline void DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents);

  static inline ::RootMotion::FinalIK::GrounderQuadruped* New_ctor();

  /// @brief Method .ctor addr 0x124b028 size 0x134 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderQuadruped(GrounderQuadruped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderQuadruped(GrounderQuadruped const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderQuadruped();

public:
  /// @brief Field forelegSolver, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::Grounding* ___forelegSolver;

  /// @brief Field rootRotationWeight, offset: 0x48, size: 0x4, def value: None
  float_t ___rootRotationWeight;

  /// @brief Field minRootRotation, offset: 0x4c, size: 0x4, def value: None
  float_t ___minRootRotation;

  /// @brief Field maxRootRotation, offset: 0x50, size: 0x4, def value: None
  float_t ___maxRootRotation;

  /// @brief Field rootRotationSpeed, offset: 0x54, size: 0x4, def value: None
  float_t ___rootRotationSpeed;

  /// @brief Field maxLegOffset, offset: 0x58, size: 0x4, def value: None
  float_t ___maxLegOffset;

  /// @brief Field maxForeLegOffset, offset: 0x5c, size: 0x4, def value: None
  float_t ___maxForeLegOffset;

  /// @brief Field maintainHeadRotationWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___maintainHeadRotationWeight;

  /// @brief Field characterRoot, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ___characterRoot;

  /// @brief Field pelvis, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ___pelvis;

  /// @brief Field lastSpineBone, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ___lastSpineBone;

  /// @brief Field head, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ___head;

  /// @brief Field legs, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ___legs;

  /// @brief Field forelegs, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ___forelegs;

  /// @brief Field gravity, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___gravity;

  /// @brief Field feet, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> ___feet;

  /// @brief Field animatedPelvisLocalPosition, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animatedPelvisLocalPosition;

  /// @brief Field animatedPelvisLocalRotation, offset: 0xbc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___animatedPelvisLocalRotation;

  /// @brief Field animatedHeadLocalRotation, offset: 0xcc, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___animatedHeadLocalRotation;

  /// @brief Field solvedPelvisLocalPosition, offset: 0xdc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___solvedPelvisLocalPosition;

  /// @brief Field solvedPelvisLocalRotation, offset: 0xe8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___solvedPelvisLocalRotation;

  /// @brief Field solvedHeadLocalRotation, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___solvedHeadLocalRotation;

  /// @brief Field solvedFeet, offset: 0x108, size: 0x4, def value: None
  int32_t ___solvedFeet;

  /// @brief Field solved, offset: 0x10c, size: 0x1, def value: None
  bool ___solved;

  /// @brief Field angle, offset: 0x110, size: 0x4, def value: None
  float_t ___angle;

  /// @brief Field forefeetRoot, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Transform* ___forefeetRoot;

  /// @brief Field headRotation, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headRotation;

  /// @brief Field lastWeight, offset: 0x130, size: 0x4, def value: None
  float_t ___lastWeight;

  /// @brief Field characterRootRigidbody, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ___characterRootRigidbody;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderQuadruped, 0x140>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderQuadruped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderQuadruped*, "RootMotion.FinalIK", "GrounderQuadruped");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GrounderQuadruped__Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
