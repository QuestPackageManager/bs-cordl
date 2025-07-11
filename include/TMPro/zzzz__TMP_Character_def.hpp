#pragma once
// IWYU pragma private; include "TMPro/TMP_Character.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Character)
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine::TextCore {
class Glyph;
}
// Forward declare root types
namespace TMPro {
class TMP_Character;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Character);
// Dependencies TMPro.TMP_TextElement
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Character
class CORDL_TYPE TMP_Character : public ::TMPro::TMP_TextElement {
public:
  // Declarations
  static inline ::TMPro::TMP_Character* New_ctor();

  static inline ::TMPro::TMP_Character* New_ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph);

  static inline ::TMPro::TMP_Character* New_ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph);

  static inline ::TMPro::TMP_Character* New_ctor(uint32_t unicode, uint32_t glyphIndex);

  /// @brief Method .ctor, addr 0x47c5c30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x47c5cac, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph);

  /// @brief Method .ctor, addr 0x47c5c58, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph);

  /// @brief Method .ctor, addr 0x47c5d0c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(uint32_t unicode, uint32_t glyphIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Character();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Character", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Character(TMP_Character&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Character", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Character(TMP_Character const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Character, 0x30>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Character);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Character*, "TMPro", "TMP_Character");
