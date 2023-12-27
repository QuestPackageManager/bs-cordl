#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pose)
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Pose;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Pose);
// Type: UnityEngine::Pose
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10057))
// CS Name: ::UnityEngine::Pose
struct CORDL_TYPE Pose {
public:
  // Declarations
  /// @brief Field k_Identity, offset 0xffffffff, size 0x1c
  static __declspec(property(get = getStaticF_k_Identity, put = setStaticF_k_Identity))::UnityEngine::Pose k_Identity;

  __declspec(property(get = get_forward))::UnityEngine::Vector3 forward;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Pose>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Pose>*();

  static inline void setStaticF_k_Identity(::UnityEngine::Pose value);

  static inline ::UnityEngine::Pose getStaticF_k_Identity();

  /// @brief Method .ctor addr 0x2ca1c7c size 0x14 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ToString addr 0x2ca1c90 size 0xf4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetTransformedBy addr 0x2ca1d84 size 0xe4 virtual false final false
  inline ::UnityEngine::Pose GetTransformedBy(::UnityEngine::Pose lhs);

  /// @brief Method get_forward addr 0x2ca1e68 size 0x70 virtual false final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_identity addr 0x2ca1ed8 size 0x68 virtual false final false
  static inline ::UnityEngine::Pose get_identity();

  /// @brief Method Equals addr 0x2ca1f40 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2ca1fd0 size 0x84 virtual true final true
  inline bool Equals(::UnityEngine::Pose other);

  /// @brief Method GetHashCode addr 0x2ca2054 size 0xac virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }]
  constexpr Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pose();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Pose, 0x1c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
