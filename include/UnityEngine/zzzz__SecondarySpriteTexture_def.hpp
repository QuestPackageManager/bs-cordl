#pragma once
// IWYU pragma private; include "UnityEngine/SecondarySpriteTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type: UnityEngine::SecondarySpriteTexture
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::SecondarySpriteTexture
struct CORDL_TYPE SecondarySpriteTexture {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecondarySpriteTexture();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None
  // }]
  constexpr SecondarySpriteTexture(::StringW name, ::UnityW<::UnityEngine::Texture2D> texture) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SecondarySpriteTexture, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, texture) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SecondarySpriteTexture, "UnityEngine", "SecondarySpriteTexture");
