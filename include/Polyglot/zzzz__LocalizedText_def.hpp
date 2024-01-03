#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedText)
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UI {
class Text;
}
namespace Polyglot {
struct LanguageDirection;
}
// Forward declare root types
namespace Polyglot {
class LocalizedText;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizedText);
// Type: Polyglot::LocalizedText
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15565)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15565), inst: 2606 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13128))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15564)) CS Name: ::Polyglot::LocalizedText*
class CORDL_TYPE LocalizedText : public ::Polyglot::LocalizedTextComponent_1<::UnityEngine::UI::Text*> {
public:
  // Declarations
  /// @brief Method SetText, addr 0x28057fc, size 0x134, virtual true, abstract: false, final false
  inline void SetText(::UnityEngine::UI::Text* text, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x2805930, size 0xe4, virtual true, abstract: false, final false
  inline void UpdateAlignment(::UnityEngine::UI::Text* text, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsOppositeDirection, addr 0x2805a14, size 0x58, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::UnityEngine::TextAnchor alignment, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsAlignmentRight, addr 0x2805a6c, size 0x28, virtual false, abstract: false, final false
  inline bool IsAlignmentRight(::UnityEngine::TextAnchor alignment);

  /// @brief Method IsAlignmentLeft, addr 0x2805a94, size 0x28, virtual false, abstract: false, final false
  inline bool IsAlignmentLeft(::UnityEngine::TextAnchor alignment);

  static inline ::Polyglot::LocalizedText* New_ctor();

  /// @brief Method .ctor, addr 0x2805abc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedText(LocalizedText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedText(LocalizedText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedText();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizedText, 0x38>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizedText);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedText*, "Polyglot", "LocalizedText");
