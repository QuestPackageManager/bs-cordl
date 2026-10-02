#pragma once
// IWYU pragma private; include "UnityEngine/Joint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Joint)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class ArticulationBody;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Joint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Joint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Joint*, "UnityEngine", "Joint");
// [NativeClass("Unity::Joint")]
// [NativeHeader("Modules/Physics/Joint.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Joint
class CORDL_TYPE Joint : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_anchor, put = set_anchor)) ::UnityEngine::Vector3 anchor;

  __declspec(property(get = get_autoConfigureConnectedAnchor, put = set_autoConfigureConnectedAnchor)) bool autoConfigureConnectedAnchor;

  __declspec(property(get = get_axis, put = set_axis)) ::UnityEngine::Vector3 axis;

  __declspec(property(get = get_breakForce, put = set_breakForce)) float_t breakForce;

  __declspec(property(get = get_breakTorque, put = set_breakTorque)) float_t breakTorque;

  __declspec(property(get = get_connectedAnchor, put = set_connectedAnchor)) ::UnityEngine::Vector3 connectedAnchor;

  __declspec(property(get = get_connectedArticulationBody, put = set_connectedArticulationBody)) ::UnityW<::UnityEngine::ArticulationBody> connectedArticulationBody;

  __declspec(property(get = get_connectedBody, put = set_connectedBody)) ::UnityW<::UnityEngine::Rigidbody> connectedBody;

  __declspec(property(get = get_connectedMassScale, put = set_connectedMassScale)) float_t connectedMassScale;

  __declspec(property(get = get_currentForce)) ::UnityEngine::Vector3 currentForce;

  __declspec(property(get = get_currentTorque)) ::UnityEngine::Vector3 currentTorque;

  __declspec(property(get = get_enableCollision, put = set_enableCollision)) bool enableCollision;

  __declspec(property(get = get_enablePreprocessing, put = set_enablePreprocessing)) bool enablePreprocessing;

  __declspec(property(get = get_massScale, put = set_massScale)) float_t massScale;

  /// @brief Method GetCurrentForces, addr 0x6ffdf74, size 0x98, virtual false, abstract: false, final false
  inline void GetCurrentForces(::by_ref<::UnityEngine::Vector3> linearForce, ::by_ref<::UnityEngine::Vector3> angularForce);

  /// @brief Method GetCurrentForces_Injected, addr 0x6ffe00c, size 0x54, virtual false, abstract: false, final false
  static inline void GetCurrentForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> linearForce, ::by_ref<::UnityEngine::Vector3> angularForce);

  static inline ::UnityEngine::Joint* New_ctor();

  /// @brief Method .ctor, addr 0x6fe9f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchor, addr 0x6ffd0e4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchor();

  /// @brief Method get_anchor_Injected, addr 0x6ffd184, size 0x44, virtual false, abstract: false, final false
  static inline void get_anchor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_autoConfigureConnectedAnchor, addr 0x6ffd464, size 0x80, virtual false, abstract: false, final false
  inline bool get_autoConfigureConnectedAnchor();

  /// @brief Method get_autoConfigureConnectedAnchor_Injected, addr 0x6ffd4e4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_autoConfigureConnectedAnchor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_axis, addr 0x6ffcf24, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_axis();

  /// @brief Method get_axis_Injected, addr 0x6ffcfc4, size 0x44, virtual false, abstract: false, final false
  static inline void get_axis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_breakForce, addr 0x6ffd5f4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_breakForce();

  /// @brief Method get_breakForce_Injected, addr 0x6ffd674, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_breakForce_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_breakTorque, addr 0x6ffd78c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_breakTorque();

  /// @brief Method get_breakTorque_Injected, addr 0x6ffd80c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_breakTorque_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_connectedAnchor, addr 0x6ffd2a4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_connectedAnchor();

  /// @brief Method get_connectedAnchor_Injected, addr 0x6ffd344, size 0x44, virtual false, abstract: false, final false
  static inline void get_connectedAnchor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_connectedArticulationBody, addr 0x6ffcc94, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ArticulationBody> get_connectedArticulationBody();

  /// @brief Method get_connectedArticulationBody_Injected, addr 0x6ffcde4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_connectedArticulationBody_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetConnectedRigidbody")]
  /// @brief Method get_connectedBody, addr 0x6ffca04, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_connectedBody();

  /// @brief Method get_connectedBody_Injected, addr 0x6ffcb54, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_connectedBody_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_connectedMassScale, addr 0x6ffdddc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_connectedMassScale();

  /// @brief Method get_connectedMassScale_Injected, addr 0x6ffde5c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_connectedMassScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_currentForce, addr 0x6ffe060, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_currentForce();

  /// @brief Method get_currentTorque, addr 0x6ffe0f4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_currentTorque();

  /// @brief Method get_enableCollision, addr 0x6ffd924, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableCollision();

  /// @brief Method get_enableCollision_Injected, addr 0x6ffd9a4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableCollision_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enablePreprocessing, addr 0x6ffdab4, size 0x80, virtual false, abstract: false, final false
  inline bool get_enablePreprocessing();

  /// @brief Method get_enablePreprocessing_Injected, addr 0x6ffdb34, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enablePreprocessing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_massScale, addr 0x6ffdc44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_massScale();

  /// @brief Method get_massScale_Injected, addr 0x6ffdcc4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_massScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_anchor, addr 0x6ffd1c8, size 0x98, virtual false, abstract: false, final false
  inline void set_anchor(::UnityEngine::Vector3 value);

  /// @brief Method set_anchor_Injected, addr 0x6ffd260, size 0x44, virtual false, abstract: false, final false
  static inline void set_anchor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_autoConfigureConnectedAnchor, addr 0x6ffd520, size 0x90, virtual false, abstract: false, final false
  inline void set_autoConfigureConnectedAnchor(bool value);

  /// @brief Method set_autoConfigureConnectedAnchor_Injected, addr 0x6ffd5b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_autoConfigureConnectedAnchor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_axis, addr 0x6ffd008, size 0x98, virtual false, abstract: false, final false
  inline void set_axis(::UnityEngine::Vector3 value);

  /// @brief Method set_axis_Injected, addr 0x6ffd0a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_axis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_breakForce, addr 0x6ffd6b0, size 0x90, virtual false, abstract: false, final false
  inline void set_breakForce(float_t value);

  /// @brief Method set_breakForce_Injected, addr 0x6ffd740, size 0x4c, virtual false, abstract: false, final false
  static inline void set_breakForce_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_breakTorque, addr 0x6ffd848, size 0x90, virtual false, abstract: false, final false
  inline void set_breakTorque(float_t value);

  /// @brief Method set_breakTorque_Injected, addr 0x6ffd8d8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_breakTorque_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_connectedAnchor, addr 0x6ffd388, size 0x98, virtual false, abstract: false, final false
  inline void set_connectedAnchor(::UnityEngine::Vector3 value);

  /// @brief Method set_connectedAnchor_Injected, addr 0x6ffd420, size 0x44, virtual false, abstract: false, final false
  static inline void set_connectedAnchor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_connectedArticulationBody, addr 0x6ffce20, size 0xc0, virtual false, abstract: false, final false
  inline void set_connectedArticulationBody(::UnityEngine::ArticulationBody* value);

  /// @brief Method set_connectedArticulationBody_Injected, addr 0x6ffcee0, size 0x44, virtual false, abstract: false, final false
  static inline void set_connectedArticulationBody_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// [NativeName("SetConnectedRigidbody")]
  /// @brief Method set_connectedBody, addr 0x6ffcb90, size 0xc0, virtual false, abstract: false, final false
  inline void set_connectedBody(::UnityEngine::Rigidbody* value);

  /// @brief Method set_connectedBody_Injected, addr 0x6ffcc50, size 0x44, virtual false, abstract: false, final false
  static inline void set_connectedBody_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_connectedMassScale, addr 0x6ffde98, size 0x90, virtual false, abstract: false, final false
  inline void set_connectedMassScale(float_t value);

  /// @brief Method set_connectedMassScale_Injected, addr 0x6ffdf28, size 0x4c, virtual false, abstract: false, final false
  static inline void set_connectedMassScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enableCollision, addr 0x6ffd9e0, size 0x90, virtual false, abstract: false, final false
  inline void set_enableCollision(bool value);

  /// @brief Method set_enableCollision_Injected, addr 0x6ffda70, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableCollision_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enablePreprocessing, addr 0x6ffdb70, size 0x90, virtual false, abstract: false, final false
  inline void set_enablePreprocessing(bool value);

  /// @brief Method set_enablePreprocessing_Injected, addr 0x6ffdc00, size 0x44, virtual false, abstract: false, final false
  static inline void set_enablePreprocessing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_massScale, addr 0x6ffdd00, size 0x90, virtual false, abstract: false, final false
  inline void set_massScale(float_t value);

  /// @brief Method set_massScale_Injected, addr 0x6ffdd90, size 0x4c, virtual false, abstract: false, final false
  static inline void set_massScale_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Joint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Joint(Joint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Joint(Joint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Joint) == 0x18, "Size mismatch!");

} // namespace UnityEngine
