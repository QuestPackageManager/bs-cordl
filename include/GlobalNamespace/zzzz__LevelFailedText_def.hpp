#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFailedText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelFailedText)
namespace BGLib::Polyglot {
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFailedText
class CORDL_TYPE LevelFailedText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _localizedText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedText, put = __cordl_internal_set__localizedText)) ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> _localizedText;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text> _text;

  static inline ::GlobalNamespace::LevelFailedText* New_ctor();

  /// @brief Method OverrideText, addr 0x576fc64, size 0x4c, virtual false, abstract: false, final false
  inline void OverrideText(::StringW text);

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> const& __cordl_internal_get__localizedText() const;

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro>& __cordl_internal_get__localizedText();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__localizedText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value);

  /// @brief Method .ctor, addr 0x576fcb0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFailedText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFailedText(LevelFailedText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFailedText(LevelFailedText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5791 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____text;

  /// @brief Field _localizedText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> ____localizedText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFailedText, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedText, ____localizedText) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedText, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedText*, "", "LevelFailedText");
