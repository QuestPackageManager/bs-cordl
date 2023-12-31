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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12508))
// CS Name: ::RootMotion.FinalIK::Constraint*
class CORDL_TYPE Constraint : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  __declspec(property(get = get_isValid)) bool isValid;

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  /// @brief Method get_isValid, addr 0x124268c, size 0x60, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method UpdateConstraint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateConstraint();

  static inline ::RootMotion::FinalIK::Constraint* New_ctor();

  /// @brief Method .ctor, addr 0x12426ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constraint(Constraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constraint(Constraint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constraint();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

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
