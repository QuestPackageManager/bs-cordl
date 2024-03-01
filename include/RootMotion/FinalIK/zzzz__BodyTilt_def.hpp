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
// CS Name: ::RootMotion.FinalIK::BodyTilt*
class CORDL_TYPE BodyTilt : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  /// @brief Field lastForward, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastForward, put = __cordl_internal_set_lastForward))::UnityEngine::Vector3 lastForward;

  /// @brief Field poseLeft, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_poseLeft, put = __cordl_internal_set_poseLeft))::UnityW<::RootMotion::FinalIK::OffsetPose> poseLeft;

  /// @brief Field poseRight, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_poseRight, put = __cordl_internal_set_poseRight))::UnityW<::RootMotion::FinalIK::OffsetPose> poseRight;

  /// @brief Field tiltAngle, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_tiltAngle, put = __cordl_internal_set_tiltAngle)) float_t tiltAngle;

  /// @brief Field tiltSensitivity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_tiltSensitivity, put = __cordl_internal_set_tiltSensitivity)) float_t tiltSensitivity;

  /// @brief Field tiltSpeed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_tiltSpeed, put = __cordl_internal_set_tiltSpeed)) float_t tiltSpeed;

  static inline ::RootMotion::FinalIK::BodyTilt* New_ctor();

  /// @brief Method OnModifyOffset, addr 0x136db30, size 0x1ec, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  /// @brief Method Start, addr 0x136dac8, size 0x48, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastForward() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastForward();

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose> const& __cordl_internal_get_poseLeft() const;

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose>& __cordl_internal_get_poseLeft();

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose> const& __cordl_internal_get_poseRight() const;

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetPose>& __cordl_internal_get_poseRight();

  constexpr float_t const& __cordl_internal_get_tiltAngle() const;

  constexpr float_t& __cordl_internal_get_tiltAngle();

  constexpr float_t const& __cordl_internal_get_tiltSensitivity() const;

  constexpr float_t& __cordl_internal_get_tiltSensitivity();

  constexpr float_t const& __cordl_internal_get_tiltSpeed() const;

  constexpr float_t& __cordl_internal_get_tiltSpeed();

  constexpr void __cordl_internal_set_lastForward(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_poseLeft(::UnityW<::RootMotion::FinalIK::OffsetPose> value);

  constexpr void __cordl_internal_set_poseRight(::UnityW<::RootMotion::FinalIK::OffsetPose> value);

  constexpr void __cordl_internal_set_tiltAngle(float_t value);

  constexpr void __cordl_internal_set_tiltSensitivity(float_t value);

  constexpr void __cordl_internal_set_tiltSpeed(float_t value);

  /// @brief Method .ctor, addr 0x136ddd0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BodyTilt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BodyTilt(BodyTilt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BodyTilt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BodyTilt(BodyTilt const&) = delete;

  /// @brief Field tiltSpeed, offset: 0x2c, size: 0x4, def value: None
  float_t ___tiltSpeed;

  /// @brief Field tiltSensitivity, offset: 0x30, size: 0x4, def value: None
  float_t ___tiltSensitivity;

  /// @brief Field poseLeft, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::OffsetPose> ___poseLeft;

  /// @brief Field poseRight, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::OffsetPose> ___poseRight;

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
