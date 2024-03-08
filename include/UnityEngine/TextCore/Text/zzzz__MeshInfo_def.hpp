#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
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
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfo);
// Type: UnityEngine.TextCore.Text::MeshInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::MeshInfo
struct CORDL_TYPE MeshInfo {
public:
  // Declarations
  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor))::UnityEngine::Color32 k_DefaultColor;

  /// @brief Method Clear, addr 0x2eaebc0, size 0x2c, virtual false, abstract: false, final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices, addr 0x2eb2470, size 0x3c, virtual false, abstract: false, final false
  inline void ClearUnusedVertices();

  /// @brief Method ResizeMeshInfo, addr 0x2eb2288, size 0x1e8, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size);

  /// @brief Method SortGeometry, addr 0x2eb24ac, size 0x7c, virtual false, abstract: false, final false
  inline void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder order);

  /// @brief Method SwapVertexData, addr 0x2eb2528, size 0x58c, virtual false, abstract: false, final false
  inline void SwapVertexData(int32_t src, int32_t dst);

  /// @brief Method .ctor, addr 0x2eb1f34, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  static inline ::UnityEngine::Color32 getStaticF_k_DefaultColor();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color32 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfo();

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty:
  // "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }]
  constexpr MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0,
                     ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32,
                     ::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityW<::UnityEngine::Material> material) noexcept;

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field uvs0, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0;

  /// @brief Field uvs2, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2;

  /// @brief Field colors32, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  /// @brief Field triangles, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MeshInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, uvs2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, colors32) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, triangles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, material) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
