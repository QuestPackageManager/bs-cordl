#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKEffector)
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class __IKSolver__Node;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKEffector;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKEffector);
// Type: RootMotion.FinalIK::IKEffector
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12552))
// CS Name: ::RootMotion.FinalIK::IKEffector*
class CORDL_TYPE IKEffector : public ::System::Object {
public:
  // Declarations
  /// @brief Field bone, offset 0x10, size 0x8
  __declspec(property(get = __get_bone, put = __set_bone))::UnityEngine::Transform* bone;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field positionWeight, offset 0x20, size 0x4
  __declspec(property(get = __get_positionWeight, put = __set_positionWeight)) float_t positionWeight;

  /// @brief Field rotationWeight, offset 0x24, size 0x4
  __declspec(property(get = __get_rotationWeight, put = __set_rotationWeight)) float_t rotationWeight;

  /// @brief Field position, offset 0x28, size 0xc
  __declspec(property(get = __get_position, put = __set_position))::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x34, size 0x10
  __declspec(property(get = __get_rotation, put = __set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field positionOffset, offset 0x44, size 0xc
  __declspec(property(get = __get_positionOffset, put = __set_positionOffset))::UnityEngine::Vector3 positionOffset;

  /// @brief Field <isEndEffector>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __get__isEndEffector_k__BackingField, put = __set__isEndEffector_k__BackingField)) bool _isEndEffector_k__BackingField;

  /// @brief Field effectChildNodes, offset 0x51, size 0x1
  __declspec(property(get = __get_effectChildNodes, put = __set_effectChildNodes)) bool effectChildNodes;

  /// @brief Field maintainRelativePositionWeight, offset 0x54, size 0x4
  __declspec(property(get = __get_maintainRelativePositionWeight, put = __set_maintainRelativePositionWeight)) float_t maintainRelativePositionWeight;

  /// @brief Field childBones, offset 0x58, size 0x8
  __declspec(property(get = __get_childBones, put = __set_childBones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> childBones;

  /// @brief Field planeBone1, offset 0x60, size 0x8
  __declspec(property(get = __get_planeBone1, put = __set_planeBone1))::UnityEngine::Transform* planeBone1;

  /// @brief Field planeBone2, offset 0x68, size 0x8
  __declspec(property(get = __get_planeBone2, put = __set_planeBone2))::UnityEngine::Transform* planeBone2;

  /// @brief Field planeBone3, offset 0x70, size 0x8
  __declspec(property(get = __get_planeBone3, put = __set_planeBone3))::UnityEngine::Transform* planeBone3;

  /// @brief Field planeRotationOffset, offset 0x78, size 0x10
  __declspec(property(get = __get_planeRotationOffset, put = __set_planeRotationOffset))::UnityEngine::Quaternion planeRotationOffset;

  /// @brief Field posW, offset 0x88, size 0x4
  __declspec(property(get = __get_posW, put = __set_posW)) float_t posW;

  /// @brief Field rotW, offset 0x8c, size 0x4
  __declspec(property(get = __get_rotW, put = __set_rotW)) float_t rotW;

  /// @brief Field localPositions, offset 0x90, size 0x8
  __declspec(property(get = __get_localPositions, put = __set_localPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> localPositions;

  /// @brief Field usePlaneNodes, offset 0x98, size 0x1
  __declspec(property(get = __get_usePlaneNodes, put = __set_usePlaneNodes)) bool usePlaneNodes;

  /// @brief Field animatedPlaneRotation, offset 0x9c, size 0x10
  __declspec(property(get = __get_animatedPlaneRotation, put = __set_animatedPlaneRotation))::UnityEngine::Quaternion animatedPlaneRotation;

  /// @brief Field animatedPosition, offset 0xac, size 0xc
  __declspec(property(get = __get_animatedPosition, put = __set_animatedPosition))::UnityEngine::Vector3 animatedPosition;

  /// @brief Field firstUpdate, offset 0xb8, size 0x1
  __declspec(property(get = __get_firstUpdate, put = __set_firstUpdate)) bool firstUpdate;

  /// @brief Field chainIndex, offset 0xbc, size 0x4
  __declspec(property(get = __get_chainIndex, put = __set_chainIndex)) int32_t chainIndex;

  /// @brief Field nodeIndex, offset 0xc0, size 0x4
  __declspec(property(get = __get_nodeIndex, put = __set_nodeIndex)) int32_t nodeIndex;

  /// @brief Field plane1ChainIndex, offset 0xc4, size 0x4
  __declspec(property(get = __get_plane1ChainIndex, put = __set_plane1ChainIndex)) int32_t plane1ChainIndex;

  /// @brief Field plane1NodeIndex, offset 0xc8, size 0x4
  __declspec(property(get = __get_plane1NodeIndex, put = __set_plane1NodeIndex)) int32_t plane1NodeIndex;

  /// @brief Field plane2ChainIndex, offset 0xcc, size 0x4
  __declspec(property(get = __get_plane2ChainIndex, put = __set_plane2ChainIndex)) int32_t plane2ChainIndex;

  /// @brief Field plane2NodeIndex, offset 0xd0, size 0x4
  __declspec(property(get = __get_plane2NodeIndex, put = __set_plane2NodeIndex)) int32_t plane2NodeIndex;

  /// @brief Field plane3ChainIndex, offset 0xd4, size 0x4
  __declspec(property(get = __get_plane3ChainIndex, put = __set_plane3ChainIndex)) int32_t plane3ChainIndex;

  /// @brief Field plane3NodeIndex, offset 0xd8, size 0x4
  __declspec(property(get = __get_plane3NodeIndex, put = __set_plane3NodeIndex)) int32_t plane3NodeIndex;

  /// @brief Field childChainIndexes, offset 0xe0, size 0x8
  __declspec(property(get = __get_childChainIndexes, put = __set_childChainIndexes))::ArrayW<int32_t, ::Array<int32_t>*> childChainIndexes;

  /// @brief Field childNodeIndexes, offset 0xe8, size 0x8
  __declspec(property(get = __get_childNodeIndexes, put = __set_childNodeIndexes))::ArrayW<int32_t, ::Array<int32_t>*> childNodeIndexes;

  __declspec(property(get = get_isEndEffector, put = set_isEndEffector)) bool isEndEffector;

  constexpr ::UnityEngine::Transform*& __get_bone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone() const;

  constexpr void __set_bone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr float_t& __get_positionWeight();

  constexpr float_t const& __get_positionWeight() const;

  constexpr void __set_positionWeight(float_t value);

  constexpr float_t& __get_rotationWeight();

  constexpr float_t const& __get_rotationWeight() const;

  constexpr void __set_rotationWeight(float_t value);

  constexpr ::UnityEngine::Vector3& __get_position();

  constexpr ::UnityEngine::Vector3 const& __get_position() const;

  constexpr void __set_position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_rotation();

  constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

  constexpr void __set_rotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get_positionOffset() const;

  constexpr void __set_positionOffset(::UnityEngine::Vector3 value);

  constexpr bool& __get__isEndEffector_k__BackingField();

  constexpr bool const& __get__isEndEffector_k__BackingField() const;

  constexpr void __set__isEndEffector_k__BackingField(bool value);

  constexpr bool& __get_effectChildNodes();

  constexpr bool const& __get_effectChildNodes() const;

  constexpr void __set_effectChildNodes(bool value);

  constexpr float_t& __get_maintainRelativePositionWeight();

  constexpr float_t const& __get_maintainRelativePositionWeight() const;

  constexpr void __set_maintainRelativePositionWeight(float_t value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_childBones();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_childBones() const;

  constexpr void __set_childBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::UnityEngine::Transform*& __get_planeBone1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone1() const;

  constexpr void __set_planeBone1(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_planeBone2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone2() const;

  constexpr void __set_planeBone2(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_planeBone3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone3() const;

  constexpr void __set_planeBone3(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Quaternion& __get_planeRotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get_planeRotationOffset() const;

  constexpr void __set_planeRotationOffset(::UnityEngine::Quaternion value);

  constexpr float_t& __get_posW();

  constexpr float_t const& __get_posW() const;

  constexpr void __set_posW(float_t value);

  constexpr float_t& __get_rotW();

  constexpr float_t const& __get_rotW() const;

  constexpr void __set_rotW(float_t value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_localPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_localPositions() const;

  constexpr void __set_localPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr bool& __get_usePlaneNodes();

  constexpr bool const& __get_usePlaneNodes() const;

  constexpr void __set_usePlaneNodes(bool value);

  constexpr ::UnityEngine::Quaternion& __get_animatedPlaneRotation();

  constexpr ::UnityEngine::Quaternion const& __get_animatedPlaneRotation() const;

  constexpr void __set_animatedPlaneRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_animatedPosition();

  constexpr ::UnityEngine::Vector3 const& __get_animatedPosition() const;

  constexpr void __set_animatedPosition(::UnityEngine::Vector3 value);

  constexpr bool& __get_firstUpdate();

  constexpr bool const& __get_firstUpdate() const;

  constexpr void __set_firstUpdate(bool value);

  constexpr int32_t& __get_chainIndex();

  constexpr int32_t const& __get_chainIndex() const;

  constexpr void __set_chainIndex(int32_t value);

  constexpr int32_t& __get_nodeIndex();

  constexpr int32_t const& __get_nodeIndex() const;

  constexpr void __set_nodeIndex(int32_t value);

  constexpr int32_t& __get_plane1ChainIndex();

  constexpr int32_t const& __get_plane1ChainIndex() const;

  constexpr void __set_plane1ChainIndex(int32_t value);

  constexpr int32_t& __get_plane1NodeIndex();

  constexpr int32_t const& __get_plane1NodeIndex() const;

  constexpr void __set_plane1NodeIndex(int32_t value);

  constexpr int32_t& __get_plane2ChainIndex();

  constexpr int32_t const& __get_plane2ChainIndex() const;

  constexpr void __set_plane2ChainIndex(int32_t value);

  constexpr int32_t& __get_plane2NodeIndex();

  constexpr int32_t const& __get_plane2NodeIndex() const;

  constexpr void __set_plane2NodeIndex(int32_t value);

  constexpr int32_t& __get_plane3ChainIndex();

  constexpr int32_t const& __get_plane3ChainIndex() const;

  constexpr void __set_plane3ChainIndex(int32_t value);

  constexpr int32_t& __get_plane3NodeIndex();

  constexpr int32_t const& __get_plane3NodeIndex() const;

  constexpr void __set_plane3NodeIndex(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_childChainIndexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_childChainIndexes() const;

  constexpr void __set_childChainIndexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_childNodeIndexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_childNodeIndexes() const;

  constexpr void __set_childNodeIndexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method GetNode, addr 0x1259598, size 0x5c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Node* GetNode(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method get_isEndEffector, addr 0x12595f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEndEffector();

  /// @brief Method set_isEndEffector, addr 0x12595fc, size 0xc, virtual false, abstract: false, final false
  inline void set_isEndEffector(bool value);

  /// @brief Method PinToBone, addr 0x1259608, size 0x84, virtual false, abstract: false, final false
  inline void PinToBone(float_t positionWeight, float_t rotationWeight);

  static inline ::RootMotion::FinalIK::IKEffector* New_ctor();

  /// @brief Method .ctor, addr 0x125968c, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKEffector* New_ctor(::UnityEngine::Transform* bone, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> childBones);

  /// @brief Method .ctor, addr 0x125982c, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> childBones);

  /// @brief Method IsValid, addr 0x12599e8, size 0x2f4, virtual false, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  /// @brief Method Initiate, addr 0x1259cdc, size 0x28c, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ResetOffset, addr 0x1259fdc, size 0x118, virtual false, abstract: false, final false
  inline void ResetOffset(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SetToTarget, addr 0x125a144, size 0x9c, virtual false, abstract: false, final false
  inline void SetToTarget();

  /// @brief Method OnPreSolve, addr 0x125a1e0, size 0x6a0, virtual false, abstract: false, final false
  inline void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method OnPostWrite, addr 0x125a880, size 0x58, virtual false, abstract: false, final false
  inline void OnPostWrite();

  /// @brief Method GetPlaneRotation, addr 0x125a8d8, size 0x1c8, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetPlaneRotation(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Update, addr 0x125aaa0, size 0x248, virtual false, abstract: false, final false
  inline void Update(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method GetPosition, addr 0x125ace8, size 0x2b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(::RootMotion::FinalIK::IKSolverFullBody* solver, ByRef<::UnityEngine::Quaternion> planeRotationOffset);

  // Ctor Parameters [CppParam { name: "", ty: "IKEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKEffector(IKEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKEffector(IKEffector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKEffector();

public:
  /// @brief Field bone, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

  /// @brief Field positionWeight, offset: 0x20, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field rotationWeight, offset: 0x24, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field position, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field rotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotation;

  /// @brief Field positionOffset, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___positionOffset;

  /// @brief Field <isEndEffector>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isEndEffector_k__BackingField;

  /// @brief Field effectChildNodes, offset: 0x51, size: 0x1, def value: None
  bool ___effectChildNodes;

  /// @brief Field maintainRelativePositionWeight, offset: 0x54, size: 0x4, def value: None
  float_t ___maintainRelativePositionWeight;

  /// @brief Field childBones, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___childBones;

  /// @brief Field planeBone1, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone1;

  /// @brief Field planeBone2, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone2;

  /// @brief Field planeBone3, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone3;

  /// @brief Field planeRotationOffset, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___planeRotationOffset;

  /// @brief Field posW, offset: 0x88, size: 0x4, def value: None
  float_t ___posW;

  /// @brief Field rotW, offset: 0x8c, size: 0x4, def value: None
  float_t ___rotW;

  /// @brief Field localPositions, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___localPositions;

  /// @brief Field usePlaneNodes, offset: 0x98, size: 0x1, def value: None
  bool ___usePlaneNodes;

  /// @brief Field animatedPlaneRotation, offset: 0x9c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___animatedPlaneRotation;

  /// @brief Field animatedPosition, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animatedPosition;

  /// @brief Field firstUpdate, offset: 0xb8, size: 0x1, def value: None
  bool ___firstUpdate;

  /// @brief Field chainIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ___chainIndex;

  /// @brief Field nodeIndex, offset: 0xc0, size: 0x4, def value: None
  int32_t ___nodeIndex;

  /// @brief Field plane1ChainIndex, offset: 0xc4, size: 0x4, def value: None
  int32_t ___plane1ChainIndex;

  /// @brief Field plane1NodeIndex, offset: 0xc8, size: 0x4, def value: None
  int32_t ___plane1NodeIndex;

  /// @brief Field plane2ChainIndex, offset: 0xcc, size: 0x4, def value: None
  int32_t ___plane2ChainIndex;

  /// @brief Field plane2NodeIndex, offset: 0xd0, size: 0x4, def value: None
  int32_t ___plane2NodeIndex;

  /// @brief Field plane3ChainIndex, offset: 0xd4, size: 0x4, def value: None
  int32_t ___plane3ChainIndex;

  /// @brief Field plane3NodeIndex, offset: 0xd8, size: 0x4, def value: None
  int32_t ___plane3NodeIndex;

  /// @brief Field childChainIndexes, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___childChainIndexes;

  /// @brief Field childNodeIndexes, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___childNodeIndexes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKEffector, 0xf0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___bone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___positionWeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___rotationWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___rotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___positionOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ____isEndEffector_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___effectChildNodes) == 0x51, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___maintainRelativePositionWeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___childBones) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___planeBone1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___planeBone2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___planeBone3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___planeRotationOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___posW) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___rotW) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___localPositions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___usePlaneNodes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___animatedPlaneRotation) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___animatedPosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___firstUpdate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___chainIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___nodeIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane1ChainIndex) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane1NodeIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane2ChainIndex) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane2NodeIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane3ChainIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___plane3NodeIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___childChainIndexes) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKEffector, ___childNodeIndexes) == 0xe8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKEffector*, "RootMotion.FinalIK", "IKEffector");
