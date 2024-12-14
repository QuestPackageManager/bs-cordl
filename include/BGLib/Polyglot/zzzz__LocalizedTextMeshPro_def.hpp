#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMeshPro)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizedTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizedTextMeshPro);
// Dependencies BGLib.Polyglot.LocalizedTextComponent`1<T>
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizedTextMeshPro
class CORDL_TYPE LocalizedTextMeshPro : public ::BGLib::Polyglot::LocalizedTextComponent_1<::UnityW<::TMPro::TextMeshPro>> {
public:
  // Declarations
  /// @brief Method IsAlignmentLeft, addr 0x22afcac, size 0x28, virtual false, abstract: false, final false
  static inline bool IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsAlignmentRight, addr 0x22afc84, size 0x28, virtual false, abstract: false, final false
  static inline bool IsAlignmentRight(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsOppositeDirection, addr 0x22afc30, size 0x54, virtual false, abstract: false, final false
  static inline bool IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::BGLib::Polyglot::LanguageDirection direction);

  static inline ::BGLib::Polyglot::LocalizedTextMeshPro* New_ctor();

  /// @brief Method SetText, addr 0x22afb30, size 0x2c, virtual true, abstract: false, final false
  inline void SetText(::TMPro::TextMeshPro* text, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x22afb5c, size 0xd4, virtual true, abstract: false, final false
  inline void UpdateAlignment(::TMPro::TextMeshPro* text, ::BGLib::Polyglot::LanguageDirection direction);

  /// @brief Method .ctor, addr 0x22afcd4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMeshPro();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMeshPro(LocalizedTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMeshPro(LocalizedTextMeshPro const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizedTextMeshPro, 0x40>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizedTextMeshPro*, "BGLib.Polyglot", "LocalizedTextMeshPro");
