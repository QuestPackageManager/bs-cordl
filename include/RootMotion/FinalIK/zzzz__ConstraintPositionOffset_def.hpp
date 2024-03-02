#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConstraintPositionOffset)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintPositionOffset;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintPositionOffset);
// Type: RootMotion.FinalIK::ConstraintPositionOffset
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::ConstraintPositionOffset*
class CORDL_TYPE ConstraintPositionOffset : public ::RootMotion::FinalIK::Constraint {
public:
  // Declarations
  /// @brief Field defaultLocalPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultLocalPosition, put = __cordl_internal_set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field initiated, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field lastLocalPosition, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_lastLocalPosition, put = __cordl_internal_set_lastLocalPosition))::UnityEngine::Vector3 lastLocalPosition;

  /// @brief Field offset, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  __declspec(property(get = get_positionChanged)) bool positionChanged;

  static inline ::RootMotion::FinalIK::ConstraintPositionOffset* New_ctor();

  static inline ::RootMotion::FinalIK::ConstraintPositionOffset* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method UpdateConstraint, addr 0x131e858, size 0x104, virtual true, abstract: false, final false
  inline void UpdateConstraint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalPosition();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_lastLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x131e9b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x131e9c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method get_positionChanged, addr 0x131e95c, size 0x5c, virtual false, abstract: false, final false
  inline bool get_positionChanged();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintPositionOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintPositionOffset(ConstraintPositionOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintPositionOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintPositionOffset(ConstraintPositionOffset const&) = delete;

  /// @brief Field offset, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field defaultLocalPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalPosition;

  /// @brief Field lastLocalPosition, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastLocalPosition;

  /// @brief Field initiated, offset: 0x40, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintPositionOffset, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ConstraintPositionOffset, ___offset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ConstraintPositionOffset, ___defaultLocalPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ConstraintPositionOffset, ___lastLocalPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::ConstraintPositionOffset, ___initiated) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintPositionOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintPositionOffset*, "RootMotion.FinalIK", "ConstraintPositionOffset");
