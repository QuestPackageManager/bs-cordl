#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(ConstraintRotation)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintRotation;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintRotation);
// Type: RootMotion.FinalIK::ConstraintRotation
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::ConstraintRotation*
class CORDL_TYPE ConstraintRotation : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field rotation, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation))::UnityEngine::Quaternion rotation;

  static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor();

  static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method UpdateConstraint, addr 0x1346f40, size 0x7c, virtual true, abstract: false, final false
  inline void UpdateConstraint();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation();

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x1346fbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1346fc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintRotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintRotation(ConstraintRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintRotation(ConstraintRotation const&) = delete;

  /// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintRotation, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ConstraintRotation, ___rotation) == 0x1c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotation*, "RootMotion.FinalIK", "ConstraintRotation");
