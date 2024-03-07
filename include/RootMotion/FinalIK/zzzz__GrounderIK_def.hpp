#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrounderIK)
namespace RootMotion::FinalIK {
class IK;
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
class GrounderIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderIK);
// Type: RootMotion.FinalIK::GrounderIK
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::GrounderIK*
class CORDL_TYPE GrounderIK : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  /// @brief Field animatedPelvisLocalPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_animatedPelvisLocalPosition, put = __cordl_internal_set_animatedPelvisLocalPosition))::UnityEngine::Vector3 animatedPelvisLocalPosition;

  /// @brief Field characterRoot, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_characterRoot, put = __cordl_internal_set_characterRoot))::UnityW<::UnityEngine::Transform> characterRoot;

  /// @brief Field characterRootRigidbody, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_characterRootRigidbody, put = __cordl_internal_set_characterRootRigidbody))::UnityW<::UnityEngine::Rigidbody> characterRootRigidbody;

  /// @brief Field feet, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_feet, put = __cordl_internal_set_feet))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> feet;

  /// @brief Field footRotations, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_footRotations, put = __cordl_internal_set_footRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> footRotations;

  /// @brief Field lastWeight, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_lastWeight, put = __cordl_internal_set_lastWeight)) float_t lastWeight;

  /// @brief Field legs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_legs, put = __cordl_internal_set_legs))::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> legs;

  /// @brief Field maxRootRotationAngle, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRootRotationAngle, put = __cordl_internal_set_maxRootRotationAngle)) float_t maxRootRotationAngle;

  /// @brief Field pelvis, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::UnityW<::UnityEngine::Transform> pelvis;

  /// @brief Field rootRotationSpeed, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_rootRotationSpeed, put = __cordl_internal_set_rootRotationSpeed)) float_t rootRotationSpeed;

  /// @brief Field rootRotationWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_rootRotationWeight, put = __cordl_internal_set_rootRotationWeight)) float_t rootRotationWeight;

  /// @brief Field solved, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_solved, put = __cordl_internal_set_solved)) bool solved;

  /// @brief Field solvedFeet, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_solvedFeet, put = __cordl_internal_set_solvedFeet)) int32_t solvedFeet;

  /// @brief Field solvedPelvisLocalPosition, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get_solvedPelvisLocalPosition, put = __cordl_internal_set_solvedPelvisLocalPosition))::UnityEngine::Vector3 solvedPelvisLocalPosition;

  /// @brief Method Initiate, addr 0x134c8ac, size 0x460, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method IsReadyToInitiate, addr 0x134bedc, size 0x20c, virtual false, abstract: false, final false
  inline bool IsReadyToInitiate();

  static inline ::RootMotion::FinalIK::GrounderIK* New_ctor();

  /// @brief Method OnDestroy, addr 0x134d418, size 0x204, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x134c0e8, size 0xe0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPostSolverUpdate, addr 0x134d240, size 0x1d8, virtual false, abstract: false, final false
  inline void OnPostSolverUpdate();

  /// @brief Method OnSolverUpdate, addr 0x134cd0c, size 0x1ac, virtual false, abstract: false, final false
  inline void OnSolverUpdate();

  /// @brief Method OpenScriptReference, addr 0x134be80, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x134be3c, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method ResetPosition, addr 0x134bec4, size 0x18, virtual true, abstract: false, final false
  inline void ResetPosition();

  /// @brief Method SetLegIK, addr 0x134ceb8, size 0x388, virtual false, abstract: false, final false
  inline void SetLegIK(int32_t index);

  /// @brief Method Update, addr 0x134c1c8, size 0x56c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_animatedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_animatedPelvisLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_characterRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_characterRoot();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_characterRootRigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_characterRootRigidbody();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_feet() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_feet();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_footRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_footRotations();

  constexpr float_t const& __cordl_internal_get_lastWeight() const;

  constexpr float_t& __cordl_internal_get_lastWeight();

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& __cordl_internal_get_legs() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& __cordl_internal_get_legs();

  constexpr float_t const& __cordl_internal_get_maxRootRotationAngle() const;

  constexpr float_t& __cordl_internal_get_maxRootRotationAngle();

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

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_solvedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_solvedPelvisLocalPosition();

  constexpr void __cordl_internal_set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_characterRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_characterRootRigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_feet(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_footRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_lastWeight(float_t value);

  constexpr void __cordl_internal_set_legs(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value);

  constexpr void __cordl_internal_set_maxRootRotationAngle(float_t value);

  constexpr void __cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rootRotationSpeed(float_t value);

  constexpr void __cordl_internal_set_rootRotationWeight(float_t value);

  constexpr void __cordl_internal_set_solved(bool value);

  constexpr void __cordl_internal_set_solvedFeet(int32_t value);

  constexpr void __cordl_internal_set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x134d61c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderIK(GrounderIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderIK(GrounderIK const&) = delete;

  /// @brief Field legs, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> ___legs;

  /// @brief Field pelvis, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvis;

  /// @brief Field characterRoot, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___characterRoot;

  /// @brief Field rootRotationWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___rootRotationWeight;

  /// @brief Field rootRotationSpeed, offset: 0x5c, size: 0x4, def value: None
  float_t ___rootRotationSpeed;

  /// @brief Field maxRootRotationAngle, offset: 0x60, size: 0x4, def value: None
  float_t ___maxRootRotationAngle;

  /// @brief Field feet, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___feet;

  /// @brief Field footRotations, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___footRotations;

  /// @brief Field animatedPelvisLocalPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animatedPelvisLocalPosition;

  /// @brief Field solvedPelvisLocalPosition, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___solvedPelvisLocalPosition;

  /// @brief Field solvedFeet, offset: 0x90, size: 0x4, def value: None
  int32_t ___solvedFeet;

  /// @brief Field solved, offset: 0x94, size: 0x1, def value: None
  bool ___solved;

  /// @brief Field lastWeight, offset: 0x98, size: 0x4, def value: None
  float_t ___lastWeight;

  /// @brief Field characterRootRigidbody, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___characterRootRigidbody;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderIK, 0xa8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___legs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___pelvis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___characterRoot) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___rootRotationWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___rootRotationSpeed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___maxRootRotationAngle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___feet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___footRotations) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___animatedPelvisLocalPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___solvedPelvisLocalPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___solvedFeet) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___solved) == 0x94, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___lastWeight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderIK, ___characterRootRigidbody) == 0xa0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderIK*, "RootMotion.FinalIK", "GrounderIK");
