#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKMapping)
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace RootMotion {
class __Warning__Logger;
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
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMapping;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKMapping);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKMapping__BoneMap);
// Type: ::BoneMap
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12481))
// CS Name: ::IKMapping::BoneMap*
class CORDL_TYPE __IKMapping__BoneMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field chainIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_chainIndex, put = __set_chainIndex)) int32_t chainIndex;

  /// @brief Field nodeIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get_nodeIndex, put = __set_nodeIndex)) int32_t nodeIndex;

  /// @brief Field defaultLocalPosition, offset 0x20, size 0xc
  __declspec(property(get = __get_defaultLocalPosition, put = __set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset 0x2c, size 0x10
  __declspec(property(get = __get_defaultLocalRotation, put = __set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field localSwingAxis, offset 0x3c, size 0xc
  __declspec(property(get = __get_localSwingAxis, put = __set_localSwingAxis))::UnityEngine::Vector3 localSwingAxis;

  /// @brief Field localTwistAxis, offset 0x48, size 0xc
  __declspec(property(get = __get_localTwistAxis, put = __set_localTwistAxis))::UnityEngine::Vector3 localTwistAxis;

  /// @brief Field planePosition, offset 0x54, size 0xc
  __declspec(property(get = __get_planePosition, put = __set_planePosition))::UnityEngine::Vector3 planePosition;

  /// @brief Field ikPosition, offset 0x60, size 0xc
  __declspec(property(get = __get_ikPosition, put = __set_ikPosition))::UnityEngine::Vector3 ikPosition;

  /// @brief Field defaultLocalTargetRotation, offset 0x6c, size 0x10
  __declspec(property(get = __get_defaultLocalTargetRotation, put = __set_defaultLocalTargetRotation))::UnityEngine::Quaternion defaultLocalTargetRotation;

  /// @brief Field maintainRotation, offset 0x7c, size 0x10
  __declspec(property(get = __get_maintainRotation, put = __set_maintainRotation))::UnityEngine::Quaternion maintainRotation;

  /// @brief Field length, offset 0x8c, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field animatedRotation, offset 0x90, size 0x10
  __declspec(property(get = __get_animatedRotation, put = __set_animatedRotation))::UnityEngine::Quaternion animatedRotation;

  /// @brief Field planeBone1, offset 0xa0, size 0x8
  __declspec(property(get = __get_planeBone1, put = __set_planeBone1))::UnityEngine::Transform* planeBone1;

  /// @brief Field planeBone2, offset 0xa8, size 0x8
  __declspec(property(get = __get_planeBone2, put = __set_planeBone2))::UnityEngine::Transform* planeBone2;

  /// @brief Field planeBone3, offset 0xb0, size 0x8
  __declspec(property(get = __get_planeBone3, put = __set_planeBone3))::UnityEngine::Transform* planeBone3;

  /// @brief Field plane1ChainIndex, offset 0xb8, size 0x4
  __declspec(property(get = __get_plane1ChainIndex, put = __set_plane1ChainIndex)) int32_t plane1ChainIndex;

  /// @brief Field plane1NodeIndex, offset 0xbc, size 0x4
  __declspec(property(get = __get_plane1NodeIndex, put = __set_plane1NodeIndex)) int32_t plane1NodeIndex;

  /// @brief Field plane2ChainIndex, offset 0xc0, size 0x4
  __declspec(property(get = __get_plane2ChainIndex, put = __set_plane2ChainIndex)) int32_t plane2ChainIndex;

  /// @brief Field plane2NodeIndex, offset 0xc4, size 0x4
  __declspec(property(get = __get_plane2NodeIndex, put = __set_plane2NodeIndex)) int32_t plane2NodeIndex;

  /// @brief Field plane3ChainIndex, offset 0xc8, size 0x4
  __declspec(property(get = __get_plane3ChainIndex, put = __set_plane3ChainIndex)) int32_t plane3ChainIndex;

  /// @brief Field plane3NodeIndex, offset 0xcc, size 0x4
  __declspec(property(get = __get_plane3NodeIndex, put = __set_plane3NodeIndex)) int32_t plane3NodeIndex;

  __declspec(property(get = get_swingDirection))::UnityEngine::Vector3 swingDirection;

  __declspec(property(get = get_isNodeBone)) bool isNodeBone;

  __declspec(property(get = get_lastAnimatedTargetRotation))::UnityEngine::Quaternion lastAnimatedTargetRotation;

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr int32_t& __get_chainIndex();

  constexpr int32_t const& __get_chainIndex() const;

  constexpr void __set_chainIndex(int32_t value);

  constexpr int32_t& __get_nodeIndex();

  constexpr int32_t const& __get_nodeIndex() const;

  constexpr void __set_nodeIndex(int32_t value);

  constexpr ::UnityEngine::Vector3& __get_defaultLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_defaultLocalPosition() const;

  constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

  constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get_localSwingAxis();

  constexpr ::UnityEngine::Vector3 const& __get_localSwingAxis() const;

  constexpr void __set_localSwingAxis(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_localTwistAxis();

  constexpr ::UnityEngine::Vector3 const& __get_localTwistAxis() const;

  constexpr void __set_localTwistAxis(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_planePosition();

  constexpr ::UnityEngine::Vector3 const& __get_planePosition() const;

  constexpr void __set_planePosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_ikPosition();

  constexpr ::UnityEngine::Vector3 const& __get_ikPosition() const;

  constexpr void __set_ikPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalTargetRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalTargetRotation() const;

  constexpr void __set_defaultLocalTargetRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_maintainRotation();

  constexpr ::UnityEngine::Quaternion const& __get_maintainRotation() const;

  constexpr void __set_maintainRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_animatedRotation();

  constexpr ::UnityEngine::Quaternion const& __get_animatedRotation() const;

  constexpr void __set_animatedRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Transform*& __get_planeBone1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone1() const;

  constexpr void __set_planeBone1(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_planeBone2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone2() const;

  constexpr void __set_planeBone2(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_planeBone3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_planeBone3() const;

  constexpr void __set_planeBone3(::UnityEngine::Transform* value);

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

  /// @brief Method Initiate addr 0x11eaed0 size 0x28 virtual false final false
  inline void Initiate(::UnityEngine::Transform* transform, ::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method get_swingDirection addr 0x11eaef8 size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 get_swingDirection();

  /// @brief Method StoreDefaultLocalState addr 0x11eaf28 size 0x44 virtual false final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransform addr 0x11eaf6c size 0x44 virtual false final false
  inline void FixTransform(bool position);

  /// @brief Method get_isNodeBone addr 0x11eafb0 size 0x10 virtual false final false
  inline bool get_isNodeBone();

  /// @brief Method SetLength addr 0x11eafc0 size 0xd4 virtual false final false
  inline void SetLength(::RootMotion::FinalIK::__IKMapping__BoneMap* nextBone);

  /// @brief Method SetLocalSwingAxis addr 0x11eb094 size 0x8 virtual false final false
  inline void SetLocalSwingAxis(::RootMotion::FinalIK::__IKMapping__BoneMap* swingTarget);

  /// @brief Method SetLocalSwingAxis addr 0x11eb09c size 0xcc virtual false final false
  inline void SetLocalSwingAxis(::RootMotion::FinalIK::__IKMapping__BoneMap* bone1, ::RootMotion::FinalIK::__IKMapping__BoneMap* bone2);

  /// @brief Method SetLocalTwistAxis addr 0x11eb168 size 0x6c virtual false final false
  inline void SetLocalTwistAxis(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection);

  /// @brief Method SetPlane addr 0x11eb1d4 size 0x88 virtual false final false
  inline void SetPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Transform* planeBone1, ::UnityEngine::Transform* planeBone2, ::UnityEngine::Transform* planeBone3);

  /// @brief Method UpdatePlane addr 0x11eb25c size 0x110 virtual false final false
  inline void UpdatePlane(bool rotation, bool position);

  /// @brief Method SetIKPosition addr 0x11eb4d4 size 0x2c virtual false final false
  inline void SetIKPosition();

  /// @brief Method MaintainRotation addr 0x11eb500 size 0x2c virtual false final false
  inline void MaintainRotation();

  /// @brief Method SetToIKPosition addr 0x11eb52c size 0x28 virtual false final false
  inline void SetToIKPosition();

  /// @brief Method FixToNode addr 0x11eb554 size 0xc0 virtual false final false
  inline void FixToNode(::RootMotion::FinalIK::IKSolverFullBody* solver, float_t weight, ::RootMotion::FinalIK::__IKSolver__Node* fixNode);

  /// @brief Method GetPlanePosition addr 0x11eb614 size 0x74 virtual false final false
  inline ::UnityEngine::Vector3 GetPlanePosition(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method PositionToPlane addr 0x11eb798 size 0x24 virtual false final false
  inline void PositionToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method RotateToPlane addr 0x11eb7bc size 0x120 virtual false final false
  inline void RotateToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, float_t weight);

  /// @brief Method Swing addr 0x11eb8dc size 0x64 virtual false final false
  inline void Swing(::UnityEngine::Vector3 swingTarget, float_t weight);

  /// @brief Method Swing addr 0x11eb940 size 0x180 virtual false final false
  inline void Swing(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t weight);

  /// @brief Method Twist addr 0x11ebac0 size 0x180 virtual false final false
  inline void Twist(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection, float_t weight);

  /// @brief Method RotateToMaintain addr 0x11ebc40 size 0x7c virtual false final false
  inline void RotateToMaintain(float_t weight);

  /// @brief Method RotateToEffector addr 0x11ebcbc size 0x11c virtual false final false
  inline void RotateToEffector(::RootMotion::FinalIK::IKSolverFullBody* solver, float_t weight);

  /// @brief Method GetTargetRotation addr 0x11eb688 size 0x110 virtual false final false
  inline ::UnityEngine::Quaternion GetTargetRotation(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method get_lastAnimatedTargetRotation addr 0x11eb36c size 0x168 virtual false final false
  inline ::UnityEngine::Quaternion get_lastAnimatedTargetRotation();

  static inline ::RootMotion::FinalIK::__IKMapping__BoneMap* New_ctor();

  /// @brief Method .ctor addr 0x11ebdd8 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__IKMapping__BoneMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKMapping__BoneMap(__IKMapping__BoneMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKMapping__BoneMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKMapping__BoneMap(__IKMapping__BoneMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKMapping__BoneMap();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  /// @brief Field chainIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___chainIndex;

  /// @brief Field nodeIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___nodeIndex;

  /// @brief Field defaultLocalPosition, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  /// @brief Field localSwingAxis, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localSwingAxis;

  /// @brief Field localTwistAxis, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localTwistAxis;

  /// @brief Field planePosition, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___planePosition;

  /// @brief Field ikPosition, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___ikPosition;

  /// @brief Field defaultLocalTargetRotation, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalTargetRotation;

  /// @brief Field maintainRotation, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___maintainRotation;

  /// @brief Field length, offset: 0x8c, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field animatedRotation, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___animatedRotation;

  /// @brief Field planeBone1, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone1;

  /// @brief Field planeBone2, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone2;

  /// @brief Field planeBone3, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Transform* ___planeBone3;

  /// @brief Field plane1ChainIndex, offset: 0xb8, size: 0x4, def value: None
  int32_t ___plane1ChainIndex;

  /// @brief Field plane1NodeIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ___plane1NodeIndex;

  /// @brief Field plane2ChainIndex, offset: 0xc0, size: 0x4, def value: None
  int32_t ___plane2ChainIndex;

  /// @brief Field plane2NodeIndex, offset: 0xc4, size: 0x4, def value: None
  int32_t ___plane2NodeIndex;

  /// @brief Field plane3ChainIndex, offset: 0xc8, size: 0x4, def value: None
  int32_t ___plane3ChainIndex;

  /// @brief Field plane3NodeIndex, offset: 0xcc, size: 0x4, def value: None
  int32_t ___plane3NodeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKMapping__BoneMap, 0xd0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___chainIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___nodeIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___defaultLocalPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___defaultLocalRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___localSwingAxis) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___localTwistAxis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___planePosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___ikPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___defaultLocalTargetRotation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___maintainRotation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___length) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___animatedRotation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___planeBone1) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___planeBone2) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___planeBone3) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane1ChainIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane1NodeIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane2ChainIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane2NodeIndex) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane3ChainIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMapping__BoneMap, ___plane3NodeIndex) == 0xcc, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKMapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12482))
// CS Name: ::RootMotion.FinalIK::IKMapping*
class CORDL_TYPE IKMapping : public ::System::Object {
public:
  // Declarations
  using BoneMap = ::RootMotion::FinalIK::__IKMapping__BoneMap;

  /// @brief Method IsValid addr 0x11eac6c size 0x8 virtual true final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  /// @brief Method Initiate addr 0x11eac74 size 0x4 virtual true final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method BoneIsValid addr 0x11eac78 size 0x13c virtual false final false
  inline bool BoneIsValid(::UnityEngine::Transform* bone, ::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message, ::RootMotion::__Warning__Logger* logger);

  /// @brief Method SolveFABRIKJoint addr 0x11eadb4 size 0x114 virtual false final false
  inline ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length);

  static inline ::RootMotion::FinalIK::IKMapping* New_ctor();

  /// @brief Method .ctor addr 0x11eaec8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKMapping(IKMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKMapping(IKMapping const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKMapping();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKMapping, 0x10>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKMapping);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMapping*, "RootMotion.FinalIK", "IKMapping");
NEED_NO_BOX(::RootMotion::FinalIK::__IKMapping__BoneMap);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKMapping__BoneMap*, "RootMotion.FinalIK", "IKMapping/BoneMap");
