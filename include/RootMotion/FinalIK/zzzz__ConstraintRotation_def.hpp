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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12436)), TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12439))
// CS Name: ::RootMotion.FinalIK::ConstraintRotation*
class CORDL_TYPE ConstraintRotation : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field rotation, offset 0x1c, size 0x10
  __declspec(property(get = __get_rotation, put = __set_rotation))::UnityEngine::Quaternion rotation;

  constexpr ::UnityEngine::Quaternion& __get_rotation();

  constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

  constexpr void __set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method UpdateConstraint addr 0x11d2620 size 0x7c virtual true final false
  inline void UpdateConstraint();

  static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor();

  /// @brief Method .ctor addr 0x11d269c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x11d26a4 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform);

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintRotation(ConstraintRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintRotation(ConstraintRotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintRotation();

public:
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
