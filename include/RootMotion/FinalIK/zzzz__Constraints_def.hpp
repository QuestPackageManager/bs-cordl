#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Constraints)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Constraints;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::Constraints);
// Type: RootMotion.FinalIK::Constraints
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12411))
// CS Name: ::RootMotion.FinalIK::Constraints*
class CORDL_TYPE Constraints : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field positionOffset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_positionOffset, put = __cordl_internal_set_positionOffset))::UnityEngine::Vector3 positionOffset;

  /// @brief Field position, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3 position;

  /// @brief Field positionWeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_positionWeight, put = __cordl_internal_set_positionWeight)) float_t positionWeight;

  /// @brief Field rotationOffset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset))::UnityEngine::Vector3 rotationOffset;

  /// @brief Field rotation, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation))::UnityEngine::Vector3 rotation;

  /// @brief Field rotationWeight, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionOffset() const;

  constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_positionWeight();

  constexpr float_t const& __cordl_internal_get_positionWeight() const;

  constexpr void __cordl_internal_set_positionWeight(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationOffset() const;

  constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  /// @brief Method IsValid, addr 0x12ddc34, size 0x60, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method Initiate, addr 0x12dce7c, size 0x50, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* transform);

  /// @brief Method Update, addr 0x12dd040, size 0x2f8, virtual false, abstract: false, final false
  inline void Update();

  static inline ::RootMotion::FinalIK::Constraints* New_ctor();

  /// @brief Method .ctor, addr 0x12dd734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Constraints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constraints(Constraints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constraints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constraints(Constraints const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constraints();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field positionOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___positionOffset;

  /// @brief Field position, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field positionWeight, offset: 0x38, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field rotationOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotationOffset;

  /// @brief Field rotation, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotation;

  /// @brief Field rotationWeight, offset: 0x54, size: 0x4, def value: None
  float_t ___rotationWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Constraints, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___positionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___position) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___positionWeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___rotationOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___rotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Constraints, ___rotationWeight) == 0x54, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Constraints);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Constraints*, "RootMotion.FinalIK", "Constraints");
