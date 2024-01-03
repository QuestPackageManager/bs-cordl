#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKMappingBone)
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMappingBone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKMappingBone);
// Type: RootMotion.FinalIK::IKMappingBone
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12555))
// CS Name: ::RootMotion.FinalIK::IKMappingBone*
class CORDL_TYPE IKMappingBone : public ::RootMotion::FinalIK::IKMapping {
public:
  // Declarations
  /// @brief Field bone, offset 0x10, size 0x8
  __declspec(property(get = __get_bone, put = __set_bone))::UnityEngine::Transform* bone;

  /// @brief Field maintainRotationWeight, offset 0x18, size 0x4
  __declspec(property(get = __get_maintainRotationWeight, put = __set_maintainRotationWeight)) float_t maintainRotationWeight;

  /// @brief Field boneMap, offset 0x20, size 0x8
  __declspec(property(get = __get_boneMap, put = __set_boneMap))::RootMotion::FinalIK::__IKMapping__BoneMap* boneMap;

  constexpr ::UnityEngine::Transform*& __get_bone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone() const;

  constexpr void __set_bone(::UnityEngine::Transform* value);

  constexpr float_t& __get_maintainRotationWeight();

  constexpr float_t const& __get_maintainRotationWeight() const;

  constexpr void __set_maintainRotationWeight(float_t value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __get_boneMap();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __get_boneMap() const;

  constexpr void __set_boneMap(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  /// @brief Method IsValid, addr 0x125c120, size 0x9c, virtual true, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKMappingBone* New_ctor();

  /// @brief Method .ctor, addr 0x125c1bc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKMappingBone* New_ctor(::UnityEngine::Transform* bone);

  /// @brief Method .ctor, addr 0x125c240, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone);

  /// @brief Method StoreDefaultLocalState, addr 0x125c2d8, size 0x18, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x125c2f0, size 0x1c, virtual false, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method Initiate, addr 0x125c30c, size 0x8c, virtual true, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ReadPose, addr 0x125c398, size 0x18, virtual false, abstract: false, final false
  inline void ReadPose();

  /// @brief Method WritePose, addr 0x125c3b0, size 0x24, virtual false, abstract: false, final false
  inline void WritePose(float_t solverWeight);

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKMappingBone(IKMappingBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKMappingBone(IKMappingBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKMappingBone();

public:
  /// @brief Field bone, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone;

  /// @brief Field maintainRotationWeight, offset: 0x18, size: 0x4, def value: None
  float_t ___maintainRotationWeight;

  /// @brief Field boneMap, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___boneMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKMappingBone, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingBone, ___bone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingBone, ___maintainRotationWeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingBone, ___boneMap) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingBone*, "RootMotion.FinalIK", "IKMappingBone");
