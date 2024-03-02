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
class Grounding;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace RootMotion::FinalIK {
struct __GrounderQuadruped__Foot;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
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
// CS Name: ::GrounderQuadruped::Foot
struct CORDL_TYPE __GrounderQuadruped__Foot {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1325c10, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GrounderQuadruped__Foot();

  // Ctor Parameters [CppParam { name: "solver", ty: "::RootMotion::FinalIK::IKSolver*", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>",
  // modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "leg", ty:
  // "::RootMotion::FinalIK::__Grounding__Leg*", modifiers: "", def_value: None }]
  constexpr __GrounderQuadruped__Foot(::RootMotion::FinalIK::IKSolver* solver, ::UnityW<::UnityEngine::Transform> transform, ::UnityEngine::Quaternion rotation,
                                      ::RootMotion::FinalIK::__Grounding__Leg* leg) noexcept;

  /// @brief Field solver, offset: 0x0, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolver* solver;

  /// @brief Field transform, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> transform;

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

static_assert(offsetof(::RootMotion::FinalIK::__GrounderQuadruped__Foot, solver) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderQuadruped__Foot, transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderQuadruped__Foot, rotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__GrounderQuadruped__Foot, leg) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderQuadruped
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::GrounderQuadruped*
class CORDL_TYPE GrounderQuadruped : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  using Foot = ::RootMotion::FinalIK::__GrounderQuadruped__Foot;

  /// @brief Field angle, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_angle, put = __cordl_internal_set_angle)) float_t angle;

  /// @brief Field animatedHeadLocalRotation, offset 0xcc, size 0x10
  __declspec(property(get = __cordl_internal_get_animatedHeadLocalRotation, put = __cordl_internal_set_animatedHeadLocalRotation))::UnityEngine::Quaternion animatedHeadLocalRotation;

  /// @brief Field animatedPelvisLocalPosition, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get_animatedPelvisLocalPosition, put = __cordl_internal_set_animatedPelvisLocalPosition))::UnityEngine::Vector3 animatedPelvisLocalPosition;

  /// @brief Field animatedPelvisLocalRotation, offset 0xbc, size 0x10
  __declspec(property(get = __cordl_internal_get_animatedPelvisLocalRotation, put = __cordl_internal_set_animatedPelvisLocalRotation))::UnityEngine::Quaternion animatedPelvisLocalRotation;

  /// @brief Field characterRoot, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_characterRoot, put = __cordl_internal_set_characterRoot))::UnityW<::UnityEngine::Transform> characterRoot;

  /// @brief Field characterRootRigidbody, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_characterRootRigidbody, put = __cordl_internal_set_characterRootRigidbody))::UnityW<::UnityEngine::Rigidbody> characterRootRigidbody;

