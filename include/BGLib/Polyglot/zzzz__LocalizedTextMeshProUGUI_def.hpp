#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMeshProUGUI)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizedTextMeshProUGUI;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizedTextMeshProUGUI);
// Type: BGLib.Polyglot::LocalizedTextMeshProUGUI
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::BGLib.Polyglot::LocalizedTextMeshProUGUI*
class CORDL_TYPE LocalizedTextMeshProUGUI : public ::BGLib::Polyglot::LocalizedTextComponent_1<::UnityW<::TMPro::TextMeshProUGUI>> {
public:
  // Declarations
  /// @brief Method IsAlignmentLeft, addr 0x10809a4, size 0x28, virtual false, abstract: false, final false
  static inline bool IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsAlignmentRight, addr 0x108097c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsAlignmentRight(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsOppositeDirection, addr 0x1080920, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::BGLib::Polyglot::LanguageDirection direction);

  static inline ::BGLib::Polyglot::LocalizedTextMeshProUGUI* New_ctor();

  /// @brief Method SetText, addr 0x10807ec, size 0x2c, virtual true, abstract: false, final false
  inline void SetText(::TMPro::TextMeshProUGUI* text, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x1080818, size 0x108, virtual true, abstract: false, final false
  inline void UpdateAlignment(::TMPro::TextMeshProUGUI* text, ::BGLib::Polyglot::LanguageDirection direction);

  /// @brief Method .ctor, addr 0x10809cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMeshProUGUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizedTextMeshProUGUI, 0x38>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizedTextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizedTextMeshProUGUI*, "BGLib.Polyglot", "LocalizedTextMeshProUGUI");
