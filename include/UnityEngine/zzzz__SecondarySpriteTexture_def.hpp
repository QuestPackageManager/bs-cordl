#pragma once
// IWYU pragma private; include "UnityEngine/SecondarySpriteTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SecondarySpriteTexture)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
struct SecondarySpriteTexture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SecondarySpriteTexture);
DEFINE_IL2CPP_CLASS(::UnityEngine::SecondarySpriteTexture, "UnityEngine", "SecondarySpriteTexture");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SecondarySpriteTexture
struct CORDL_TYPE SecondarySpriteTexture {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecondarySpriteTexture();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None
  // }]
  constexpr SecondarySpriteTexture(::StringW name, ::UnityW<::UnityEngine::Texture2D> texture) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10021 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> texture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, texture) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SecondarySpriteTexture) == 0x10, "Size mismatch!");

} // namespace UnityEngine
