#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverFullBody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverFullBodyBiped)
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class IKMappingBone;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
namespace RootMotion {
class BipedLimbOrientations;
}
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion {
class __BipedLimbOrientations__LimbOrientation;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverFullBodyBiped);
// Type: RootMotion.FinalIK::IKSolverFullBodyBiped
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 252, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12570))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12573))
// CS Name: ::RootMotion.FinalIK::IKSolverFullBodyBiped*
class CORDL_TYPE IKSolverFullBodyBiped : public ::RootMotion::FinalIK::IKSolverFullBody {
public:
  // Declarations
  /// @brief Field rootNode, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_rootNode, put = __cordl_internal_set_rootNode))::UnityW<::UnityEngine::Transform> rootNode;

  /// @brief Field spineStiffness, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_spineStiffness, put = __cordl_internal_set_spineStiffness)) float_t spineStiffness;

  /// @brief Field pullBodyVertical, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_pullBodyVertical, put = __cordl_internal_set_pullBodyVertical)) float_t pullBodyVertical;

  /// @brief Field pullBodyHorizontal, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_pullBodyHorizontal, put = __cordl_internal_set_pullBodyHorizontal)) float_t pullBodyHorizontal;

  /// @brief Field <pullBodyOffset>k__BackingField, offset 0xe4, size 0xc
  __declspec(property(get = __cordl_internal_get__pullBodyOffset_k__BackingField, put = __cordl_internal_set__pullBodyOffset_k__BackingField))::UnityEngine::Vector3 _pullBodyOffset_k__BackingField;

  /// @brief Field offset, offset 0xf0, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  __declspec(property(get = get_bodyEffector))::RootMotion::FinalIK::IKEffector* bodyEffector;

  __declspec(property(get = get_leftShoulderEffector))::RootMotion::FinalIK::IKEffector* leftShoulderEffector;

  __declspec(property(get = get_rightShoulderEffector))::RootMotion::FinalIK::IKEffector* rightShoulderEffector;

  __declspec(property(get = get_leftThighEffector))::RootMotion::FinalIK::IKEffector* leftThighEffector;

  __declspec(property(get = get_rightThighEffector))::RootMotion::FinalIK::IKEffector* rightThighEffector;

  __declspec(property(get = get_leftHandEffector))::RootMotion::FinalIK::IKEffector* leftHandEffector;

  __declspec(property(get = get_rightHandEffector))::RootMotion::FinalIK::IKEffector* rightHandEffector;

  __declspec(property(get = get_leftFootEffector))::RootMotion::FinalIK::IKEffector* leftFootEffector;

  __declspec(property(get = get_rightFootEffector))::RootMotion::FinalIK::IKEffector* rightFootEffector;

  __declspec(property(get = get_leftArmChain))::RootMotion::FinalIK::FBIKChain* leftArmChain;

  __declspec(property(get = get_rightArmChain))::RootMotion::FinalIK::FBIKChain* rightArmChain;

  __declspec(property(get = get_leftLegChain))::RootMotion::FinalIK::FBIKChain* leftLegChain;

  __declspec(property(get = get_rightLegChain))::RootMotion::FinalIK::FBIKChain* rightLegChain;

  __declspec(property(get = get_leftArmMapping))::RootMotion::FinalIK::IKMappingLimb* leftArmMapping;

  __declspec(property(get = get_rightArmMapping))::RootMotion::FinalIK::IKMappingLimb* rightArmMapping;

  __declspec(property(get = get_leftLegMapping))::RootMotion::FinalIK::IKMappingLimb* leftLegMapping;

  __declspec(property(get = get_rightLegMapping))::RootMotion::FinalIK::IKMappingLimb* rightLegMapping;

  __declspec(property(get = get_headMapping))::RootMotion::FinalIK::IKMappingBone* headMapping;

  __declspec(property(get = get_pullBodyOffset, put = set_pullBodyOffset))::UnityEngine::Vector3 pullBodyOffset;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rootNode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rootNode() const;

