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
namespace RootMotion::FinalIK {
class Finger;
}
namespace UnityEngine {
class Transform;
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
// CS Name: ::RootMotion.FinalIK::FingerRig*
class CORDL_TYPE FingerRig : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field <initiated>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__initiated_k__BackingField, put = __cordl_internal_set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field fingers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fingers, put = __cordl_internal_set_fingers))::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> fingers;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  /// @brief Field weight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method AddChildrenRecursive, addr 0x131fd80, size 0xe8, virtual false, abstract: false, final false
  inline void AddChildrenRecursive(::UnityEngine::Transform* parent, ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> array);

  /// @brief Method AddFinger, addr 0x131fe68, size 0x16c, virtual false, abstract: false, final false
  inline void AddFinger(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* tip, ::UnityEngine::Transform* target);

  /// @brief Method AutoDetect, addr 0x131fb5c, size 0x224, virtual false, abstract: false, final false
  inline void AutoDetect();

  /// @brief Method FixFingerTransforms, addr 0x1320240, size 0x68, virtual false, abstract: false, final false
  inline void FixFingerTransforms();

  /// @brief Method FixTransforms, addr 0x1320308, size 0x14, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method InitiateSolver, addr 0x1320134, size 0xa8, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method IsValid, addr 0x131fae8, size 0x74, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> errorMessage);

  static inline ::RootMotion::FinalIK::FingerRig* New_ctor();

  /// @brief Method RemoveFinger, addr 0x131ffd4, size 0x160, virtual false, abstract: false, final false
  inline void RemoveFinger(int32_t index);

  /// @brief Method StoreDefaultLocalState, addr 0x13202a8, size 0x5c, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method UpdateFingerSolvers, addr 0x13201dc, size 0x64, virtual false, abstract: false, final false
  inline void UpdateFingerSolvers();

  /// @brief Method UpdateSolver, addr 0x1320304, size 0x4, virtual true, abstract: false, final false
  inline void UpdateSolver();

  constexpr bool const& __cordl_internal_get__initiated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__initiated_k__BackingField();

  constexpr ::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> const& __cordl_internal_get_fingers() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*>& __cordl_internal_get_fingers();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set__initiated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_fingers(::ArrayW<::RootMotion::FinalIK::Finger*, ::Array<::RootMotion::FinalIK::Finger*>*> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x132031c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_initiated, addr 0x131fad4, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x131fadc, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FingerRig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FingerRig(FingerRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FingerRig(FingerRig const&) = delete;

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
