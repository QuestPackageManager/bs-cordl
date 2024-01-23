#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(VRIKRootController)
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__CalibrationData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIKRootController;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::VRIKRootController);
// Type: RootMotion.FinalIK::VRIKRootController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12674))
// CS Name: ::RootMotion.FinalIK::VRIKRootController*
class CORDL_TYPE VRIKRootController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <pelvisTargetRight>k__BackingField, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__pelvisTargetRight_k__BackingField,
                      put = __cordl_internal_set__pelvisTargetRight_k__BackingField))::UnityEngine::Vector3 _pelvisTargetRight_k__BackingField;

  /// @brief Field pelvisTarget, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvisTarget, put = __cordl_internal_set_pelvisTarget))::UnityW<::UnityEngine::Transform> pelvisTarget;

  /// @brief Field leftFootTarget, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_leftFootTarget, put = __cordl_internal_set_leftFootTarget))::UnityW<::UnityEngine::Transform> leftFootTarget;

  /// @brief Field rightFootTarget, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rightFootTarget, put = __cordl_internal_set_rightFootTarget))::UnityW<::UnityEngine::Transform> rightFootTarget;

  /// @brief Field ik, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::VRIK> ik;

  __declspec(property(get = get_pelvisTargetRight, put = set_pelvisTargetRight))::UnityEngine::Vector3 pelvisTargetRight;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__pelvisTargetRight_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pelvisTargetRight_k__BackingField() const;

  constexpr void __cordl_internal_set__pelvisTargetRight_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pelvisTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pelvisTarget() const;

  constexpr void __cordl_internal_set_pelvisTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftFootTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftFootTarget() const;

  constexpr void __cordl_internal_set_leftFootTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightFootTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightFootTarget() const;

  constexpr void __cordl_internal_set_rightFootTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::RootMotion::FinalIK::VRIK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::RootMotion::FinalIK::VRIK> const& __cordl_internal_get_ik() const;

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::VRIK> value);

  /// @brief Method get_pelvisTargetRight, addr 0x129d7ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pelvisTargetRight();

  /// @brief Method set_pelvisTargetRight, addr 0x129d7b8, size 0xc, virtual false, abstract: false, final false
  inline void set_pelvisTargetRight(::UnityEngine::Vector3 value);

  /// @brief Method Awake, addr 0x129d7c4, size 0xf4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Calibrate, addr 0x129c490, size 0x1c0, virtual false, abstract: false, final false
  inline void Calibrate();

  /// @brief Method Calibrate, addr 0x129d2a0, size 0x158, virtual false, abstract: false, final false
  inline void Calibrate(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* data);

  /// @brief Method OnPreUpdate, addr 0x129d8b8, size 0x3c8, virtual false, abstract: false, final false
  inline void OnPreUpdate();

  /// @brief Method OnDestroy, addr 0x129dc80, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::VRIKRootController* New_ctor();

  /// @brief Method .ctor, addr 0x129dd8c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRIKRootController(VRIKRootController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRIKRootController(VRIKRootController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRIKRootController();

public:
  /// @brief Field <pelvisTargetRight>k__BackingField, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pelvisTargetRight_k__BackingField;

  /// @brief Field pelvisTarget, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvisTarget;

  /// @brief Field leftFootTarget, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftFootTarget;

  /// @brief Field rightFootTarget, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightFootTarget;

  /// @brief Field ik, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::VRIK> ___ik;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::VRIKRootController, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKRootController, ____pelvisTargetRight_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKRootController, ___pelvisTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKRootController, ___leftFootTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKRootController, ___rightFootTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::VRIKRootController, ___ik) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::VRIKRootController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
