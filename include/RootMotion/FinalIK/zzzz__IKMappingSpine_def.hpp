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
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::RootMotion.FinalIK::IKMappingSpine*
class CORDL_TYPE IKMappingSpine : public ::RootMotion::FinalIK::IKMapping {
public:
  // Declarations
  /// @brief Field iterations, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_iterations, put = __cordl_internal_set_iterations)) int32_t iterations;

  /// @brief Field leftThigh, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftThigh, put = __cordl_internal_set_leftThigh))::RootMotion::FinalIK::__IKMapping__BoneMap* leftThigh;

  /// @brief Field leftThighBone, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leftThighBone, put = __cordl_internal_set_leftThighBone))::UnityW<::UnityEngine::Transform> leftThighBone;

  /// @brief Field leftUpperArm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_leftUpperArm, put = __cordl_internal_set_leftUpperArm))::RootMotion::FinalIK::__IKMapping__BoneMap* leftUpperArm;

  /// @brief Field leftUpperArmBone, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_leftUpperArmBone, put = __cordl_internal_set_leftUpperArmBone))::UnityW<::UnityEngine::Transform> leftUpperArmBone;

  /// @brief Field rightThigh, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rightThigh, put = __cordl_internal_set_rightThigh))::RootMotion::FinalIK::__IKMapping__BoneMap* rightThigh;

  /// @brief Field rightThighBone, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rightThighBone, put = __cordl_internal_set_rightThighBone))::UnityW<::UnityEngine::Transform> rightThighBone;

  /// @brief Field rightUpperArm, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_rightUpperArm, put = __cordl_internal_set_rightUpperArm))::RootMotion::FinalIK::__IKMapping__BoneMap* rightUpperArm;

  /// @brief Field rightUpperArmBone, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rightUpperArmBone, put = __cordl_internal_set_rightUpperArmBone))::UnityW<::UnityEngine::Transform> rightUpperArmBone;

  /// @brief Field rootNodeIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_rootNodeIndex, put = __cordl_internal_set_rootNodeIndex)) int32_t rootNodeIndex;

  /// @brief Field spine, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_spine,
                      put = __cordl_internal_set_spine))::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> spine;

  /// @brief Field spineBones, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_spineBones,
                      put = __cordl_internal_set_spineBones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> spineBones;

  /// @brief Field twistWeight, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_twistWeight, put = __cordl_internal_set_twistWeight)) float_t twistWeight;

  /// @brief Field useFABRIK, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_useFABRIK, put = __cordl_internal_set_useFABRIK)) bool useFABRIK;

  /// @brief Method BackwardReach, addr 0x13618cc, size 0xb4, virtual false, abstract: false, final false
  inline void BackwardReach(::UnityEngine::Vector3 position);

  /// @brief Method FixTransforms, addr 0x1360ba4, size 0x78, virtual false, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method ForwardReach, addr 0x13617ec, size 0xe0, virtual false, abstract: false, final false
  inline void ForwardReach(::UnityEngine::Vector3 position);

  /// @brief Method Initiate, addr 0x1360c1c, size 0x614, virtual true, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method IsValid, addr 0x136056c, size 0x320, virtual true, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);

  /// @brief Method MapToSolverPositions, addr 0x1361980, size 0x23c, virtual false, abstract: false, final false
  inline void MapToSolverPositions(::RootMotion::FinalIK::IKSolverFullBody* solver);

  static inline ::RootMotion::FinalIK::IKMappingSpine* New_ctor();

  static inline ::RootMotion::FinalIK::IKMappingSpine* New_ctor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone,
                                                                ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

  /// @brief Method ReadPose, addr 0x1361268, size 0x264, virtual false, abstract: false, final false
  inline void ReadPose();

  /// @brief Method SetBones, addr 0x1360b38, size 0x10, virtual false, abstract: false, final false
  inline void SetBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone,
                       ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

  /// @brief Method StoreDefaultLocalState, addr 0x1360b48, size 0x5c, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method UseFABRIK, addr 0x1361230, size 0x38, virtual false, abstract: false, final false
  inline bool UseFABRIK();

  /// @brief Method WritePose, addr 0x13614cc, size 0x320, virtual false, abstract: false, final false
  inline void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver);

  constexpr int32_t const& __cordl_internal_get_iterations() const;

  constexpr int32_t& __cordl_internal_get_iterations();

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_leftThigh();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_leftThigh() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftThighBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftThighBone();

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_leftUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_leftUpperArm() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftUpperArmBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftUpperArmBone();

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_rightThigh();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_rightThigh() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightThighBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightThighBone();

  constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap*& __cordl_internal_get_rightUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> const& __cordl_internal_get_rightUpperArm() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightUpperArmBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightUpperArmBone();

  constexpr int32_t const& __cordl_internal_get_rootNodeIndex() const;

  constexpr int32_t& __cordl_internal_get_rootNodeIndex();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> const& __cordl_internal_get_spine() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*>& __cordl_internal_get_spine();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_spineBones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_spineBones();

  constexpr float_t const& __cordl_internal_get_twistWeight() const;

  constexpr float_t& __cordl_internal_get_twistWeight();

  constexpr bool const& __cordl_internal_get_useFABRIK() const;

  constexpr bool& __cordl_internal_get_useFABRIK();

  constexpr void __cordl_internal_set_iterations(int32_t value);

  constexpr void __cordl_internal_set_leftThigh(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr void __cordl_internal_set_leftThighBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftUpperArm(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr void __cordl_internal_set_leftUpperArmBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightThigh(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr void __cordl_internal_set_rightThighBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightUpperArm(::RootMotion::FinalIK::__IKMapping__BoneMap* value);

  constexpr void __cordl_internal_set_rightUpperArmBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rootNodeIndex(int32_t value);

  constexpr void __cordl_internal_set_spine(::ArrayW<::RootMotion::FinalIK::__IKMapping__BoneMap*, ::Array<::RootMotion::FinalIK::__IKMapping__BoneMap*>*> value);

  constexpr void __cordl_internal_set_spineBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_twistWeight(float_t value);

  constexpr void __cordl_internal_set_useFABRIK(bool value);

  /// @brief Method .ctor, addr 0x136088c, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x13609c8, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone,
                    ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKMappingSpine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKMappingSpine(IKMappingSpine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKMappingSpine(IKMappingSpine const&) = delete;

  /// @brief Field spineBones, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___spineBones;

  /// @brief Field leftUpperArmBone, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftUpperArmBone;

  /// @brief Field rightUpperArmBone, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightUpperArmBone;

  /// @brief Field leftThighBone, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftThighBone;

  /// @brief Field rightThighBone, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightThighBone;

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

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___spineBones) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___leftUpperArmBone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___rightUpperArmBone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___leftThighBone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___rightThighBone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___iterations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___twistWeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___rootNodeIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___spine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___leftUpperArm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___rightUpperArm) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___leftThigh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___rightThigh) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKMappingSpine, ___useFABRIK) == 0x70, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingSpine);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingSpine*, "RootMotion.FinalIK", "IKMappingSpine");
