#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKMappingSpine)
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKMappingSpine);
// Type: RootMotion.FinalIK::IKMappingSpine
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12558))
// CS Name: ::RootMotion.FinalIK::IKMappingSpine*
class CORDL_TYPE IKMappingSpine : public ::RootMotion::FinalIK::IKMapping {
public:
  // Declarations
  /// @brief Field spineBones, offset 0x10, size 0x8
  __declspec(property(get = __get_spineBones, put = __set_spineBones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones;

  /// @brief Field leftUpperArmBone, offset 0x18, size 0x8
  __declspec(property(get = __get_leftUpperArmBone, put = __set_leftUpperArmBone))::UnityEngine::Transform* leftUpperArmBone;

  /// @brief Field rightUpperArmBone, offset 0x20, size 0x8
  __declspec(property(get = __get_rightUpperArmBone, put = __set_rightUpperArmBone))::UnityEngine::Transform* rightUpperArmBone;

  /// @brief Field leftThighBone, offset 0x28, size 0x8
  __declspec(property(get = __get_leftThighBone, put = __set_leftThighBone))::UnityEngine::Transform* leftThighBone;

  /// @brief Field rightThighBone, offset 0x30, size 0x8
  __declspec(property(get = __get_rightThighBone, put = __set_rightThighBone))::UnityEngine::Transform* rightThighBone;

  /// @brief Field iterations, offset 0x38, size 0x4
  __declspec(property(get = __get_iterations, put = __set_iterations)) int32_t iterations;

  /// @brief Field twistWeight, offset 0x3c, size 0x4
  __declspec(property(get = __get_twistWeight, put = __set_twistWeight)) float_t twistWeight;

  /// @brief Field rootNodeIndex, offset 0x40, size 0x4
  __declspec(property(get = __get_rootNodeIndex, put = __set_rootNodeIndex)) int32_t rootNodeIndex;

  /// @brief Field spine, offset 0x48, size 0x8
  __declspec(property(get = __get_spine, put = __set_spine))::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> spine;

  /// @brief Field leftUpperArm, offset 0x50, size 0x8
  __declspec(property(get = __get_leftUpperArm, put = __set_leftUpperArm))::RootMotion::FinalIK::__IKMapping__BoneMap* leftUpperArm;

  /// @brief Field rightUpperArm, offset 0x58, size 0x8
  __declspec(property(get = __get_rightUpperArm, put = __set_rightUpperArm))::RootMotion::FinalIK::__IKMapping__BoneMap* rightUpperArm;

  /// @brief Field leftThigh, offset 0x60, size 0x8
  __declspec(property(get = __get_leftThigh, put = __set_leftThigh))::RootMotion::FinalIK::__IKMapping__BoneMap* leftThigh;

  /// @brief Field rightThigh, offset 0x68, size 0x8
  __declspec(property(get = __get_rightThigh, put = __set_rightThigh))::RootMotion::FinalIK::__IKMapping__BoneMap* rightThigh;

  /// @brief Field useFABRIK, offset 0x70, size 0x1
  __declspec(property(get = __get_useFABRIK, put = __set_useFABRIK)) bool useFABRIK;

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_spineBones();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_spineBones() const;

  constexpr void __set_spineBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::UnityEngine::Transform*& __get_leftUpperArmBone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftUpperArmBone() const;

  constexpr void __set_leftUpperArmBone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightUpperArmBone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightUpperArmBone() const;

  constexpr void __set_rightUpperArmBone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftThighBone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftThighBone() const;

  constexpr void __set_leftThighBone(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightThighBone();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightThighBone() const;

  constexpr void __set_rightThighBone(::UnityEngine::Transform* value);

  constexpr int32_t& __get_iterations();

  constexpr int32_t const& __get_iterations() const;

  constexpr void __set_iterations(int32_t value);

  constexpr float_t& __get_twistWeight();

  constexpr float_t const& __get_twistWeight() const;

  constexpr void __set_twistWeight(float_t value);

  constexpr int32_t& __get_rootNodeIndex();

  constexpr int32_t const& __get_rootNodeIndex() const;

  constexpr void __set_rootNodeIndex(int32_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*>& __get_spine();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> const& __get_spine() const;

  constexpr void __set_spine(::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __get_leftUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __get_leftUpperArm() const;

  constexpr void __set_leftUpperArm(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __get_rightUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __get_rightUpperArm() const;

  constexpr void __set_rightUpperArm(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __get_leftThigh();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __get_leftThigh() const;

  constexpr void __set_leftThigh(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __get_rightThigh();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __get_rightThigh() const;

  constexpr void __set_rightThigh(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr bool& __get_useFABRIK();

  constexpr bool const& __get_useFABRIK() const;

  constexpr void __set_useFABRIK(bool value);

  /// @brief Method IsValid addr 0x125cf78 size 0x320 virtual true final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKMappingSpine* New_ctor();

  /// @brief Method .ctor addr 0x125d298 size 0x13c virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKMappingSpine* New_ctor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone,
                                                                ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

  /// @brief Method .ctor addr 0x125d3d4 size 0x170 virtual false final false
  inline void _ctor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone,
                    ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

  /// @brief Method SetBones addr 0x125d544 size 0x10 virtual false final false
  inline void SetBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone,
                       ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

  /// @brief Method StoreDefaultLocalState addr 0x125d554 size 0x5c virtual false final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms addr 0x125d5b0 size 0x78 virtual false final false
  inline void FixTransforms();

  /// @brief Method Initiate addr 0x125d628 size 0x614 virtual true final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method UseFABRIK addr 0x125dc3c size 0x38 virtual false final false
  inline bool UseFABRIK();

  /// @brief Method ReadPose addr 0x125dc74 size 0x264 virtual false final false
  inline void ReadPose();

  /// @brief Method WritePose addr 0x125ded8 size 0x320 virtual false final false
  inline void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ForwardReach addr 0x125e1f8 size 0xe0 virtual false final false
  inline void ForwardReach(::UnityEngine::Vector3 position);

  /// @brief Method BackwardReach addr 0x125e2d8 size 0xb4 virtual false final false
  inline void BackwardReach(::UnityEngine::Vector3 position);

  /// @brief Method MapToSolverPositions addr 0x125e38c size 0x23c virtual false final false
  inline void MapToSolverPositions(::RootMotion::FinalIK::IKSolverFullBody* solver);

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKMappingSpine(IKMappingSpine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKMappingSpine(IKMappingSpine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKMappingSpine();

public:
  /// @brief Field spineBones, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___spineBones;

  /// @brief Field leftUpperArmBone, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftUpperArmBone;

  /// @brief Field rightUpperArmBone, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightUpperArmBone;

  /// @brief Field leftThighBone, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftThighBone;

  /// @brief Field rightThighBone, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightThighBone;

  /// @brief Field iterations, offset: 0x38, size: 0x4, def value: None
  int32_t ___iterations;

  /// @brief Field twistWeight, offset: 0x3c, size: 0x4, def value: None
  float_t ___twistWeight;

  /// @brief Field rootNodeIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___rootNodeIndex;

  /// @brief Field spine, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> ___spine;

  /// @brief Field leftUpperArm, offset: 0x50, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___leftUpperArm;

  /// @brief Field rightUpperArm, offset: 0x58, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___rightUpperArm;

  /// @brief Field leftThigh, offset: 0x60, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___leftThigh;

  /// @brief Field rightThigh, offset: 0x68, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKMapping__BoneMap* ___rightThigh;

  /// @brief Field useFABRIK, offset: 0x70, size: 0x1, def value: None
  bool ___useFABRIK;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKMappingSpine, 0x78>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingSpine);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingSpine*, "RootMotion.FinalIK", "IKMappingSpine");
