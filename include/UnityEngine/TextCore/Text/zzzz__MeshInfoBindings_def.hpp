#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\MeshInfoBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfoBindings)
namespace UnityEngine::TextCore::Text {
struct TextCoreVertex;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfoBindings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfoBindings);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::MeshInfoBindings, "UnityEngine.TextCore.Text", "MeshInfoBindings");
// Dependencies UnityEngine.TextCore.Text.TextCoreVertex
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.MeshInfoBindings
struct CORDL_TYPE MeshInfoBindings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfoBindings();

  // Ctor Parameters [CppParam { name: "vertexData", ty: "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex>", modifiers: "", def_value: None }, CppParam { name: "material", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshInfoBindings(::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex> vertexData, ::UnityW<::UnityEngine::Material> material, int32_t vertexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field vertexData, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex> vertexData;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field vertexCount, offset: 0x10, size: 0x4, def value: None
  int32_t vertexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfoBindings, vertexData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfoBindings, material) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MeshInfoBindings, vertexCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::MeshInfoBindings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
