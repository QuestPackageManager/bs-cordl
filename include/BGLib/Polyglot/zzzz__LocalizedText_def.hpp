#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedText)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizedText;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizedText);
// Dependencies BGLib.Polyglot.LocalizedTextComponent`1<T>
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizedText
class CORDL_TYPE LocalizedText : public ::BGLib::Polyglot::LocalizedTextComponent_1<::UnityW<::UnityEngine::UI::Text>> {
public:
  // Declarations
  /// @brief Method IsAlignmentLeft, addr 0x22b1a58, size 0x20, virtual false, abstract: false, final false
  static inline bool IsAlignmentLeft(::UnityEngine::TextAnchor alignment);

  /// @brief Method IsAlignmentRight, addr 0x22b1a34, size 0x24, virtual false, abstract: false, final false
  static inline bool IsAlignmentRight(::UnityEngine::TextAnchor alignment);

  /// @brief Method IsOppositeDirection, addr 0x22b19f0, size 0x44, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::UnityEngine::TextAnchor alignment, ::BGLib::Polyglot::LanguageDirection direction);

  static inline ::BGLib::Polyglot::LocalizedText* New_ctor();

  /// @brief Method SetText, addr 0x22b1810, size 0x11c, virtual true, abstract: false, final false
  inline void SetText(::UnityEngine::UI::Text* text, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x22b192c, size 0xc4, virtual true, abstract: false, final false
  inline void UpdateAlignment(::UnityEngine::UI::Text* text, ::BGLib::Polyglot::LanguageDirection direction);

  /// @brief Method .ctor, addr 0x22b1a78, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedText(LocalizedText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedText(LocalizedText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18065 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizedText, 0x40>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizedText);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizedText*, "BGLib.Polyglot", "LocalizedText");
