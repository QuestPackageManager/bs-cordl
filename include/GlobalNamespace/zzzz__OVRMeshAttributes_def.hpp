#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRMeshAttributes)
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshAttributes);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshAttributes
struct CORDL_TYPE OVRMeshAttributes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshAttributes();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "normals", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "texcoords", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors", ty:
  // "::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>", modifiers: "", def_value: None }, CppParam { name: "boneWeights", ty:
  // "::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>", modifiers: "", def_value: None }]
  constexpr OVRMeshAttributes(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals,
                              ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> texcoords,
                              ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> boneWeights) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field normals, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  /// @brief Field tangents, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  /// @brief Field texcoords, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> texcoords;

  /// @brief Field colors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors;

  /// @brief Field boneWeights, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> boneWeights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, normals) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, tangents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, texcoords) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshAttributes, boneWeights) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshAttributes, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshAttributes, "", "OVRMeshAttributes");
