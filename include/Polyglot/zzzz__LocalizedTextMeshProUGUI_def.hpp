#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMeshProUGUI)
namespace Polyglot {
struct LanguageDirection;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizedTextMeshProUGUI);
// Type: Polyglot::LocalizedTextMeshProUGUI
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15565), inst: 4297 }), TypeDefinitionIndex(TypeDefinitionIndex(12310)),
// TypeDefinitionIndex(TypeDefinitionIndex(15565))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15568)) CS Name: ::Polyglot::LocalizedTextMeshProUGUI*
class CORDL_TYPE LocalizedTextMeshProUGUI : public ::Polyglot::LocalizedTextComponent_1<::TMPro::TextMeshProUGUI*> {
public:
  // Declarations
  /// @brief Method SetText, addr 0x2805ed0, size 0x2c, virtual true, abstract: false, final false
  inline void SetText(::TMPro::TextMeshProUGUI* text, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x2805efc, size 0xf4, virtual true, abstract: false, final false
  inline void UpdateAlignment(::TMPro::TextMeshProUGUI* text, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsOppositeDirection, addr 0x2805ff0, size 0x58, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsAlignmentRight, addr 0x2806048, size 0x28, virtual false, abstract: false, final false
  inline bool IsAlignmentRight(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsAlignmentLeft, addr 0x2806070, size 0x28, virtual false, abstract: false, final false
  inline bool IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment);

  static inline ::Polyglot::LocalizedTextMeshProUGUI* New_ctor();

  /// @brief Method .ctor, addr 0x2806098, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMeshProUGUI();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizedTextMeshProUGUI, 0x38>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizedTextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedTextMeshProUGUI*, "Polyglot", "LocalizedTextMeshProUGUI");
