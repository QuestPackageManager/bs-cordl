#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKSolverArm)
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace RootMotion::FinalIK {
class __IKSolverVR__Arm;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverArm;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverArm);
// Type: RootMotion.FinalIK::IKSolverArm
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12492)), TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12494))
// CS Name: ::RootMotion.FinalIK::IKSolverArm*
class CORDL_TYPE IKSolverArm : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field IKRotationWeight, offset 0x58, size 0x4
  __declspec(property(get = __get_IKRotationWeight, put = __set_IKRotationWeight)) float_t IKRotationWeight;

  /// @brief Field IKRotation, offset 0x5c, size 0x10
  __declspec(property(get = __get_IKRotation, put = __set_IKRotation))::UnityEngine::Quaternion IKRotation;

  /// @brief Field chest, offset 0x70, size 0x8
  __declspec(property(get = __get_chest, put = __set_chest))::RootMotion::FinalIK::__IKSolver__Point* chest;

  /// @brief Field shoulder, offset 0x78, size 0x8
  __declspec(property(get = __get_shoulder, put = __set_shoulder))::RootMotion::FinalIK::__IKSolver__Point* shoulder;

  /// @brief Field upperArm, offset 0x80, size 0x8
  __declspec(property(get = __get_upperArm, put = __set_upperArm))::RootMotion::FinalIK::__IKSolver__Point* upperArm;

  /// @brief Field forearm, offset 0x88, size 0x8
  __declspec(property(get = __get_forearm, put = __set_forearm))::RootMotion::FinalIK::__IKSolver__Point* forearm;

  /// @brief Field hand, offset 0x90, size 0x8
  __declspec(property(get = __get_hand, put = __set_hand))::RootMotion::FinalIK::__IKSolver__Point* hand;

  /// @brief Field isLeft, offset 0x98, size 0x1
  __declspec(property(get = __get_isLeft, put = __set_isLeft)) bool isLeft;

  /// @brief Field arm, offset 0xa0, size 0x8
  __declspec(property(get = __get_arm, put = __set_arm))::RootMotion::FinalIK::__IKSolverVR__Arm* arm;

  /// @brief Field positions, offset 0xa8, size 0x8
  __declspec(property(get = __get_positions, put = __set_positions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions;

  /// @brief Field rotations, offset 0xb0, size 0x8
  __declspec(property(get = __get_rotations, put = __set_rotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations;

  constexpr float_t& __get_IKRotationWeight();

  constexpr float_t const& __get_IKRotationWeight() const;

  constexpr void __set_IKRotationWeight(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_IKRotation();

  constexpr ::UnityEngine::Quaternion const& __get_IKRotation() const;

  constexpr void __set_IKRotation(::UnityEngine::Quaternion value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __get_chest();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __get_chest() const;

  constexpr void __set_chest(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __get_shoulder();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __get_shoulder() const;

  constexpr void __set_shoulder(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __get_upperArm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __get_upperArm() const;

  constexpr void __set_upperArm(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __get_forearm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __get_forearm() const;

  constexpr void __set_forearm(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __get_hand();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __get_hand() const;

  constexpr void __set_hand(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr bool& __get_isLeft();

  constexpr bool const& __get_isLeft() const;

  constexpr void __set_isLeft(bool value);

  constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm*& __get_arm();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> const& __get_arm() const;

  constexpr void __set_arm(::RootMotion::FinalIK::__IKSolverVR__Arm* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_positions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_positions() const;

  constexpr void __set_positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __get_rotations();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __get_rotations() const;

  constexpr void __set_rotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  /// @brief Method IsValid addr 0x11f0ca4 size 0x35c virtual true final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method SetChain addr 0x11f1000 size 0x60 virtual false final false
  inline bool SetChain(::UnityEngine::Transform* chest, ::UnityEngine::Transform* shoulder, ::UnityEngine::Transform* upperArm, ::UnityEngine::Transform* forearm, ::UnityEngine::Transform* hand,
                       ::UnityEngine::Transform* root);

  /// @brief Method GetPoints addr 0x11f1060 size 0x144 virtual true final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint addr 0x11f11a4 size 0x160 virtual true final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method StoreDefaultLocalState addr 0x11f1304 size 0x40 virtual true final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms addr 0x11f1344 size 0x50 virtual true final false
  inline void FixTransforms();

  /// @brief Method OnInitiate addr 0x11f1394 size 0x58 virtual true final false
  inline void OnInitiate();

  /// @brief Method OnUpdate addr 0x11f16f4 size 0x20 virtual true final false
  inline void OnUpdate();

  /// @brief Method Solve addr 0x11f1714 size 0x60 virtual false final false
  inline void Solve();

  /// @brief Method Read addr 0x11f13ec size 0x308 virtual false final false
  inline void Read();

  /// @brief Method Write addr 0x11f1774 size 0x178 virtual false final false
  inline void Write();

  static inline ::RootMotion::FinalIK::IKSolverArm* New_ctor();

  /// @brief Method .ctor addr 0x11f18ec size 0x194 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverArm(IKSolverArm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverArm(IKSolverArm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverArm();

public:
  /// @brief Field IKRotationWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___IKRotationWeight;

  /// @brief Field IKRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___IKRotation;

  /// @brief Field chest, offset: 0x70, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___chest;

  /// @brief Field shoulder, offset: 0x78, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___shoulder;

  /// @brief Field upperArm, offset: 0x80, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___upperArm;

  /// @brief Field forearm, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___forearm;

  /// @brief Field hand, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___hand;

  /// @brief Field isLeft, offset: 0x98, size: 0x1, def value: None
  bool ___isLeft;

  /// @brief Field arm, offset: 0xa0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__Arm* ___arm;

  /// @brief Field positions, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___positions;

  /// @brief Field rotations, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___rotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverArm, 0xb8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___IKRotationWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___IKRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___chest) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___shoulder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___upperArm) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___forearm) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___hand) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___isLeft) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___arm) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___positions) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverArm, ___rotations) == 0xb0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverArm);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverArm*, "RootMotion.FinalIK", "IKSolverArm");
