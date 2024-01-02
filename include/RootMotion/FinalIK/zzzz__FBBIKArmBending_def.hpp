#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(FBBIKArmBending)
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FBBIKArmBending;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FBBIKArmBending);
// Type: RootMotion.FinalIK::FBBIKArmBending
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12545))
// CS Name: ::RootMotion.FinalIK::FBBIKArmBending*
class CORDL_TYPE FBBIKArmBending : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::FullBodyBipedIK* ik;

  /// @brief Field bendDirectionOffsetLeft, offset 0x20, size 0xc
  __declspec(property(get = __get_bendDirectionOffsetLeft, put = __set_bendDirectionOffsetLeft))::UnityEngine::Vector3 bendDirectionOffsetLeft;

  /// @brief Field bendDirectionOffsetRight, offset 0x2c, size 0xc
  __declspec(property(get = __get_bendDirectionOffsetRight, put = __set_bendDirectionOffsetRight))::UnityEngine::Vector3 bendDirectionOffsetRight;

  /// @brief Field characterSpaceBendOffsetLeft, offset 0x38, size 0xc
  __declspec(property(get = __get_characterSpaceBendOffsetLeft, put = __set_characterSpaceBendOffsetLeft))::UnityEngine::Vector3 characterSpaceBendOffsetLeft;

  /// @brief Field characterSpaceBendOffsetRight, offset 0x44, size 0xc
  __declspec(property(get = __get_characterSpaceBendOffsetRight, put = __set_characterSpaceBendOffsetRight))::UnityEngine::Vector3 characterSpaceBendOffsetRight;

  /// @brief Field leftHandTargetRotation, offset 0x50, size 0x10
  __declspec(property(get = __get_leftHandTargetRotation, put = __set_leftHandTargetRotation))::UnityEngine::Quaternion leftHandTargetRotation;

  /// @brief Field rightHandTargetRotation, offset 0x60, size 0x10
  __declspec(property(get = __get_rightHandTargetRotation, put = __set_rightHandTargetRotation))::UnityEngine::Quaternion rightHandTargetRotation;

  /// @brief Field initiated, offset 0x70, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  constexpr ::UnityEngine::Vector3& __get_bendDirectionOffsetLeft();

  constexpr ::UnityEngine::Vector3 const& __get_bendDirectionOffsetLeft() const;

  constexpr void __set_bendDirectionOffsetLeft(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_bendDirectionOffsetRight();

  constexpr ::UnityEngine::Vector3 const& __get_bendDirectionOffsetRight() const;

  constexpr void __set_bendDirectionOffsetRight(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_characterSpaceBendOffsetLeft();

  constexpr ::UnityEngine::Vector3 const& __get_characterSpaceBendOffsetLeft() const;

  constexpr void __set_characterSpaceBendOffsetLeft(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_characterSpaceBendOffsetRight();

  constexpr ::UnityEngine::Vector3 const& __get_characterSpaceBendOffsetRight() const;

  constexpr void __set_characterSpaceBendOffsetRight(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_leftHandTargetRotation();

  constexpr ::UnityEngine::Quaternion const& __get_leftHandTargetRotation() const;

  constexpr void __set_leftHandTargetRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_rightHandTargetRotation();

  constexpr ::UnityEngine::Quaternion const& __get_rightHandTargetRotation() const;

  constexpr void __set_rightHandTargetRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  /// @brief Method LateUpdate, addr 0x1251204, size 0x49c, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnPostFBBIK, addr 0x12516a0, size 0x194, virtual false, abstract: false, final false
  inline void OnPostFBBIK();

  /// @brief Method OnDestroy, addr 0x1251834, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::FBBIKArmBending* New_ctor();

  /// @brief Method .ctor, addr 0x1251940, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBBIKArmBending(FBBIKArmBending&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBBIKArmBending(FBBIKArmBending const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBBIKArmBending();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::FullBodyBipedIK* ___ik;

  /// @brief Field bendDirectionOffsetLeft, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendDirectionOffsetLeft;

  /// @brief Field bendDirectionOffsetRight, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bendDirectionOffsetRight;

  /// @brief Field characterSpaceBendOffsetLeft, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___characterSpaceBendOffsetLeft;

  /// @brief Field characterSpaceBendOffsetRight, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___characterSpaceBendOffsetRight;

  /// @brief Field leftHandTargetRotation, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___leftHandTargetRotation;

  /// @brief Field rightHandTargetRotation, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rightHandTargetRotation;

  /// @brief Field initiated, offset: 0x70, size: 0x1, def value: None
  bool ___initiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FBBIKArmBending, 0x78>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___ik) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___bendDirectionOffsetLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___bendDirectionOffsetRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___characterSpaceBendOffsetLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___characterSpaceBendOffsetRight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___leftHandTargetRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___rightHandTargetRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKArmBending, ___initiated) == 0x70, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKArmBending);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKArmBending*, "RootMotion.FinalIK", "FBBIKArmBending");
