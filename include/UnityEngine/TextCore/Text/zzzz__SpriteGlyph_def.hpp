#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/SpriteGlyph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
CORDL_MODULE_EXPORT(SpriteGlyph)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteGlyph;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::SpriteGlyph);
// Dependencies UnityEngine.TextCore.Glyph
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.SpriteGlyph
class CORDL_TYPE SpriteGlyph : public ::UnityEngine::TextCore::Glyph {
public:
  // Declarations
  /// @brief Field sprite, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sprite, put = __cordl_internal_set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  static inline ::UnityEngine::TextCore::Text::SpriteGlyph* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_sprite();

  constexpr void __cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x4931748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteGlyph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteGlyph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteGlyph(SpriteGlyph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteGlyph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteGlyph(SpriteGlyph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15257 };

  /// @brief Field sprite, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___sprite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteGlyph, ___sprite) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::SpriteGlyph, 0x50>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteGlyph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteGlyph*, "UnityEngine.TextCore.Text", "SpriteGlyph");
