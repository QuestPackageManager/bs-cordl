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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12617))
// CS Name: ::RootMotion.FinalIK::Poser*
class CORDL_TYPE Poser : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field poseRoot, offset 0x38, size 0x8
  __declspec(property(get = __get_poseRoot, put = __set_poseRoot))::UnityEngine::Transform* poseRoot;

  /// @brief Field weight, offset 0x40, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field localRotationWeight, offset 0x44, size 0x4
  __declspec(property(get = __get_localRotationWeight, put = __set_localRotationWeight)) float_t localRotationWeight;

  /// @brief Field localPositionWeight, offset 0x48, size 0x4
  __declspec(property(get = __get_localPositionWeight, put = __set_localPositionWeight)) float_t localPositionWeight;

  /// @brief Field initiated, offset 0x4c, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  constexpr ::UnityEngine::Transform*& __get_poseRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_poseRoot() const;

  constexpr void __set_poseRoot(::UnityEngine::Transform* value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr float_t& __get_localRotationWeight();

  constexpr float_t const& __get_localRotationWeight() const;

  constexpr void __set_localRotationWeight(float_t value);

  constexpr float_t& __get_localPositionWeight();

  constexpr float_t const& __get_localPositionWeight() const;

  constexpr void __set_localPositionWeight(float_t value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  /// @brief Method AutoMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AutoMapping();

  /// @brief Method UpdateManual, addr 0x128d47c, size 0xc, virtual false, abstract: false, final false
  inline void UpdateManual();

  /// @brief Method InitiatePoser, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitiatePoser();

  /// @brief Method UpdatePoser, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdatePoser();

  /// @brief Method FixPoserTransforms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FixPoserTransforms();

  /// @brief Method UpdateSolver, addr 0x128d488, size 0x44, virtual true, abstract: false, final false
  inline void UpdateSolver();

  /// @brief Method InitiateSolver, addr 0x128d4cc, size 0x2c, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method FixTransforms, addr 0x128d4f8, size 0x18, virtual true, abstract: false, final false
  inline void FixTransforms();

  static inline ::RootMotion::FinalIK::Poser* New_ctor();

  /// @brief Method .ctor, addr 0x128cde4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poser(Poser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poser(Poser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poser();

public:
  /// @brief Field poseRoot, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ___poseRoot;

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
