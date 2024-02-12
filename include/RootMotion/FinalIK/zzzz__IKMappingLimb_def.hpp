#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IKMappingLimb)
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
struct __IKMappingLimb__BoneMapType;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __IKMappingLimb__BoneMapType;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType);
MARK_REF_PTR_T(::RootMotion::FinalIK::IKMappingLimb);
// Type: ::BoneMapType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12454))
// CS Name: ::IKMappingLimb::BoneMapType
struct CORDL_TYPE __IKMappingLimb__BoneMapType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IKMappingLimb__BoneMapType_Unwrapped
  enum struct ____IKMappingLimb__BoneMapType_Unwrapped : int32_t {
    __E_Parent = static_cast<int32_t>(0x0),
    __E_Bone1 = static_cast<int32_t>(0x1),
    __E_Bone2 = static_cast<int32_t>(0x2),
    __E_Bone3 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IKMappingLimb__BoneMapType_Unwrapped() const noexcept {
    return static_cast<____IKMappingLimb__BoneMapType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IKMappingLimb__BoneMapType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKMappingLimb__BoneMapType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Parent value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType const Parent;

  /// @brief Field Bone1 value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType const Bone1;

  /// @brief Field Bone2 value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType const Bone2;

  /// @brief Field Bone3 value: static_cast<int32_t>(0x3)
  static ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType const Bone3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKMappingLimb__BoneMapType, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKMappingLimb
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12452))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12455))
// CS Name: ::RootMotion.FinalIK::IKMappingLimb*
class CORDL_TYPE IKMappingLimb : public ::RootMotion::FinalIK::IKMapping {
public:
  // Declarations
  using BoneMapType = ::RootMotion::FinalIK::__IKMappingLimb__BoneMapType;

  /// @brief Field parentBone, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentBone, put = __cordl_internal_set_parentBone))::UnityW<::UnityEngine::Transform> parentBone;

  /// @brief Field bone1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::UnityW<::UnityEngine::Transform> bone1;

  /// @brief Field bone2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::UnityW<::UnityEngine::Transform> bone2;

  /// @brief Field bone3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bone3, put = __cordl_internal_set_bone3))::UnityW<::UnityEngine::Transform> bone3;

  /// @brief Field maintainRotationWeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maintainRotationWeight, put = __cordl_internal_set_maintainRotationWeight)) float_t maintainRotationWeight;

  /// @brief Field weight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Field updatePlaneRotations, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_updatePlaneRotations, put = __cordl_internal_set_updatePlaneRotations)) bool updatePlaneRotations;

  /// @brief Field boneMapParent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_boneMapParent, put = __cordl_internal_set_boneMapParent))::RootMotion::FinalIK::__IKMapping__BoneMap* boneMapParent;

  /// @brief Field boneMap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_boneMap1, put = __cordl_internal_set_boneMap1))::RootMotion::FinalIK::__IKMapping__BoneMap* boneMap1;

  /// @brief Field boneMap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_boneMap2, put = __cordl_internal_set_boneMap2))::RootMotion::FinalIK::__IKMapping__BoneMap* boneMap2;

  /// @brief Field boneMap3, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_boneMap3, put = __cordl_internal_set_boneMap3))::RootMotion::FinalIK::__IKMapping__BoneMap* boneMap3;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentBone();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentBone() const;

  constexpr void __cordl_internal_set_parentBone(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone1();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone1() const;

  constexpr void __cordl_internal_set_bone1(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone2();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone2() const;

  constexpr void __cordl_internal_set_bone2(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone3();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone3() const;

  constexpr void __cordl_internal_set_bone3(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_maintainRotationWeight();

  constexpr float_t const& __cordl_internal_get_maintainRotationWeight() const;

  constexpr void __cordl_internal_set_maintainRotationWeight(float_t value);

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  constexpr bool& __cordl_internal_get_updatePlaneRotations();

  constexpr bool const& __cordl_internal_get_updatePlaneRotations() const;

  constexpr void __cordl_internal_set_updatePlaneRotations(bool value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_boneMapParent();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_boneMapParent() const;

  constexpr void __cordl_internal_set_boneMapParent(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_boneMap1();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_boneMap1() const;

  constexpr void __cordl_internal_set_boneMap1(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_boneMap2();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_boneMap2() const;

  constexpr void __cordl_internal_set_boneMap2(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_boneMap3();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_boneMap3() const;

  constexpr void __cordl_internal_set_boneMap3(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  /// @brief Method IsValid, addr 0x12f5484, size 0x74, virtual true, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  /// @brief Method GetBoneMap, addr 0x12f54f8, size 0xc8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKMapping__BoneMap* GetBoneMap(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType boneMap);

  /// @brief Method SetLimbOrientation, addr 0x12f55c0, size 0x2b8, virtual false, abstract: false, final false
  inline void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower);

  static inline ::RootMotion::FinalIK::IKMappingLimb* New_ctor();

  /// @brief Method .ctor, addr 0x12f5878, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKMappingLimb* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* parentBone);

  /// @brief Method .ctor, addr 0x12f5994, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* parentBone);

  /// @brief Method SetBones, addr 0x12f5adc, size 0xc, virtual false, abstract: false, final false
  inline void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* parentBone);

  /// @brief Method StoreDefaultLocalState, addr 0x12f5ae8, size 0x98, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x12f5b80, size 0xa8, virtual false, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method Initiate, addr 0x12f5c28, size 0x25c, virtual true, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ReadPose, addr 0x12f5e84, size 0x60, virtual false, abstract: false, final false
  inline void ReadPose();

  /// @brief Method WritePose, addr 0x12f5ee4, size 0x144, virtual false, abstract: false, final false
  inline void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingLimb", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKMappingLimb(IKMappingLimb&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingLimb", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKMappingLimb(IKMappingLimb const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKMappingLimb();

public:
  /// @brief Field parentBone, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___parentBone;

  /// @brief Field bone1, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone1;

  /// @brief Field bone2, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone2;

  /// @brief Field bone3, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone3;

  /// @brief Field maintainRotationWeight, offset: 0x30, size: 0x4, def value: None
  float_t ___maintainRotationWeight;

  /// @brief Field weight, offset: 0x34, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field updatePlaneRotations, offset: 0x38, size: 0x1, def value: None
  bool ___updatePlaneRotations;

  /// @brief Field boneMapParent, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___boneMapParent;

  /// @brief Field boneMap1, offset: 0x48, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___boneMap1;

  /// @brief Field boneMap2, offset: 0x50, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___boneMap2;

  /// @brief Field boneMap3, offset: 0x58, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___boneMap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKMappingLimb, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___parentBone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___bone1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___bone2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___bone3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___maintainRotationWeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___weight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___updatePlaneRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___boneMapParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___boneMap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___boneMap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingLimb, ___boneMap3) == 0x58, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKMappingLimb__BoneMapType, "RootMotion.FinalIK", "IKMappingLimb/BoneMapType");
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingLimb*, "RootMotion.FinalIK", "IKMappingLimb");
