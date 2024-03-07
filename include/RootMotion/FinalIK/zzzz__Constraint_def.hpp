#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Constraint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Constraint;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::Constraint);
// Type: RootMotion.FinalIK::Constraint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::Constraint*
class CORDL_TYPE Constraint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  static inline ::RootMotion::FinalIK::Constraint* New_ctor();

  /// @brief Method UpdateConstraint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateConstraint();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1346ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isValid, addr 0x1346c80, size 0x60, virtual false, abstract: false, final false
  inline bool get_isValid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constraint(Constraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constraint(Constraint const&) = delete;

  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Constraint, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraint, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraint, ___weight) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Constraint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Constraint*, "RootMotion.FinalIK", "Constraint");
