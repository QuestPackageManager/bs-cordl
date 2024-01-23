#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelFailedText)
namespace Polyglot {
class LocalizedTextMeshPro;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedText);
// Type: ::LevelFailedText
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4864))
// CS Name: ::LevelFailedText*
class CORDL_TYPE LevelFailedText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TMP_Text> _text;

  /// @brief Field _localizedText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedText, put = __cordl_internal_set__localizedText))::UnityW<::Polyglot::LocalizedTextMeshPro> _localizedText;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value);

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshPro>& __cordl_internal_get__localizedText();

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshPro> const& __cordl_internal_get__localizedText() const;

  constexpr void __cordl_internal_set__localizedText(::UnityW<::Polyglot::LocalizedTextMeshPro> value);

  /// @brief Method OverrideText, addr 0x239a1f4, size 0x4c, virtual false, abstract: false, final false
  inline void OverrideText(::StringW text);

  static inline ::GlobalNamespace::LevelFailedText* New_ctor();

  /// @brief Method .ctor, addr 0x239a240, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFailedText(LevelFailedText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFailedText(LevelFailedText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFailedText();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____text;

  /// @brief Field _localizedText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Polyglot::LocalizedTextMeshPro> ____localizedText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedText, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedText, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedText, ____localizedText) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedText*, "", "LevelFailedText");
