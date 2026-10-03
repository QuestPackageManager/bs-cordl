#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
namespace UnityEngine::TextCore::Text {
struct TextCoreVertex;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
// Dependencies UnityEngine.TextCore.LowLevel.GlyphRenderMode, UnityEngine.TextCore.Text.TextCoreVertex
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.MeshInfo
struct CORDL_TYPE MeshInfo {
public:
  // Declarations
  /// @brief Method Clear, addr 0x702fd40, size 0x40, virtual false, abstract: false, final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices, addr 0x702fd80, size 0x48, virtual false, abstract: false, final false
  inline void ClearUnusedVertices();

  /// @brief Method ResizeMeshInfo, addr 0x702fcc8, size 0x78, virtual false, abstract: false, final false
  inline void ResizeMeshInfo(int32_t size, bool isIMGUI);

  /// @brief Method .ctor, addr 0x702fc2c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, bool isIMGUI);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfo();

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexData", ty:
  // "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "vertexBufferSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "applySDF", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "glyphRenderMode", ty: "::UnityEngine::TextCore::LowLevel::GlyphRenderMode", modifiers: "", def_value: None, comment: None }]
  constexpr MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex> vertexData, ::UnityW<::UnityEngine::Material> material, int32_t vertexBufferSize, bool applySDF,
                     ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17813 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertexData, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex> vertexData;

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// [Ignore]
  /// @brief Field vertexBufferSize, offset: 0x18, size: 0x4, def value: None
  int32_t vertexBufferSize;

  /// [Ignore]
  /// @brief Field applySDF, offset: 0x1c, size: 0x1, def value: None
  bool applySDF;

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Field glyphRenderMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode glyphRenderMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, vertexBufferSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, applySDF) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfo, glyphRenderMode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::MeshInfo) == 0x28, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
