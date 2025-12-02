#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexDataLayout_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
namespace UnityEngine::TextCore::Text {
struct TextCoreVertex;
}
namespace UnityEngine::TextCore::Text {
struct VertexDataLayout;
}
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
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
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfo);
// Dependencies UnityEngine.Color32, UnityEngine.TextCore.LowLevel.GlyphRenderMode, UnityEngine.TextCore.Text.VertexDataLayout, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.MeshInfo
struct CORDL_TYPE MeshInfo {
public:
  // Declarations
  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor)) ::UnityEngine::Color32 k_DefaultColor;

  /// @brief Field k_DefaultNormal, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_k_DefaultNormal, put = setStaticF_k_DefaultNormal)) ::UnityEngine::Vector3 k_DefaultNormal;

  /// @brief Field k_DefaultTangent, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultTangent, put = setStaticF_k_DefaultTangent)) ::UnityEngine::Vector4 k_DefaultTangent;

  /// @brief Method Clear, addr 0x6994cd4, size 0x6c, virtual false, abstract: false, final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices, addr 0x6994d40, size 0x84, virtual false, abstract: false, final false
  inline void ClearUnusedVertices();

  /// @brief Method ResizeMeshInfo, addr 0x6994a90, size 0x244, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size, bool isIMGUI);

  /// @brief Method SortGeometry, addr 0x6994dc4, size 0xb8, virtual false, abstract: false, final false
  inline void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder order);

  /// @brief Method SwapVertexData, addr 0x6994e7c, size 0x72c, virtual false, abstract: false, final false
  inline void SwapVertexData(int32_t src, int32_t dst);

  /// @brief Method .ctor, addr 0x69945e4, size 0x4ac, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::UnityEngine::TextCore::Text::VertexDataLayout layout, bool isIMGUI);

  static inline ::UnityEngine::Color32 getStaticF_k_DefaultColor();

  static inline ::UnityEngine::Vector3 getStaticF_k_DefaultNormal();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultTangent();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_DefaultNormal(::UnityEngine::Vector3 value);

  static inline void setStaticF_k_DefaultTangent(::UnityEngine::Vector4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfo();

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexData", ty:
  // "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex,::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*>", modifiers: "", def_value: None }, CppParam { name: "material", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "",
  // def_value: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "vertexBufferSize", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "uvs0", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty:
  // "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "vertexDataLayout", ty: "::UnityEngine::TextCore::Text::VertexDataLayout", modifiers: "", def_value: None }, CppParam { name: "applySDF", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "glyphRenderMode", ty: "::UnityEngine::TextCore::LowLevel::GlyphRenderMode", modifiers: "", def_value: None }]
  constexpr MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex, ::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*> vertexData,
                     ::UnityW<::UnityEngine::Material> material, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices,
                     ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents, int32_t vertexBufferSize,
                     ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs0, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2,
                     ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32, ::ArrayW<int32_t, ::Array<int32_t>*> triangles,
                     ::UnityEngine::TextCore::Text::VertexDataLayout vertexDataLayout, bool applySDF, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertexData, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex, ::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*> vertexData;

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field normals, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  /// @brief Field tangents, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  /// @brief Field vertexBufferSize, offset: 0x30, size: 0x4, def value: None
  int32_t vertexBufferSize;

  /// @brief Field uvs0, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs0;

  /// @brief Field uvs2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2;

  /// @brief Field colors32, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  /// @brief Field triangles, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field vertexDataLayout, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::VertexDataLayout vertexDataLayout;

  /// @brief Field applySDF, offset: 0x5c, size: 0x1, def value: None
  bool applySDF;

  /// @brief Field glyphRenderMode, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, tangents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, colors32) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, triangles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexDataLayout) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, applySDF) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, glyphRenderMode) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MeshInfo, 0x68>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
