#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPose)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPose);
// Type: ::OVRPose
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7535))
// CS Name: ::OVRPose
struct CORDL_TYPE OVRPose {
public:
  // Declarations
  /// @brief Method get_identity addr 0x27127f4 size 0x98 virtual false final false
  static inline ::GlobalNamespace::OVRPose get_identity();

  /// @brief Method Equals addr 0x271a2ec size 0xf8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x271a468 size 0xa8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x271a3e4 size 0x84 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRPose x, ::GlobalNamespace::OVRPose y);

  /// @brief Method op_Inequality addr 0x271a510 size 0x84 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRPose x, ::GlobalNamespace::OVRPose y);

  /// @brief Method op_Multiply addr 0x270d15c size 0xe4 virtual false final false
  static inline ::GlobalNamespace::OVRPose op_Multiply(::GlobalNamespace::OVRPose lhs, ::GlobalNamespace::OVRPose rhs);

  /// @brief Method Inverse addr 0x2710a48 size 0x84 virtual false final false
  inline ::GlobalNamespace::OVRPose Inverse();

  /// @brief Method flipZ addr 0x271a594 size 0x2c virtual false final false
  inline ::GlobalNamespace::OVRPose flipZ();

  /// @brief Method ToPosef_Legacy addr 0x271a5c0 size 0x1c virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__Posef ToPosef_Legacy();

  /// @brief Method ToPosef addr 0x2710acc size 0x28 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__Posef ToPosef();

  /// @brief Method Rotate180AlongX addr 0x271a5dc size 0xe0 virtual false final false
  inline ::GlobalNamespace::OVRPose Rotate180AlongX();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }]
  constexpr OVRPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPose();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field orientation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPose, 0x1c>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPose, "", "OVRPose");
