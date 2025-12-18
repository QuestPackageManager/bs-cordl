#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/Pose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Pose)
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::Pose);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.InputTrackingState
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.Pose
struct CORDL_TYPE Pose {
public:
  // Declarations
  __declspec(property(get = get_angularVelocity, put = set_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_isTracked, put = set_isTracked)) bool isTracked;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::XR::InputTrackingState trackingState;

  __declspec(property(get = get_velocity, put = set_velocity)) ::UnityEngine::Vector3 velocity;

  /// @brief Method get_angularVelocity, addr 0x682a53c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_isTracked, addr 0x682a4d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTracked();

  /// @brief Method get_position, addr 0x682a4f4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x682a50c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_trackingState, addr 0x682a4e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputTrackingState get_trackingState();

  /// @brief Method get_velocity, addr 0x682a524, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method set_angularVelocity, addr 0x682a548, size 0xc, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_isTracked, addr 0x682a4dc, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(bool value);

  /// @brief Method set_position, addr 0x682a500, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x682a518, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_trackingState, addr 0x682a4ec, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::XR::InputTrackingState value);

  /// @brief Method set_velocity, addr 0x682a530, size 0xc, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pose();

  // Ctor Parameters [CppParam { name: "_isTracked_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_trackingState_k__BackingField", ty:
  // "::UnityEngine::XR::InputTrackingState", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam {
  // name: "_rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_velocity_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "_angularVelocity_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr Pose(bool _isTracked_k__BackingField, ::UnityEngine::XR::InputTrackingState _trackingState_k__BackingField, ::UnityEngine::Vector3 _position_k__BackingField,
                 ::UnityEngine::Quaternion _rotation_k__BackingField, ::UnityEngine::Vector3 _velocity_k__BackingField, ::UnityEngine::Vector3 _angularVelocity_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18516 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  /// @brief Field <isTracked>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::XR::InputTrackingState _trackingState_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rotation_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 _velocity_k__BackingField;

  /// @brief Field <angularVelocity>k__BackingField, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 _angularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _isTracked_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _trackingState_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _position_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _rotation_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _velocity_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::Pose, _angularVelocity_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::Pose, 0x3c>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::Pose, "UnityEngine.XR.OpenXR.Input", "Pose");
