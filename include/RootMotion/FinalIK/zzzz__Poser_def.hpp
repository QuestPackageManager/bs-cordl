#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Poser)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Poser;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::Poser);
// Type: RootMotion.FinalIK::Poser
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::Poser*
class CORDL_TYPE Poser : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field initiated, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field localPositionWeight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_localPositionWeight, put = __cordl_internal_set_localPositionWeight)) float_t localPositionWeight;

  /// @brief Field localRotationWeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_localRotationWeight, put = __cordl_internal_set_localRotationWeight)) float_t localRotationWeight;

  /// @brief Field poseRoot, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_poseRoot, put = __cordl_internal_set_poseRoot))::UnityW<::UnityEngine::Transform> poseRoot;

  /// @brief Field weight, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method AutoMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AutoMapping();

  /// @brief Method FixPoserTransforms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FixPoserTransforms();

  /// @brief Method FixTransforms, addr 0x1367594, size 0x18, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method InitiatePoser, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitiatePoser();

  /// @brief Method InitiateSolver, addr 0x1367568, size 0x2c, virtual true, abstract: false, final false
  inline void InitiateSolver();

  static inline ::RootMotion::FinalIK::Poser* New_ctor();

  /// @brief Method UpdateManual, addr 0x1367518, size 0xc, virtual false, abstract: false, final false
  inline void UpdateManual();

  /// @brief Method UpdatePoser, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdatePoser();

  /// @brief Method UpdateSolver, addr 0x1367524, size 0x44, virtual true, abstract: false, final false
  inline void UpdateSolver();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr float_t const& __cordl_internal_get_localPositionWeight() const;

  constexpr float_t& __cordl_internal_get_localPositionWeight();

  constexpr float_t const& __cordl_internal_get_localRotationWeight() const;

  constexpr float_t& __cordl_internal_get_localRotationWeight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseRoot();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_localPositionWeight(float_t value);

  constexpr void __cordl_internal_set_localRotationWeight(float_t value);

  constexpr void __cordl_internal_set_poseRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1366e80, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poser(Poser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poser(Poser const&) = delete;

  /// @brief Field poseRoot, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___poseRoot;

  /// @brief Field weight, offset: 0x40, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field localRotationWeight, offset: 0x44, size: 0x4, def value: None
  float_t ___localRotationWeight;

  /// @brief Field localPositionWeight, offset: 0x48, size: 0x4, def value: None
  float_t ___localPositionWeight;

  /// @brief Field initiated, offset: 0x4c, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Poser, 0x50>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Poser, ___poseRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Poser, ___weight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Poser, ___localRotationWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Poser, ___localPositionWeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Poser, ___initiated) == 0x4c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Poser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Poser*, "RootMotion.FinalIK", "Poser");