  constexpr void __cordl_internal_set_rootNode(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_spineStiffness();

  constexpr float_t const& __cordl_internal_get_spineStiffness() const;

  constexpr void __cordl_internal_set_spineStiffness(float_t value);

  constexpr float_t& __cordl_internal_get_pullBodyVertical();

  constexpr float_t const& __cordl_internal_get_pullBodyVertical() const;

  constexpr void __cordl_internal_set_pullBodyVertical(float_t value);

  constexpr float_t& __cordl_internal_get_pullBodyHorizontal();

  constexpr float_t const& __cordl_internal_get_pullBodyHorizontal() const;

  constexpr void __cordl_internal_set_pullBodyHorizontal(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__pullBodyOffset_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pullBodyOffset_k__BackingField() const;

  constexpr void __cordl_internal_set__pullBodyOffset_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  /// @brief Method get_bodyEffector, addr 0x1267430, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_bodyEffector();

  /// @brief Method get_leftShoulderEffector, addr 0x1267570, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_leftShoulderEffector();

  /// @brief Method get_rightShoulderEffector, addr 0x1267578, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_rightShoulderEffector();

  /// @brief Method get_leftThighEffector, addr 0x1267580, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_leftThighEffector();

  /// @brief Method get_rightThighEffector, addr 0x1267588, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_rightThighEffector();

  /// @brief Method get_leftHandEffector, addr 0x1267590, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_leftHandEffector();

  /// @brief Method get_rightHandEffector, addr 0x1267598, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_rightHandEffector();

  /// @brief Method get_leftFootEffector, addr 0x12675a0, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_leftFootEffector();

  /// @brief Method get_rightFootEffector, addr 0x12675a8, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* get_rightFootEffector();

  /// @brief Method get_leftArmChain, addr 0x12675b0, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* get_leftArmChain();

  /// @brief Method get_rightArmChain, addr 0x12675dc, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* get_rightArmChain();

  /// @brief Method get_leftLegChain, addr 0x1267608, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* get_leftLegChain();

  /// @brief Method get_rightLegChain, addr 0x1267634, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* get_rightLegChain();

  /// @brief Method get_leftArmMapping, addr 0x1267660, size 0x28, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* get_leftArmMapping();

  /// @brief Method get_rightArmMapping, addr 0x1267688, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* get_rightArmMapping();

  /// @brief Method get_leftLegMapping, addr 0x12676b4, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* get_leftLegMapping();

  /// @brief Method get_rightLegMapping, addr 0x12676e0, size 0x2c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* get_rightLegMapping();

  /// @brief Method get_headMapping, addr 0x126770c, size 0x28, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingBone* get_headMapping();

  /// @brief Method SetChainWeights, addr 0x1267734, size 0x50, virtual false, abstract: false, final false
  inline void SetChainWeights(::RootMotion::FinalIK::FullBodyBipedChain c, float_t pull, float_t reach);

  /// @brief Method SetEffectorWeights, addr 0x1267834, size 0x78, virtual false, abstract: false, final false
  inline void SetEffectorWeights(::RootMotion::FinalIK::FullBodyBipedEffector effector, float_t positionWeight, float_t rotationWeight);

  /// @brief Method GetChain, addr 0x1267784, size 0xb0, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* GetChain(::RootMotion::FinalIK::FullBodyBipedChain c);

  /// @brief Method GetChain, addr 0x12678ac, size 0xc8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* GetChain(::RootMotion::FinalIK::FullBodyBipedEffector effector);

  /// @brief Method GetEffector, addr 0x1267438, size 0x138, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* GetEffector(::RootMotion::FinalIK::FullBodyBipedEffector effector);

  /// @brief Method GetEndEffector, addr 0x1267974, size 0xb0, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* GetEndEffector(::RootMotion::FinalIK::FullBodyBipedChain c);

  /// @brief Method GetLimbMapping, addr 0x1267a24, size 0xac, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(::RootMotion::FinalIK::FullBodyBipedChain chain);

  /// @brief Method GetLimbMapping, addr 0x1267ad0, size 0xac, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(::RootMotion::FinalIK::FullBodyBipedEffector effector);

  /// @brief Method GetSpineMapping, addr 0x1267b7c, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingSpine* GetSpineMapping();

  /// @brief Method GetHeadMapping, addr 0x1267b84, size 0x28, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKMappingBone* GetHeadMapping();

  /// @brief Method GetBendConstraint, addr 0x1267bac, size 0xc0, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKConstraintBend* GetBendConstraint(::RootMotion::FinalIK::FullBodyBipedChain limb);

  /// @brief Method IsValid, addr 0x1267c6c, size 0x190, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method SetToReferences, addr 0x1267dfc, size 0xf80, virtual false, abstract: false, final false
  inline void SetToReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode);

  /// @brief Method DetectRootNodeBone, addr 0x1268d7c, size 0x450, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> DetectRootNodeBone(::RootMotion::BipedReferences* references);

  /// @brief Method SetLimbOrientations, addr 0x126932c, size 0x5c, virtual false, abstract: false, final false
  inline void SetLimbOrientations(::RootMotion::BipedLimbOrientations* o);

  /// @brief Method get_pullBodyOffset, addr 0x1269480, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pullBodyOffset();

  /// @brief Method set_pullBodyOffset, addr 0x126948c, size 0xc, virtual false, abstract: false, final false
  inline void set_pullBodyOffset(::UnityEngine::Vector3 value);

  /// @brief Method SetLimbOrientation, addr 0x1269388, size 0xf8, virtual false, abstract: false, final false
  inline void SetLimbOrientation(::RootMotion::FinalIK::FullBodyBipedChain chain, ::RootMotion::__BipedLimbOrientations__LimbOrientation* limbOrientation);

  /// @brief Method GetLeftClavicle, addr 0x12691cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetLeftClavicle(::RootMotion::BipedReferences* references);

  /// @brief Method GetRightClavicle, addr 0x126927c, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetRightClavicle(::RootMotion::BipedReferences* references);

  /// @brief Method Contains, addr 0x1269498, size 0xc4, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array, ::UnityEngine::Transform* transform);

  /// @brief Method ReadPose, addr 0x126955c, size 0xcc, virtual true, abstract: false, final false
  inline void ReadPose();

  /// @brief Method PullBody, addr 0x1269628, size 0x11c, virtual false, abstract: false, final false
  inline void PullBody();

  /// @brief Method GetBodyOffset, addr 0x1269744, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBodyOffset();

  /// @brief Method GetHandBodyPull, addr 0x12698d4, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHandBodyPull(::RootMotion::FinalIK::IKEffector* effector, ::RootMotion::FinalIK::FBIKChain* arm, ::UnityEngine::Vector3 offset);

  /// @brief Method ApplyBendConstraints, addr 0x1269a4c, size 0x25c, virtual true, abstract: false, final false
  inline void ApplyBendConstraints();

  /// @brief Method WritePose, addr 0x1269ca8, size 0x78, virtual true, abstract: false, final false
  inline void WritePose();

  static inline ::RootMotion::FinalIK::IKSolverFullBodyBiped* New_ctor();

  /// @brief Method .ctor, addr 0x1269d20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBodyBiped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverFullBodyBiped(IKSolverFullBodyBiped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBodyBiped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverFullBodyBiped(IKSolverFullBodyBiped const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverFullBodyBiped();

public:
  /// @brief Field rootNode, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rootNode;

  /// @brief Field spineStiffness, offset: 0xd8, size: 0x4, def value: None
  float_t ___spineStiffness;

  /// @brief Field pullBodyVertical, offset: 0xdc, size: 0x4, def value: None
  float_t ___pullBodyVertical;

  /// @brief Field pullBodyHorizontal, offset: 0xe0, size: 0x4, def value: None
  float_t ___pullBodyHorizontal;

  /// @brief Field <pullBodyOffset>k__BackingField, offset: 0xe4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pullBodyOffset_k__BackingField;

  /// @brief Field offset, offset: 0xf0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverFullBodyBiped, 0x100>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ___rootNode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ___spineStiffness) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ___pullBodyVertical) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ___pullBodyHorizontal) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ____pullBodyOffset_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBodyBiped, ___offset) == 0xf0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFullBodyBiped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFullBodyBiped*, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