  /// @brief Field feet, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_feet,
                      put = __cordl_internal_set_feet))::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> feet;

  /// @brief Field forefeetRoot, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_forefeetRoot, put = __cordl_internal_set_forefeetRoot))::UnityW<::UnityEngine::Transform> forefeetRoot;

  /// @brief Field forelegSolver, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_forelegSolver, put = __cordl_internal_set_forelegSolver))::RootMotion::FinalIK::Grounding* forelegSolver;

  /// @brief Field forelegs, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_forelegs, put = __cordl_internal_set_forelegs))::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> forelegs;

  /// @brief Field gravity, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_gravity, put = __cordl_internal_set_gravity))::UnityEngine::Vector3 gravity;

  /// @brief Field head, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::UnityW<::UnityEngine::Transform> head;

  /// @brief Field headRotation, offset 0x120, size 0x10
  __declspec(property(get = __cordl_internal_get_headRotation, put = __cordl_internal_set_headRotation))::UnityEngine::Quaternion headRotation;

  /// @brief Field lastSpineBone, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lastSpineBone, put = __cordl_internal_set_lastSpineBone))::UnityW<::UnityEngine::Transform> lastSpineBone;

  /// @brief Field lastWeight, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_lastWeight, put = __cordl_internal_set_lastWeight)) float_t lastWeight;

  /// @brief Field legs, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_legs, put = __cordl_internal_set_legs))::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> legs;

  /// @brief Field maintainHeadRotationWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_maintainHeadRotationWeight, put = __cordl_internal_set_maintainHeadRotationWeight)) float_t maintainHeadRotationWeight;

  /// @brief Field maxForeLegOffset, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxForeLegOffset, put = __cordl_internal_set_maxForeLegOffset)) float_t maxForeLegOffset;

  /// @brief Field maxLegOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_maxLegOffset, put = __cordl_internal_set_maxLegOffset)) float_t maxLegOffset;

  /// @brief Field maxRootRotation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRootRotation, put = __cordl_internal_set_maxRootRotation)) float_t maxRootRotation;

  /// @brief Field minRootRotation, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_minRootRotation, put = __cordl_internal_set_minRootRotation)) float_t minRootRotation;

  /// @brief Field pelvis, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::UnityW<::UnityEngine::Transform> pelvis;

  /// @brief Field rootRotationSpeed, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_rootRotationSpeed, put = __cordl_internal_set_rootRotationSpeed)) float_t rootRotationSpeed;

  /// @brief Field rootRotationWeight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_rootRotationWeight, put = __cordl_internal_set_rootRotationWeight)) float_t rootRotationWeight;

  /// @brief Field solved, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_solved, put = __cordl_internal_set_solved)) bool solved;

  /// @brief Field solvedFeet, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_solvedFeet, put = __cordl_internal_set_solvedFeet)) int32_t solvedFeet;

  /// @brief Field solvedHeadLocalRotation, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get_solvedHeadLocalRotation, put = __cordl_internal_set_solvedHeadLocalRotation))::UnityEngine::Quaternion solvedHeadLocalRotation;

  /// @brief Field solvedPelvisLocalPosition, offset 0xdc, size 0xc
  __declspec(property(get = __cordl_internal_get_solvedPelvisLocalPosition, put = __cordl_internal_set_solvedPelvisLocalPosition))::UnityEngine::Vector3 solvedPelvisLocalPosition;

  /// @brief Field solvedPelvisLocalRotation, offset 0xe8, size 0x10
  __declspec(property(get = __cordl_internal_get_solvedPelvisLocalRotation, put = __cordl_internal_set_solvedPelvisLocalRotation))::UnityEngine::Quaternion solvedPelvisLocalRotation;

  /// @brief Method DestroyLegs, addr 0x1326ec8, size 0x1fc, virtual false, abstract: false, final false
  inline void DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents);

  /// @brief Method Initiate, addr 0x13255a8, size 0x314, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method InitiateFeet, addr 0x13258bc, size 0x354, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
  InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents,
               ByRef<::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>> f, int32_t indexOffset);

  /// @brief Method IsReadyToInitiate, addr 0x1325204, size 0x104, virtual false, abstract: false, final false
  inline bool IsReadyToInitiate();

  /// @brief Method IsReadyToInitiateLegs, addr 0x1325308, size 0x1e4, virtual false, abstract: false, final false
  inline bool IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ikComponents);

  /// @brief Method LateUpdate, addr 0x1325c44, size 0x90, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::RootMotion::FinalIK::GrounderQuadruped* New_ctor();

  /// @brief Method OnDestroy, addr 0x1326e98, size 0x30, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x13254ec, size 0x64, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPostSolverUpdate, addr 0x1326bd0, size 0x2c8, virtual false, abstract: false, final false
  inline void OnPostSolverUpdate();

  /// @brief Method OnSolverUpdate, addr 0x1326124, size 0x6c0, virtual false, abstract: false, final false
  inline void OnSolverUpdate();

  /// @brief Method OpenScriptReference, addr 0x1325198, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x1325154, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method ResetPosition, addr 0x13251dc, size 0x28, virtual true, abstract: false, final false
  inline void ResetPosition();

  /// @brief Method RootRotation, addr 0x1325cd4, size 0x450, virtual false, abstract: false, final false
  inline void RootRotation();

  /// @brief Method SetFootIK, addr 0x1326a9c, size 0x134, virtual false, abstract: false, final false
  inline void SetFootIK(::RootMotion::FinalIK::__GrounderQuadruped__Foot foot, float_t maxOffset);

  /// @brief Method Update, addr 0x1325550, size 0x58, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateForefeetRoot, addr 0x13267e4, size 0x2b8, virtual false, abstract: false, final false
  inline void UpdateForefeetRoot();

  constexpr float_t const& __cordl_internal_get_angle() const;

  constexpr float_t& __cordl_internal_get_angle();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_animatedHeadLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_animatedHeadLocalRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_animatedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_animatedPelvisLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_animatedPelvisLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_animatedPelvisLocalRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_characterRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_characterRoot();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_characterRootRigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_characterRootRigidbody();

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> const& __cordl_internal_get_feet() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*>& __cordl_internal_get_feet();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_forefeetRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_forefeetRoot();

  constexpr ::RootMotion::FinalIK::Grounding*& __cordl_internal_get_forelegSolver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& __cordl_internal_get_forelegSolver() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& __cordl_internal_get_forelegs() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& __cordl_internal_get_forelegs();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lastSpineBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lastSpineBone();

  constexpr float_t const& __cordl_internal_get_lastWeight() const;

  constexpr float_t& __cordl_internal_get_lastWeight();

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& __cordl_internal_get_legs() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& __cordl_internal_get_legs();

  constexpr float_t const& __cordl_internal_get_maintainHeadRotationWeight() const;

  constexpr float_t& __cordl_internal_get_maintainHeadRotationWeight();

  constexpr float_t const& __cordl_internal_get_maxForeLegOffset() const;

  constexpr float_t& __cordl_internal_get_maxForeLegOffset();

  constexpr float_t const& __cordl_internal_get_maxLegOffset() const;

  constexpr float_t& __cordl_internal_get_maxLegOffset();

  constexpr float_t const& __cordl_internal_get_maxRootRotation() const;

  constexpr float_t& __cordl_internal_get_maxRootRotation();

  constexpr float_t const& __cordl_internal_get_minRootRotation() const;

  constexpr float_t& __cordl_internal_get_minRootRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pelvis() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pelvis();

  constexpr float_t const& __cordl_internal_get_rootRotationSpeed() const;

  constexpr float_t& __cordl_internal_get_rootRotationSpeed();

  constexpr float_t const& __cordl_internal_get_rootRotationWeight() const;

  constexpr float_t& __cordl_internal_get_rootRotationWeight();

  constexpr bool const& __cordl_internal_get_solved() const;

  constexpr bool& __cordl_internal_get_solved();

  constexpr int32_t const& __cordl_internal_get_solvedFeet() const;

  constexpr int32_t& __cordl_internal_get_solvedFeet();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_solvedHeadLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_solvedHeadLocalRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_solvedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_solvedPelvisLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_solvedPelvisLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_solvedPelvisLocalRotation();

  constexpr void __cordl_internal_set_angle(float_t value);

  constexpr void __cordl_internal_set_animatedHeadLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_animatedPelvisLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_characterRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_characterRootRigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_feet(::ArrayW<::RootMotion::FinalIK::__GrounderQuadruped__Foot, ::Array<::RootMotion::FinalIK::__GrounderQuadruped__Foot>*> value);

  constexpr void __cordl_internal_set_forefeetRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_forelegSolver(::RootMotion::FinalIK::Grounding* value);

  constexpr void __cordl_internal_set_forelegs(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value);

  constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_headRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_lastSpineBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lastWeight(float_t value);

  constexpr void __cordl_internal_set_legs(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value);

  constexpr void __cordl_internal_set_maintainHeadRotationWeight(float_t value);

  constexpr void __cordl_internal_set_maxForeLegOffset(float_t value);

  constexpr void __cordl_internal_set_maxLegOffset(float_t value);

  constexpr void __cordl_internal_set_maxRootRotation(float_t value);

  constexpr void __cordl_internal_set_minRootRotation(float_t value);

  constexpr void __cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rootRotationSpeed(float_t value);

  constexpr void __cordl_internal_set_rootRotationWeight(float_t value);

  constexpr void __cordl_internal_set_solved(bool value);

  constexpr void __cordl_internal_set_solvedFeet(int32_t value);

  constexpr void __cordl_internal_set_solvedHeadLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_solvedPelvisLocalRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x13270c4, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderQuadruped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderQuadruped(GrounderQuadruped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderQuadruped(GrounderQuadruped const&) = delete;

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
  ::UnityW<::UnityEngine::Transform> ___characterRoot;

  /// @brief Field pelvis, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvis;

  /// @brief Field lastSpineBone, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lastSpineBone;

  /// @brief Field head, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___head;

  /// @brief Field legs, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> ___legs;

  /// @brief Field forelegs, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> ___forelegs;

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
  ::UnityW<::UnityEngine::Transform> ___forefeetRoot;

  /// @brief Field headRotation, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headRotation;

  /// @brief Field lastWeight, offset: 0x130, size: 0x4, def value: None
  float_t ___lastWeight;

  /// @brief Field characterRootRigidbody, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___characterRootRigidbody;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderQuadruped, 0x140>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___forelegSolver) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___rootRotationWeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___minRootRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___maxRootRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___rootRotationSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___maxLegOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___maxForeLegOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___maintainHeadRotationWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___characterRoot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___pelvis) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___lastSpineBone) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___head) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___legs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___forelegs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___gravity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___feet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___animatedPelvisLocalPosition) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___animatedPelvisLocalRotation) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___animatedHeadLocalRotation) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___solvedPelvisLocalPosition) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___solvedPelvisLocalRotation) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___solvedHeadLocalRotation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___solvedFeet) == 0x108, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___solved) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___angle) == 0x110, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___forefeetRoot) == 0x118, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___headRotation) == 0x120, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___lastWeight) == 0x130, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderQuadruped, ___characterRootRigidbody) == 0x138, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderQuadruped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderQuadruped*, "RootMotion.FinalIK", "GrounderQuadruped");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GrounderQuadruped__Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
