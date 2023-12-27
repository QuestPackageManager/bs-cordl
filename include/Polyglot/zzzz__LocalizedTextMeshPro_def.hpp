#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMeshPro)
namespace TMPro {
class TextMeshPro;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace Polyglot {
struct LanguageDirection;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizedTextMeshPro);
// Type: Polyglot::LocalizedTextMeshPro
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15565), inst: 4463 }), TypeDefinitionIndex(TypeDefinitionIndex(12307)),
// TypeDefinitionIndex(TypeDefinitionIndex(15565))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15567)) CS Name: ::Polyglot::LocalizedTextMeshPro*
class CORDL_TYPE LocalizedTextMeshPro : public ::Polyglot::LocalizedTextComponent_1<::TMPro::TextMeshPro*> {
public:
  // Declarations
  /// @brief Method SetText addr 0x2805cc0 size 0x2c virtual true final false
  inline void SetText(::TMPro::TextMeshPro* text, ::StringW value);

  /// @brief Method UpdateAlignment addr 0x2805cec size 0xf4 virtual true final false
  inline void UpdateAlignment(::TMPro::TextMeshPro* text, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsOppositeDirection addr 0x2805de0 size 0x58 virtual false final false
  inline bool IsOppositeDirection(::TMPro::TextAlignmentOptions alignment, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsAlignmentRight addr 0x2805e38 size 0x28 virtual false final false
  inline bool IsAlignmentRight(::TMPro::TextAlignmentOptions alignment);

  /// @brief Method IsAlignmentLeft addr 0x2805e60 size 0x28 virtual false final false
  inline bool IsAlignmentLeft(::TMPro::TextAlignmentOptions alignment);

  static inline ::Polyglot::LocalizedTextMeshPro* New_ctor();

  /// @brief Method .ctor addr 0x2805e88 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMeshPro(LocalizedTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMeshPro(LocalizedTextMeshPro const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMeshPro();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizedTextMeshPro, 0x38>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedTextMeshPro*, "Polyglot", "LocalizedTextMeshPro");
