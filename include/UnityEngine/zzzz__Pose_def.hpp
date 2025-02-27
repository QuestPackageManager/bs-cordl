#pragma once
// IWYU pragma private; include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pose)
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies System.IEquatable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Pose
struct CORDL_TYPE Pose {
public:
  // Declarations
  __declspec(property(get = get_forward)) ::UnityEngine::Vector3 forward;

  /// @brief Field k_Identity, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_k_Identity, put = setStaticF_k_Identity)) ::UnityEngine::Pose k_Identity;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Pose>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Pose>*();

  /// @brief Method Equals, addr 0x48c2308, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48c23c8, size 0xb0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Pose other);

  /// @brief Method GetHashCode, addr 0x48c2478, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTransformedBy, addr 0x48c214c, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetTransformedBy(::UnityEngine::Pose lhs);

  /// @brief Method ToString, addr 0x48c2048, size 0x104, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x48c2034, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::Pose getStaticF_k_Identity();

  /// @brief Method get_forward, addr 0x48c2230, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_identity, addr 0x48c22a0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose get_identity();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Pose>"
  constexpr ::System::IEquatable_1<::UnityEngine::Pose>* i___System__IEquatable_1___UnityEngine__Pose_();

  static inline void setStaticF_k_Identity(::UnityEngine::Pose value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pose();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }]
  constexpr Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Pose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Pose, rotation) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Pose, 0x1c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
