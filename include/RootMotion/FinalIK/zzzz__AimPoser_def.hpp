#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AimPoser)
namespace RootMotion::FinalIK {
class __AimPoser__Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class AimPoser;
}
namespace RootMotion::FinalIK {
class __AimPoser__Pose;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::AimPoser);
MARK_REF_PTR_T(::RootMotion::FinalIK::__AimPoser__Pose);
// Type: ::Pose
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::AimPoser::Pose*
class CORDL_TYPE __AimPoser__Pose : public ::System::Object {
public:
  // Declarations
  /// @brief Field angleBuffer, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_angleBuffer, put = __cordl_internal_set_angleBuffer)) float_t angleBuffer;

  /// @brief Field direction, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field pitch, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_pitch, put = __cordl_internal_set_pitch)) float_t pitch;

  /// @brief Field visualize, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_visualize, put = __cordl_internal_set_visualize)) bool visualize;

  /// @brief Field yaw, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_yaw, put = __cordl_internal_set_yaw)) float_t yaw;

  /// @brief Method IsInDirection, addr 0x13975dc, size 0x4b0, virtual false, abstract: false, final false
  inline bool IsInDirection(::UnityEngine::Vector3 d);

  static inline ::RootMotion::FinalIK::__AimPoser__Pose* New_ctor();

  /// @brief Method SetAngleBuffer, addr 0x1397b4c, size 0x8, virtual false, abstract: false, final false
  inline void SetAngleBuffer(float_t value);

  constexpr float_t const& __cordl_internal_get_angleBuffer() const;

  constexpr float_t& __cordl_internal_get_angleBuffer();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr float_t const& __cordl_internal_get_pitch() const;

  constexpr float_t& __cordl_internal_get_pitch();

  constexpr bool const& __cordl_internal_get_visualize() const;

  constexpr bool& __cordl_internal_get_visualize();

  constexpr float_t const& __cordl_internal_get_yaw() const;

  constexpr float_t& __cordl_internal_get_yaw();

  constexpr void __cordl_internal_set_angleBuffer(float_t value);

  constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_pitch(float_t value);

  constexpr void __cordl_internal_set_visualize(bool value);

  constexpr void __cordl_internal_set_yaw(float_t value);

  /// @brief Method .ctor, addr 0x1397b54, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AimPoser__Pose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AimPoser__Pose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AimPoser__Pose(__AimPoser__Pose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AimPoser__Pose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AimPoser__Pose(__AimPoser__Pose const&) = delete;

  /// @brief Field visualize, offset: 0x10, size: 0x1, def value: None
  bool ___visualize;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field direction, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  /// @brief Field yaw, offset: 0x2c, size: 0x4, def value: None
  float_t ___yaw;

  /// @brief Field pitch, offset: 0x30, size: 0x4, def value: None
  float_t ___pitch;

  /// @brief Field angleBuffer, offset: 0x34, size: 0x4, def value: None
  float_t ___angleBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__AimPoser__Pose, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___visualize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___direction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___yaw) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___pitch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__AimPoser__Pose, ___angleBuffer) == 0x34, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::AimPoser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::AimPoser*
class CORDL_TYPE AimPoser : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pose = ::RootMotion::FinalIK::__AimPoser__Pose;

  /// @brief Field angleBuffer, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_angleBuffer, put = __cordl_internal_set_angleBuffer)) float_t angleBuffer;

  /// @brief Field poses, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_poses, put = __cordl_internal_set_poses))::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> poses;

  /// @brief Method GetPose, addr 0x139750c, size 0xd0, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__AimPoser__Pose* GetPose(::UnityEngine::Vector3 localDirection);

  static inline ::RootMotion::FinalIK::AimPoser* New_ctor();

  /// @brief Method SetPoseActive, addr 0x1397a8c, size 0x60, virtual false, abstract: false, final false
  inline void SetPoseActive(::RootMotion::FinalIK::__AimPoser__Pose* pose);

  constexpr float_t const& __cordl_internal_get_angleBuffer() const;

  constexpr float_t& __cordl_internal_get_angleBuffer();

  constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> const& __cordl_internal_get_poses() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*>& __cordl_internal_get_poses();

  constexpr void __cordl_internal_set_angleBuffer(float_t value);

  constexpr void __cordl_internal_set_poses(::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> value);

  /// @brief Method .ctor, addr 0x1397aec, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AimPoser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AimPoser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AimPoser(AimPoser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AimPoser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AimPoser(AimPoser const&) = delete;

  /// @brief Field angleBuffer, offset: 0x18, size: 0x4, def value: None
  float_t ___angleBuffer;

  /// @brief Field poses, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__AimPoser__Pose*, ::Array<::RootMotion::FinalIK::__AimPoser__Pose*>*> ___poses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::AimPoser, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::AimPoser, ___angleBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::AimPoser, ___poses) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::AimPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimPoser*, "RootMotion.FinalIK", "AimPoser");
NEED_NO_BOX(::RootMotion::FinalIK::__AimPoser__Pose);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__AimPoser__Pose*, "RootMotion.FinalIK", "AimPoser/Pose");
