#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LookAtController)
namespace RootMotion::FinalIK {
class LookAtIK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LookAtController;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::LookAtController);
// Type: RootMotion.FinalIK::LookAtController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 149, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12653))
// CS Name: ::RootMotion.FinalIK::LookAtController*
class CORDL_TYPE LookAtController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::LookAtIK> ik;

  /// @brief Field target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field weight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Field offset, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field targetSwitchSmoothTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_targetSwitchSmoothTime, put = __cordl_internal_set_targetSwitchSmoothTime)) float_t targetSwitchSmoothTime;

  /// @brief Field weightSmoothTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_weightSmoothTime, put = __cordl_internal_set_weightSmoothTime)) float_t weightSmoothTime;

  /// @brief Field smoothTurnTowardsTarget, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_smoothTurnTowardsTarget, put = __cordl_internal_set_smoothTurnTowardsTarget)) bool smoothTurnTowardsTarget;

  /// @brief Field maxRadiansDelta, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRadiansDelta, put = __cordl_internal_set_maxRadiansDelta)) float_t maxRadiansDelta;

  /// @brief Field maxMagnitudeDelta, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_maxMagnitudeDelta, put = __cordl_internal_set_maxMagnitudeDelta)) float_t maxMagnitudeDelta;

  /// @brief Field slerpSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_slerpSpeed, put = __cordl_internal_set_slerpSpeed)) float_t slerpSpeed;

  /// @brief Field pivotOffsetFromRoot, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_pivotOffsetFromRoot, put = __cordl_internal_set_pivotOffsetFromRoot))::UnityEngine::Vector3 pivotOffsetFromRoot;

  /// @brief Field minDistance, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_minDistance, put = __cordl_internal_set_minDistance)) float_t minDistance;

  /// @brief Field maxRootAngle, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRootAngle, put = __cordl_internal_set_maxRootAngle)) float_t maxRootAngle;

  /// @brief Field lastTarget, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lastTarget, put = __cordl_internal_set_lastTarget))::UnityW<::UnityEngine::Transform> lastTarget;

  /// @brief Field switchWeight, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_switchWeight, put = __cordl_internal_set_switchWeight)) float_t switchWeight;

  /// @brief Field switchWeightV, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_switchWeightV, put = __cordl_internal_set_switchWeightV)) float_t switchWeightV;

  /// @brief Field weightV, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_weightV, put = __cordl_internal_set_weightV)) float_t weightV;

  /// @brief Field lastPosition, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field dir, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get_dir, put = __cordl_internal_set_dir))::UnityEngine::Vector3 dir;

  /// @brief Field lastSmoothTowardsTarget, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_lastSmoothTowardsTarget, put = __cordl_internal_set_lastSmoothTowardsTarget)) bool lastSmoothTowardsTarget;

  __declspec(property(get = get_pivot))::UnityEngine::Vector3 pivot;

  constexpr ::UnityW<::RootMotion::FinalIK::LookAtIK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::RootMotion::FinalIK::LookAtIK> const& __cordl_internal_get_ik() const;

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::LookAtIK> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_targetSwitchSmoothTime();

  constexpr float_t const& __cordl_internal_get_targetSwitchSmoothTime() const;

  constexpr void __cordl_internal_set_targetSwitchSmoothTime(float_t value);

  constexpr float_t& __cordl_internal_get_weightSmoothTime();

  constexpr float_t const& __cordl_internal_get_weightSmoothTime() const;

  constexpr void __cordl_internal_set_weightSmoothTime(float_t value);

  constexpr bool& __cordl_internal_get_smoothTurnTowardsTarget();

  constexpr bool const& __cordl_internal_get_smoothTurnTowardsTarget() const;

  constexpr void __cordl_internal_set_smoothTurnTowardsTarget(bool value);

  constexpr float_t& __cordl_internal_get_maxRadiansDelta();

  constexpr float_t const& __cordl_internal_get_maxRadiansDelta() const;

  constexpr void __cordl_internal_set_maxRadiansDelta(float_t value);

  constexpr float_t& __cordl_internal_get_maxMagnitudeDelta();

  constexpr float_t const& __cordl_internal_get_maxMagnitudeDelta() const;

  constexpr void __cordl_internal_set_maxMagnitudeDelta(float_t value);

  constexpr float_t& __cordl_internal_get_slerpSpeed();

  constexpr float_t const& __cordl_internal_get_slerpSpeed() const;

  constexpr void __cordl_internal_set_slerpSpeed(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pivotOffsetFromRoot();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pivotOffsetFromRoot() const;

  constexpr void __cordl_internal_set_pivotOffsetFromRoot(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_minDistance();

  constexpr float_t const& __cordl_internal_get_minDistance() const;

  constexpr void __cordl_internal_set_minDistance(float_t value);

  constexpr float_t& __cordl_internal_get_maxRootAngle();

  constexpr float_t const& __cordl_internal_get_maxRootAngle() const;

  constexpr void __cordl_internal_set_maxRootAngle(float_t value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lastTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lastTarget() const;

  constexpr void __cordl_internal_set_lastTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_switchWeight();

  constexpr float_t const& __cordl_internal_get_switchWeight() const;

  constexpr void __cordl_internal_set_switchWeight(float_t value);

  constexpr float_t& __cordl_internal_get_switchWeightV();

  constexpr float_t const& __cordl_internal_get_switchWeightV() const;

  constexpr void __cordl_internal_set_switchWeightV(float_t value);

  constexpr float_t& __cordl_internal_get_weightV();

  constexpr float_t const& __cordl_internal_get_weightV() const;

  constexpr void __cordl_internal_set_weightV(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

  constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_dir();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_dir() const;

  constexpr void __cordl_internal_set_dir(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get_lastSmoothTowardsTarget();

  constexpr bool const& __cordl_internal_get_lastSmoothTowardsTarget() const;

  constexpr void __cordl_internal_set_lastSmoothTowardsTarget(bool value);

  /// @brief Method Start, addr 0x12971b8, size 0x68, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method LateUpdate, addr 0x12972a4, size 0x4e8, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method get_pivot, addr 0x1297220, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method ApplyMinDistance, addr 0x129778c, size 0x184, virtual false, abstract: false, final false
  inline void ApplyMinDistance();

  /// @brief Method RootRotation, addr 0x1297910, size 0x24c, virtual false, abstract: false, final false
  inline void RootRotation();

  static inline ::RootMotion::FinalIK::LookAtController* New_ctor();

  /// @brief Method .ctor, addr 0x1297b5c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LookAtController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookAtController(LookAtController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookAtController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookAtController(LookAtController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookAtController();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::LookAtIK> ___ik;

  /// @brief Field target, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field weight, offset: 0x28, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field offset, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field targetSwitchSmoothTime, offset: 0x38, size: 0x4, def value: None
  float_t ___targetSwitchSmoothTime;

  /// @brief Field weightSmoothTime, offset: 0x3c, size: 0x4, def value: None
  float_t ___weightSmoothTime;

  /// @brief Field smoothTurnTowardsTarget, offset: 0x40, size: 0x1, def value: None
  bool ___smoothTurnTowardsTarget;

  /// @brief Field maxRadiansDelta, offset: 0x44, size: 0x4, def value: None
  float_t ___maxRadiansDelta;

  /// @brief Field maxMagnitudeDelta, offset: 0x48, size: 0x4, def value: None
  float_t ___maxMagnitudeDelta;

  /// @brief Field slerpSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ___slerpSpeed;

  /// @brief Field pivotOffsetFromRoot, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pivotOffsetFromRoot;

  /// @brief Field minDistance, offset: 0x5c, size: 0x4, def value: None
  float_t ___minDistance;

  /// @brief Field maxRootAngle, offset: 0x60, size: 0x4, def value: None
  float_t ___maxRootAngle;

  /// @brief Field lastTarget, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lastTarget;

  /// @brief Field switchWeight, offset: 0x70, size: 0x4, def value: None
  float_t ___switchWeight;

  /// @brief Field switchWeightV, offset: 0x74, size: 0x4, def value: None
  float_t ___switchWeightV;

  /// @brief Field weightV, offset: 0x78, size: 0x4, def value: None
  float_t ___weightV;

  /// @brief Field lastPosition, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field dir, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___dir;

  /// @brief Field lastSmoothTowardsTarget, offset: 0x94, size: 0x1, def value: None
  bool ___lastSmoothTowardsTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LookAtController, 0x98>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___ik) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___weight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___offset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___targetSwitchSmoothTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___weightSmoothTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___smoothTurnTowardsTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___maxRadiansDelta) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___maxMagnitudeDelta) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___slerpSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___pivotOffsetFromRoot) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___minDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___maxRootAngle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___lastTarget) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___switchWeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___switchWeightV) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___weightV) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___lastPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___dir) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::LookAtController, ___lastSmoothTowardsTarget) == 0x94, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LookAtController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LookAtController*, "RootMotion.FinalIK", "LookAtController");
