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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12513))
// CS Name: ::RootMotion.FinalIK::Constraints*
class CORDL_TYPE Constraints : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field positionOffset, offset 0x20, size 0xc
  __declspec(property(get = __get_positionOffset, put = __set_positionOffset))::UnityEngine::Vector3 positionOffset;

  /// @brief Field position, offset 0x2c, size 0xc
  __declspec(property(get = __get_position, put = __set_position))::UnityEngine::Vector3 position;

  /// @brief Field positionWeight, offset 0x38, size 0x4
  __declspec(property(get = __get_positionWeight, put = __set_positionWeight)) float_t positionWeight;

  /// @brief Field rotationOffset, offset 0x3c, size 0xc
  __declspec(property(get = __get_rotationOffset, put = __set_rotationOffset))::UnityEngine::Vector3 rotationOffset;

  /// @brief Field rotation, offset 0x48, size 0xc
  __declspec(property(get = __get_rotation, put = __set_rotation))::UnityEngine::Vector3 rotation;

  /// @brief Field rotationWeight, offset 0x54, size 0x4
  __declspec(property(get = __get_rotationWeight, put = __set_rotationWeight)) float_t rotationWeight;

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get_positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get_positionOffset() const;

  constexpr void __set_positionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_position();

  constexpr ::UnityEngine::Vector3 const& __get_position() const;

  constexpr void __set_position(::UnityEngine::Vector3 value);

  constexpr float_t& __get_positionWeight();

  constexpr float_t const& __get_positionWeight() const;

  constexpr void __set_positionWeight(float_t value);

  constexpr ::UnityEngine::Vector3& __get_rotationOffset();

  constexpr ::UnityEngine::Vector3 const& __get_rotationOffset() const;

  constexpr void __set_rotationOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_rotation();

  constexpr ::UnityEngine::Vector3 const& __get_rotation() const;

  constexpr void __set_rotation(::UnityEngine::Vector3 value);

  constexpr float_t& __get_rotationWeight();

  constexpr float_t const& __get_rotationWeight() const;

  constexpr void __set_rotationWeight(float_t value);

  /// @brief Method IsValid addr 0x1242b84 size 0x60 virtual false final false
  inline bool IsValid();

  /// @brief Method Initiate addr 0x1241dcc size 0x50 virtual false final false
  inline void Initiate(::UnityEngine::Transform* transform);

  /// @brief Method Update addr 0x1241f90 size 0x2f8 virtual false final false
  inline void Update();

  static inline ::RootMotion::FinalIK::Constraints* New_ctor();

  /// @brief Method .ctor addr 0x1242684 size 0x8 virtual false final false
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
  ::UnityEngine::Transform* ___transform;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

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

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Constraints);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Constraints*, "RootMotion.FinalIK", "Constraints");
