#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BodyTilt)
namespace RootMotion::FinalIK {
class OffsetPose;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BodyTilt;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::BodyTilt);
// Type: RootMotion.FinalIK::BodyTilt
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12656)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12636))
// CS Name: ::RootMotion.FinalIK::BodyTilt*
class CORDL_TYPE BodyTilt : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  /// @brief Field tiltSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __get_tiltSpeed, put = __set_tiltSpeed)) float_t tiltSpeed;

  /// @brief Field tiltSensitivity, offset 0x30, size 0x4
  __declspec(property(get = __get_tiltSensitivity, put = __set_tiltSensitivity)) float_t tiltSensitivity;

  /// @brief Field poseLeft, offset 0x38, size 0x8
  __declspec(property(get = __get_poseLeft, put = __set_poseLeft))::RootMotion::FinalIK::OffsetPose* poseLeft;

  /// @brief Field poseRight, offset 0x40, size 0x8
  __declspec(property(get = __get_poseRight, put = __set_poseRight))::RootMotion::FinalIK::OffsetPose* poseRight;

  /// @brief Field tiltAngle, offset 0x48, size 0x4
  __declspec(property(get = __get_tiltAngle, put = __set_tiltAngle)) float_t tiltAngle;

  /// @brief Field lastForward, offset 0x4c, size 0xc
  __declspec(property(get = __get_lastForward, put = __set_lastForward))::UnityEngine::Vector3 lastForward;

  constexpr float_t& __get_tiltSpeed();

  constexpr float_t const& __get_tiltSpeed() const;

  constexpr void __set_tiltSpeed(float_t value);

  constexpr float_t& __get_tiltSensitivity();

  constexpr float_t const& __get_tiltSensitivity() const;

  constexpr void __set_tiltSensitivity(float_t value);

  constexpr ::RootMotion::FinalIK::OffsetPose*& __get_poseLeft();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetPose*> const& __get_poseLeft() const;

  constexpr void __set_poseLeft(::RootMotion::FinalIK::OffsetPose* value);

  constexpr ::RootMotion::FinalIK::OffsetPose*& __get_poseRight();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetPose*> const& __get_poseRight() const;

  constexpr void __set_poseRight(::RootMotion::FinalIK::OffsetPose* value);

  constexpr float_t& __get_tiltAngle();

  constexpr float_t const& __get_tiltAngle() const;

  constexpr void __set_tiltAngle(float_t value);

  constexpr ::UnityEngine::Vector3& __get_lastForward();

  constexpr ::UnityEngine::Vector3 const& __get_lastForward() const;

  constexpr void __set_lastForward(::UnityEngine::Vector3 value);

  /// @brief Method Start, addr 0x1294a2c, size 0x48, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnModifyOffset, addr 0x1294a94, size 0x1ec, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  static inline ::RootMotion::FinalIK::BodyTilt* New_ctor();

  /// @brief Method .ctor, addr 0x1294d34, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BodyTilt(BodyTilt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BodyTilt(BodyTilt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BodyTilt();

public:
  /// @brief Field tiltSpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ___tiltSpeed;

  /// @brief Field tiltSensitivity, offset: 0x30, size: 0x4, def value: None
  float_t ___tiltSensitivity;

  /// @brief Field poseLeft, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::OffsetPose* ___poseLeft;

  /// @brief Field poseRight, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::OffsetPose* ___poseRight;

  /// @brief Field tiltAngle, offset: 0x48, size: 0x4, def value: None
  float_t ___tiltAngle;

  /// @brief Field lastForward, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastForward;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::BodyTilt, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___tiltSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___tiltSensitivity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___poseLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___poseRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___tiltAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BodyTilt, ___lastForward) == 0x4c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::BodyTilt);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::BodyTilt*, "RootMotion.FinalIK", "BodyTilt");
