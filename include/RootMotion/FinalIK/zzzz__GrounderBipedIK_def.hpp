#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrounderBipedIK)
namespace RootMotion::FinalIK {
class BipedIK;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderBipedIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderBipedIK);
// Type: RootMotion.FinalIK::GrounderBipedIK
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::GrounderBipedIK*
class CORDL_TYPE GrounderBipedIK : public ::RootMotion::FinalIK::Grounder {
public:
  // Declarations
  /// @brief Field animatedPelvisLocalPosition, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_animatedPelvisLocalPosition, put = __cordl_internal_set_animatedPelvisLocalPosition))::UnityEngine::Vector3 animatedPelvisLocalPosition;

  /// @brief Field feet, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_feet, put = __cordl_internal_set_feet))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> feet;

  /// @brief Field footRotations, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_footRotations, put = __cordl_internal_set_footRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> footRotations;

  /// @brief Field ik, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::BipedIK> ik;

  /// @brief Field lastWeight, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_lastWeight, put = __cordl_internal_set_lastWeight)) float_t lastWeight;

  /// @brief Field solvedPelvisLocalPosition, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get_solvedPelvisLocalPosition, put = __cordl_internal_set_solvedPelvisLocalPosition))::UnityEngine::Vector3 solvedPelvisLocalPosition;

  /// @brief Field spineBend, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_spineBend, put = __cordl_internal_set_spineBend)) float_t spineBend;

  /// @brief Field spineOffset, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_spineOffset, put = __cordl_internal_set_spineOffset))::UnityEngine::Vector3 spineOffset;

  /// @brief Field spineSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_spineSpeed, put = __cordl_internal_set_spineSpeed)) float_t spineSpeed;

  /// @brief Method Initiate, addr 0x134908c, size 0x304, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method IsReadyToInitiate, addr 0x1348f98, size 0xa0, virtual false, abstract: false, final false
  inline bool IsReadyToInitiate();

  static inline ::RootMotion::FinalIK::GrounderBipedIK* New_ctor();

  /// @brief Method OnDestroy, addr 0x1349ac0, size 0x1a8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x1349390, size 0x40, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPostSolverUpdate, addr 0x13498f0, size 0x1d0, virtual false, abstract: false, final false
  inline void OnPostSolverUpdate();

  /// @brief Method OnSolverUpdate, addr 0x13493d0, size 0x460, virtual false, abstract: false, final false
  inline void OnSolverUpdate();

  /// @brief Method OpenScriptReference, addr 0x1348ee8, size 0x44, virtual true, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x1348ea4, size 0x44, virtual true, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method ResetPosition, addr 0x1348f2c, size 0x6c, virtual true, abstract: false, final false
  inline void ResetPosition();

  /// @brief Method SetLegIK, addr 0x1349830, size 0xc0, virtual false, abstract: false, final false
  inline void SetLegIK(::RootMotion::FinalIK::IKSolverLimb* limb, int32_t index);

  /// @brief Method Update, addr 0x1349038, size 0x54, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_animatedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_animatedPelvisLocalPosition();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_feet() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_feet();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_footRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_footRotations();

  constexpr ::UnityW<::RootMotion::FinalIK::BipedIK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::BipedIK>& __cordl_internal_get_ik();

  constexpr float_t const& __cordl_internal_get_lastWeight() const;

  constexpr float_t& __cordl_internal_get_lastWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_solvedPelvisLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_solvedPelvisLocalPosition();

  constexpr float_t const& __cordl_internal_get_spineBend() const;

  constexpr float_t& __cordl_internal_get_spineBend();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spineOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spineOffset();

  constexpr float_t const& __cordl_internal_get_spineSpeed() const;

  constexpr float_t& __cordl_internal_get_spineSpeed();

  constexpr void __cordl_internal_set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_feet(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_footRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::BipedIK> value);

  constexpr void __cordl_internal_set_lastWeight(float_t value);

  constexpr void __cordl_internal_set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_spineBend(float_t value);

  constexpr void __cordl_internal_set_spineOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_spineSpeed(float_t value);

  /// @brief Method .ctor, addr 0x1349c68, size 0x108c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GrounderBipedIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GrounderBipedIK(GrounderBipedIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GrounderBipedIK(GrounderBipedIK const&) = delete;

  /// @brief Field ik, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::BipedIK> ___ik;

  /// @brief Field spineBend, offset: 0x48, size: 0x4, def value: None
  float_t ___spineBend;

  /// @brief Field spineSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ___spineSpeed;

  /// @brief Field feet, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___feet;

  /// @brief Field footRotations, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___footRotations;

  /// @brief Field animatedPelvisLocalPosition, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___animatedPelvisLocalPosition;

  /// @brief Field solvedPelvisLocalPosition, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___solvedPelvisLocalPosition;

  /// @brief Field spineOffset, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spineOffset;

  /// @brief Field lastWeight, offset: 0x84, size: 0x4, def value: None
  float_t ___lastWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderBipedIK, 0x88>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___ik) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___spineBend) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___spineSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___feet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___footRotations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___animatedPelvisLocalPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___solvedPelvisLocalPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___spineOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::GrounderBipedIK, ___lastWeight) == 0x84, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderBipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
