#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverLeg)
namespace RootMotion::FinalIK {
class __IKSolverVR__Leg;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
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
class IKSolverLeg;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverLeg);
// Type: RootMotion.FinalIK::IKSolverLeg
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverLeg*
class CORDL_TYPE IKSolverLeg : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field IKRotation, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_IKRotation, put = __cordl_internal_set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field IKRotationWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_IKRotationWeight, put = __cordl_internal_set_IKRotationWeight)) float_t IKRotationWeight;

  /// @brief Field calf, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_calf, put = __cordl_internal_set_calf))::RootMotion::FinalIK::__IKSolver__Point* calf;

  /// @brief Field foot, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_foot, put = __cordl_internal_set_foot))::RootMotion::FinalIK::__IKSolver__Point* foot;

  /// @brief Field heelOffset, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_heelOffset, put = __cordl_internal_set_heelOffset))::UnityEngine::Vector3 heelOffset;

  /// @brief Field leg, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_leg, put = __cordl_internal_set_leg))::RootMotion::FinalIK::__IKSolverVR__Leg* leg;

  /// @brief Field pelvis, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::RootMotion::FinalIK::__IKSolver__Point* pelvis;

  /// @brief Field positions, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions;

  /// @brief Field rotations, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_rotations, put = __cordl_internal_set_rotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations;

  /// @brief Field thigh, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_thigh, put = __cordl_internal_set_thigh))::RootMotion::FinalIK::__IKSolver__Point* thigh;

  /// @brief Field toe, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_toe, put = __cordl_internal_set_toe))::RootMotion::FinalIK::__IKSolver__Point* toe;

  /// @brief Method FixTransforms, addr 0x1346008, size 0x60, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetPoint, addr 0x1345e58, size 0x160, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x1345d14, size 0x144, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method IsValid, addr 0x1345954, size 0x35c, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKSolverLeg* New_ctor();

  /// @brief Method OnInitiate, addr 0x1346068, size 0x58, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x13463c4, size 0x20, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method Read, addr 0x13460c0, size 0x304, virtual false, abstract: false, final false
  inline void Read();

  /// @brief Method SetChain, addr 0x1345cb0, size 0x64, virtual false, abstract: false, final false
  inline bool SetChain(::UnityEngine::Transform* pelvis, ::UnityEngine::Transform* thigh, ::UnityEngine::Transform* calf, ::UnityEngine::Transform* foot, ::UnityEngine::Transform* toe,
                       ::UnityEngine::Transform* root);

  /// @brief Method Solve, addr 0x13463e4, size 0x84, virtual false, abstract: false, final false
  inline void Solve();

  /// @brief Method StoreDefaultLocalState, addr 0x1345fb8, size 0x50, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method Write, addr 0x1346468, size 0x178, virtual false, abstract: false, final false
  inline void Write();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IKRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IKRotation();

  constexpr float_t const& __cordl_internal_get_IKRotationWeight() const;

  constexpr float_t& __cordl_internal_get_IKRotationWeight();

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_calf();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_calf() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_foot();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_foot() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_heelOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_heelOffset();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg*& __cordl_internal_get_leg();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> const& __cordl_internal_get_leg() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_pelvis() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_positions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_rotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_rotations();

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_thigh();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_thigh() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_toe();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_toe() const;

  constexpr void __cordl_internal_set_IKRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_IKRotationWeight(float_t value);

  constexpr void __cordl_internal_set_calf(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr void __cordl_internal_set_foot(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr void __cordl_internal_set_heelOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leg(::RootMotion::FinalIK::__IKSolverVR__Leg* value);

  constexpr void __cordl_internal_set_pelvis(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr void __cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_rotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_thigh(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr void __cordl_internal_set_toe(::RootMotion::FinalIK::__IKSolver__Point* value);

  /// @brief Method .ctor, addr 0x1346848, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverLeg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverLeg(IKSolverLeg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverLeg(IKSolverLeg const&) = delete;

  /// @brief Field IKRotationWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___IKRotationWeight;

  /// @brief Field IKRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotation;

  /// @brief Field pelvis, offset: 0x70, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___pelvis;

  /// @brief Field thigh, offset: 0x78, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___thigh;

  /// @brief Field calf, offset: 0x80, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___calf;

  /// @brief Field foot, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___foot;

  /// @brief Field toe, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___toe;

  /// @brief Field leg, offset: 0x98, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Leg* ___leg;

  /// @brief Field heelOffset, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___heelOffset;

  /// @brief Field positions, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___positions;

  /// @brief Field rotations, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___rotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverLeg, 0xc0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___IKRotationWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___IKRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___pelvis) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___thigh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___calf) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___foot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___toe) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___leg) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___heelOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___positions) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLeg, ___rotations) == 0xb8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLeg);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLeg*, "RootMotion.FinalIK", "IKSolverLeg");
