#pragma once
// IWYU pragma private; include "TMPro/TMP_Glyph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_TextElement_Legacy_def.hpp"
CORDL_MODULE_EXPORT(TMP_Glyph)
// Forward declare root types
namespace TMPro {
class TMP_Glyph;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Glyph);
// Dependencies TMPro.TMP_TextElement_Legacy
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Glyph
class CORDL_TYPE TMP_Glyph : public ::TMPro::TMP_TextElement_Legacy {
public:
  // Declarations
  /// @brief Method Clone, addr 0x67a44f4, size 0x70, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Glyph* Clone(::TMPro::TMP_Glyph* source);

  static inline ::TMPro::TMP_Glyph* New_ctor();

  /// @brief Method .ctor, addr 0x67a4564, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Glyph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Glyph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Glyph(TMP_Glyph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Glyph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Glyph(TMP_Glyph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Glyph, 0x38>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Glyph);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Glyph*, "TMPro", "TMP_Glyph");
