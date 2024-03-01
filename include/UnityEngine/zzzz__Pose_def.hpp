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
namespace System {
template <typename T> class IEquatable_1;
}
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
// Type: UnityEngine::Pose
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::Pose
struct CORDL_TYPE Pose {
public:
  // Declarations
  __declspec(property(get = get_forward))::UnityEngine::Vector3 forward;

  /// @brief Field k_Identity, offset 0xffffffff, size 0x1c
  static __declspec(property(get = getStaticF_k_Identity, put = setStaticF_k_Identity))::UnityEngine::Pose k_Identity;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Pose>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Pose>*();

  /// @brief Method Equals, addr 0x2d8c9d4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2d8ca64, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Pose other);

  /// @brief Method GetHashCode, addr 0x2d8cae8, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTransformedBy, addr 0x2d8c818, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetTransformedBy(::UnityEngine::Pose lhs);

  /// @brief Method ToString, addr 0x2d8c724, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2d8c710, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::Pose getStaticF_k_Identity();

  /// @brief Method get_forward, addr 0x2d8c8fc, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_identity, addr 0x2d8c96c, size 0x68, virtual false, abstract: false, final false
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

static_assert(offsetof(::UnityEngine::Pose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Pose, rotation) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
