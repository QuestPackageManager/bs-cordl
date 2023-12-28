#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(ConstraintRotationOffset)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintRotationOffset;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintRotationOffset);
// Type: RootMotion.FinalIK::ConstraintRotationOffset
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 109, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12508)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12512))
// CS Name: ::RootMotion.FinalIK::ConstraintRotationOffset*
class CORDL_TYPE ConstraintRotationOffset : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field offset, offset 0x1c, size 0x10
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Quaternion offset;

  /// @brief Field defaultRotation, offset 0x2c, size 0x10
  __declspec(property(get = __get_defaultRotation, put = __set_defaultRotation))::UnityEngine::Quaternion defaultRotation;

  /// @brief Field defaultLocalRotation, offset 0x3c, size 0x10
  __declspec(property(get = __get_defaultLocalRotation, put = __set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field lastLocalRotation, offset 0x4c, size 0x10
  __declspec(property(get = __get_lastLocalRotation, put = __set_lastLocalRotation))::UnityEngine::Quaternion lastLocalRotation;

  /// @brief Field defaultTargetLocalRotation, offset 0x5c, size 0x10
  __declspec(property(get = __get_defaultTargetLocalRotation, put = __set_defaultTargetLocalRotation))::UnityEngine::Quaternion defaultTargetLocalRotation;

  /// @brief Field initiated, offset 0x6c, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  __declspec(property(get = get_rotationChanged)) bool rotationChanged;

  constexpr ::UnityEngine::Quaternion& __get_offset();

  constexpr ::UnityEngine::Quaternion const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_defaultRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultRotation() const;

  constexpr void __set_defaultRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

  constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_lastLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_lastLocalRotation() const;

  constexpr void __set_lastLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_defaultTargetLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultTargetLocalRotation() const;

  constexpr void __set_defaultTargetLocalRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  /// @brief Method UpdateConstraint addr 0x12429f8 size 0x104 virtual true final false
  inline void UpdateConstraint();

  static inline ::RootMotion::FinalIK::ConstraintRotationOffset* New_ctor();

  /// @brief Method .ctor addr 0x1242b54 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::ConstraintRotationOffset* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x1242b5c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method get_rotationChanged addr 0x1242afc size 0x58 virtual false final false
  inline bool get_rotationChanged();

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotationOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintRotationOffset(ConstraintRotationOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintRotationOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintRotationOffset(ConstraintRotationOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintRotationOffset();

public:
  /// @brief Field offset, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___offset;

  /// @brief Field defaultRotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultRotation;

  /// @brief Field defaultLocalRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  /// @brief Field lastLocalRotation, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastLocalRotation;

  /// @brief Field defaultTargetLocalRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultTargetLocalRotation;

  /// @brief Field initiated, offset: 0x6c, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintRotationOffset, 0x70>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotationOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotationOffset*, "RootMotion.FinalIK", "ConstraintRotationOffset");
