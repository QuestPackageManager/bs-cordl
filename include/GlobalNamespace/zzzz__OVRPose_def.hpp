#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPose)
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPose);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPose
struct CORDL_TYPE OVRPose {
public:
  // Declarations
  /// @brief Method Equals, addr 0x3fa71b0, size 0xf0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3fa7324, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Inverse, addr 0x3f9b708, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose Inverse();

  /// @brief Method Rotate180AlongX, addr 0x3fa7498, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose Rotate180AlongX();

  /// @brief Method ToPosef, addr 0x3f9b78c, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_Posef ToPosef();

  /// @brief Method ToPosef_Legacy, addr 0x3fa747c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_Posef ToPosef_Legacy();

  /// @brief Method flipZ, addr 0x3fa7450, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose flipZ();

  /// @brief Method get_identity, addr 0x3f9db34, size 0x98, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose get_identity();

  /// @brief Method op_Equality, addr 0x3fa72a0, size 0x84, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRPose x, ::GlobalNamespace::OVRPose y);

  /// @brief Method op_Inequality, addr 0x3fa73cc, size 0x84, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRPose x, ::GlobalNamespace::OVRPose y);

  /// @brief Method op_Multiply, addr 0x3f97ec8, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPose op_Multiply(::GlobalNamespace::OVRPose lhs, ::GlobalNamespace::OVRPose rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPose();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }]
  constexpr OVRPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field orientation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPose, orientation) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPose, 0x1c>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPose, "", "OVRPose");
