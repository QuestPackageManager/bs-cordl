#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Character)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore {
class Glyph;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class Character;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::Character);
// Type: UnityEngine.TextCore.Text::Character
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::Character*
class CORDL_TYPE Character : public ::UnityEngine::TextCore::Text::TextElement {
public:
  // Declarations
  static inline ::UnityEngine::TextCore::Text::Character* New_ctor();

  static inline ::UnityEngine::TextCore::Text::Character* New_ctor(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph);

  static inline ::UnityEngine::TextCore::Text::Character* New_ctor(uint32_t unicode, uint32_t glyphIndex);

  /// @brief Method .ctor, addr 0x3290cf8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x328717c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph);

  /// @brief Method .ctor, addr 0x328a648, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(uint32_t unicode, uint32_t glyphIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Character();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Character(Character&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Character", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Character(Character const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::Character, 0x30>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::Character);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::Character*, "UnityEngine.TextCore.Text", "Character");
