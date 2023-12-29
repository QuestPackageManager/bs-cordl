#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerRig)
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FingerRig;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FingerRig);
// Type: RootMotion.FinalIK::FingerRig
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12427))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12444))
// CS Name: ::RootMotion.FinalIK::FingerRig*
class CORDL_TYPE FingerRig : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field weight, offset 0x34, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field fingers, offset 0x38, size 0x8
  __declspec(property(get = __get_fingers, put = __set_fingers))::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> fingers;

  /// @brief Field <initiated>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __get__initiated_k__BackingField, put = __set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*>& __get_fingers();

  constexpr ::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> const& __get_fingers() const;

  constexpr void __set_fingers(::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> value);

  constexpr bool& __get__initiated_k__BackingField();

  constexpr bool const& __get__initiated_k__BackingField() const;

  constexpr void __set__initiated_k__BackingField(bool value);

  /// @brief Method get_initiated addr 0x11d370c size 0x8 virtual false final false
  inline bool get_initiated();

  /// @brief Method set_initiated addr 0x11d3714 size 0xc virtual false final false
  inline void set_initiated(bool value);

  /// @brief Method IsValid addr 0x11d3720 size 0x74 virtual false final false
  inline bool IsValid(ByRef<::StringW> errorMessage);

  /// @brief Method AutoDetect addr 0x11d3794 size 0x224 virtual false final false
  inline void AutoDetect();

  /// @brief Method AddFinger addr 0x11d3aa0 size 0x16c virtual false final false
  inline void AddFinger(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* tip, ::UnityEngine::Transform* target);

  /// @brief Method RemoveFinger addr 0x11d3c0c size 0x160 virtual false final false
  inline void RemoveFinger(int32_t index);

  /// @brief Method AddChildrenRecursive addr 0x11d39b8 size 0xe8 virtual false final false
  inline void AddChildrenRecursive(::UnityEngine::Transform* parent, ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> array);

  /// @brief Method InitiateSolver addr 0x11d3d6c size 0xa8 virtual true final false
  inline void InitiateSolver();

  /// @brief Method UpdateFingerSolvers addr 0x11d3e14 size 0x64 virtual false final false
  inline void UpdateFingerSolvers();

  /// @brief Method FixFingerTransforms addr 0x11d3e78 size 0x68 virtual false final false
  inline void FixFingerTransforms();

  /// @brief Method StoreDefaultLocalState addr 0x11d3ee0 size 0x5c virtual false final false
  inline void StoreDefaultLocalState();

  /// @brief Method UpdateSolver addr 0x11d3f3c size 0x4 virtual true final false
  inline void UpdateSolver();

  /// @brief Method FixTransforms addr 0x11d3f40 size 0x14 virtual true final false
  inline void FixTransforms();

  static inline ::RootMotion::FinalIK::FingerRig* New_ctor();

  /// @brief Method .ctor addr 0x11d3f54 size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FingerRig(FingerRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FingerRig(FingerRig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FingerRig();

public:
  /// @brief Field weight, offset: 0x34, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field fingers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> ___fingers;

  /// @brief Field <initiated>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FingerRig, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FingerRig, ___weight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FingerRig, ___fingers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FingerRig, ____initiated_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FingerRig);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FingerRig*, "RootMotion.FinalIK", "FingerRig");
