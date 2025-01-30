#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRNodeState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRNodeState)
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRNodeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRNodeState);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.AvailableTrackingData, UnityEngine.XR.XRNode
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRNodeState
struct CORDL_TYPE XRNodeState {
public:
  // Declarations
  __declspec(property(get = get_nodeType, put = set_nodeType)) ::UnityEngine::XR::XRNode nodeType;

  __declspec(property(put = set_tracked)) bool tracked;

  __declspec(property(put = set_uniqueID)) uint64_t uniqueID;

  /// @brief Method TryGet, addr 0x4aeb92c, size 0x70, virtual false, abstract: false, final false
  inline bool TryGet(::UnityEngine::Quaternion inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ::ByRef<::UnityEngine::Quaternion> outValue);

  /// @brief Method TryGet, addr 0x4aeb8a8, size 0x70, virtual false, abstract: false, final false
  inline bool TryGet(::UnityEngine::Vector3 inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ::ByRef<::UnityEngine::Vector3> outValue);

  /// @brief Method TryGetAcceleration, addr 0x4aeb9c4, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetAcceleration(::ByRef<::UnityEngine::Vector3> acceleration);

  /// @brief Method TryGetAngularAcceleration, addr 0x4aeb9d8, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetAngularAcceleration(::ByRef<::UnityEngine::Vector3> angularAcceleration);

  /// @brief Method TryGetAngularVelocity, addr 0x4aeb9b0, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetAngularVelocity(::ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method TryGetPosition, addr 0x4aeb894, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetPosition(::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method TryGetRotation, addr 0x4aeb918, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetRotation(::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method TryGetVelocity, addr 0x4aeb99c, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetVelocity(::ByRef<::UnityEngine::Vector3> velocity);

  /// @brief Method get_nodeType, addr 0x4aeb88c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRNode get_nodeType();

  /// @brief Method set_nodeType, addr 0x4aeb74c, size 0x8, virtual false, abstract: false, final false
  inline void set_nodeType(::UnityEngine::XR::XRNode value);

  /// @brief Method set_tracked, addr 0x4aeb754, size 0xc, virtual false, abstract: false, final false
  inline void set_tracked(bool value);

  /// @brief Method set_uniqueID, addr 0x4aeb744, size 0x8, virtual false, abstract: false, final false
  inline void set_uniqueID(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRNodeState();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::XR::XRNode", modifiers: "", def_value: None }, CppParam { name: "m_AvailableFields", ty:
  // "::UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam {
  // name: "m_AngularAcceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr XRNodeState(::UnityEngine::XR::XRNode m_Type, ::UnityEngine::XR::AvailableTrackingData m_AvailableFields, ::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation,
                        ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_Acceleration, ::UnityEngine::Vector3 m_AngularAcceleration,
                        int32_t m_Tracked, uint64_t m_UniqueID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18266 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode m_Type;

  /// @brief Field m_AvailableFields, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::XR::AvailableTrackingData m_AvailableFields;

  /// @brief Field m_Position, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Rotation, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_Velocity, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Velocity;

  /// @brief Field m_AngularVelocity, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AngularVelocity;

  /// @brief Field m_Acceleration, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Acceleration;

  /// @brief Field m_AngularAcceleration, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_AngularAcceleration;

  /// @brief Field m_Tracked, offset: 0x54, size: 0x4, def value: None
  int32_t m_Tracked;

  /// @brief Field m_UniqueID, offset: 0x58, size: 0x8, def value: None
  uint64_t m_UniqueID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_AvailableFields) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Velocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_AngularVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Acceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_AngularAcceleration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_Tracked) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNodeState, m_UniqueID) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRNodeState, 0x60>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRNodeState, "UnityEngine.XR", "XRNodeState");
