#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedHoverHint)
namespace HMUI {
class HoverHint;
}
namespace Polyglot {
struct LanguageDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedHoverHint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedHoverHint);
// Type: ::LocalizedHoverHint
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13532)), TypeDefinitionIndex(TypeDefinitionIndex(15565)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15565), inst:
// 4462 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5534)) CS Name: ::LocalizedHoverHint*
class CORDL_TYPE LocalizedHoverHint : public ::Polyglot::LocalizedTextComponent_1<::UnityW<::HMUI::HoverHint>> {
public:
  // Declarations
  /// @brief Method SetText, addr 0x229e810, size 0x18, virtual true, abstract: false, final false
  inline void SetText(::HMUI::HoverHint* hoverHint, ::StringW value);

  /// @brief Method UpdateAlignment, addr 0x229e828, size 0x4, virtual true, abstract: false, final false
  inline void UpdateAlignment(::HMUI::HoverHint* hoverHint, ::Polyglot::LanguageDirection direction);

  static inline ::GlobalNamespace::LocalizedHoverHint* New_ctor();

  /// @brief Method .ctor, addr 0x229e82c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedHoverHint(LocalizedHoverHint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedHoverHint(LocalizedHoverHint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedHoverHint();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedHoverHint, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedHoverHint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
