#pragma once
// IWYU pragma private; include "TMPro/TMP_MeshInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_MeshInfo)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace TMPro {
struct VertexSortingOrder;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
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
namespace TMPro {
struct TMP_MeshInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_MeshInfo);
// Dependencies UnityEngine.Bounds, UnityEngine.Color32, UnityEngine.Vector3, UnityEngine.Vector4
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_MeshInfo
struct CORDL_TYPE TMP_MeshInfo {
public:
  // Declarations
  /// @brief Field s_DefaultBounds, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DefaultBounds, put = setStaticF_s_DefaultBounds)) ::UnityEngine::Bounds s_DefaultBounds;

  /// @brief Field s_DefaultColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DefaultColor, put = setStaticF_s_DefaultColor)) ::UnityEngine::Color32 s_DefaultColor;

  /// @brief Field s_DefaultNormal, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_s_DefaultNormal, put = setStaticF_s_DefaultNormal)) ::UnityEngine::Vector3 s_DefaultNormal;

  /// @brief Field s_DefaultTangent, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_DefaultTangent, put = setStaticF_s_DefaultTangent)) ::UnityEngine::Vector4 s_DefaultTangent;

  /// @brief Method Clear, addr 0x47fcc78, size 0xa4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x47fcd1c, size 0x138, virtual false, abstract: false, final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices, addr 0x47fce54, size 0x3c, virtual false, abstract: false, final false
  inline void ClearUnusedVertices();

  /// @brief Method ClearUnusedVertices, addr 0x47fce90, size 0x34, virtual false, abstract: false, final false
  inline void ClearUnusedVertices(int32_t startIndex);

  /// @brief Method ClearUnusedVertices, addr 0x47fcec4, size 0xc4, virtual false, abstract: false, final false
  inline void ClearUnusedVertices(int32_t startIndex, bool updateMesh);

  /// @brief Method ResizeMeshInfo, addr 0x47fbf2c, size 0x474, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size);

  /// @brief Method ResizeMeshInfo, addr 0x47fc3a0, size 0x8d8, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size, bool isVolumetric);

  /// @brief Method SortGeometry, addr 0x47fcf88, size 0xb4, virtual false, abstract: false, final false
  inline void SortGeometry(::TMPro::VertexSortingOrder order);

  /// @brief Method SortGeometry, addr 0x47fd5c8, size 0x1f8, virtual false, abstract: false, final false
  inline void SortGeometry(::System::Collections::Generic::IList_1<int32_t>* sortingOrder);

  /// @brief Method SwapVertexData, addr 0x47fd03c, size 0x58c, virtual false, abstract: false, final false
  inline void SwapVertexData(int32_t src, int32_t dst);

  /// @brief Method .ctor, addr 0x47fb2b4, size 0x4f4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, int32_t size);

  /// @brief Method .ctor, addr 0x47fb7a8, size 0x784, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, int32_t size, bool isVolumetric);

  static inline ::UnityEngine::Bounds getStaticF_s_DefaultBounds();

  static inline ::UnityEngine::Color32 getStaticF_s_DefaultColor();

  static inline ::UnityEngine::Vector3 getStaticF_s_DefaultNormal();

  static inline ::UnityEngine::Vector4 getStaticF_s_DefaultTangent();

  static inline void setStaticF_s_DefaultBounds(::UnityEngine::Bounds value);

  static inline void setStaticF_s_DefaultColor(::UnityEngine::Color32 value);

  static inline void setStaticF_s_DefaultNormal(::UnityEngine::Vector3 value);

  static inline void setStaticF_s_DefaultTangent(::UnityEngine::Vector4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MeshInfo();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "normals", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty:
  // "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }]
  constexpr TMP_MeshInfo(::UnityW<::UnityEngine::Mesh> mesh, int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices,
                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents,
                         ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2,
                         ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32, ::ArrayW<int32_t, ::Array<int32_t>*> triangles,
                         ::UnityW<::UnityEngine::Material> material) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field vertexCount, offset: 0x8, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field normals, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  /// @brief Field tangents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  /// @brief Field uvs0, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0;

  /// @brief Field uvs2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2;

  /// @brief Field colors32, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  /// @brief Field triangles, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MeshInfo, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, vertexCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, normals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, tangents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, uvs0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, uvs2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, colors32) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, triangles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MeshInfo, material) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MeshInfo, 0x50>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
