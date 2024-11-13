#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
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
// Type: UnityEngine.TextCore.Text::MeshInfo
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::MeshInfo
struct CORDL_TYPE MeshInfo {
public:
  // Declarations
  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor)) ::UnityEngine::Color32 k_DefaultColor;

  /// @brief Field k_DefaultNormal, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_k_DefaultNormal, put = setStaticF_k_DefaultNormal)) ::UnityEngine::Vector3 k_DefaultNormal;

  /// @brief Field k_DefaultTangent, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultTangent, put = setStaticF_k_DefaultTangent)) ::UnityEngine::Vector4 k_DefaultTangent;

  /// @brief Method Clear, addr 0x48c8aa8, size 0x2c, virtual false, abstract: false, final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices, addr 0x48c8ad4, size 0x3c, virtual false, abstract: false, final false
  inline void ClearUnusedVertices();

  /// @brief Method ResizeMeshInfo, addr 0x48c88b0, size 0x1f8, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size);

  /// @brief Method SortGeometry, addr 0x48c8b10, size 0xb4, virtual false, abstract: false, final false
  inline void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder order);

  /// @brief Method SwapVertexData, addr 0x48c8bc4, size 0x58c, virtual false, abstract: false, final false
  inline void SwapVertexData(int32_t src, int32_t dst);

  /// @brief Method .ctor, addr 0x48c8494, size 0x41c, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  static inline ::UnityEngine::Color32 getStaticF_k_DefaultColor();

  static inline ::UnityEngine::Vector3 getStaticF_k_DefaultNormal();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultTangent();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_DefaultNormal(::UnityEngine::Vector3 value);

  static inline void setStaticF_k_DefaultTangent(::UnityEngine::Vector4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfo();

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "normals", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty:
  // "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "glyphRenderMode", ty:
  // "::UnityEngine::TextCore::LowLevel::GlyphRenderMode", modifiers: "", def_value: None }]
  constexpr MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals,
                     ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs0,
                     ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32,
                     ::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityW<::UnityEngine::Material> material, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) noexcept;

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field normals, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  /// @brief Field tangents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  /// @brief Field uvs0, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs0;

  /// @brief Field uvs2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2;

  /// @brief Field colors32, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  /// @brief Field triangles, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field glyphRenderMode, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15213 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MeshInfo, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, normals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, tangents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, colors32) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, triangles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, glyphRenderMode) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
