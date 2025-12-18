#pragma once
// IWYU pragma private; include "GlobalNamespace/SetApplicationVersionText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetApplicationVersionText)
namespace BeatSaber::Init {
class GameVersionProvider;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetApplicationVersionText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetApplicationVersionText);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetApplicationVersionText
class CORDL_TYPE SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buildIdText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buildIdText, put = __cordl_internal_set__buildIdText)) ::UnityW<::TMPro::TextMeshPro> _buildIdText;

  /// @brief Field _footSprite, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__footSprite, put = __cordl_internal_set__footSprite)) ::UnityW<::UnityEngine::SpriteRenderer> _footSprite;

  /// @brief Field _gameVersionProvider, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__gameVersionProvider, put = __cordl_internal_set__gameVersionProvider)) ::BeatSaber::Init::GameVersionProvider* _gameVersionProvider;

  /// @brief Field _labelText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__labelText, put = __cordl_internal_set__labelText)) ::UnityW<::TMPro::TextMeshPro> _labelText;

  /// @brief Field _nonRCBuildColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__nonRCBuildColor, put = __cordl_internal_set__nonRCBuildColor)) ::UnityEngine::Color _nonRCBuildColor;

  /// @brief Field _platformIdText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformIdText, put = __cordl_internal_set__platformIdText)) ::UnityW<::TMPro::TextMeshPro> _platformIdText;

  /// @brief Field _rcBuildColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__rcBuildColor, put = __cordl_internal_set__rcBuildColor)) ::UnityEngine::Color _rcBuildColor;

  /// @brief Field _versionText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__versionText, put = __cordl_internal_set__versionText)) ::UnityW<::TMPro::TextMeshPro> _versionText;

  static inline ::GlobalNamespace::SetApplicationVersionText* New_ctor();

  /// @brief Method SetText, addr 0x57ff350, size 0x300, virtual false, abstract: false, final false
  inline void SetText(::BeatSaber::Init::GameVersion* gameVersion);

  /// @brief Method Start, addr 0x57ff23c, size 0x114, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleVersionColor, addr 0x57ff650, size 0x94, virtual false, abstract: false, final false
  inline void ToggleVersionColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__buildIdText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__buildIdText();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__footSprite() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__footSprite();

  constexpr ::BeatSaber::Init::GameVersionProvider* const& __cordl_internal_get__gameVersionProvider() const;

  constexpr ::BeatSaber::Init::GameVersionProvider*& __cordl_internal_get__gameVersionProvider();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__labelText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__labelText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__nonRCBuildColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__nonRCBuildColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__platformIdText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__platformIdText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__rcBuildColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__rcBuildColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__versionText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__versionText();

  constexpr void __cordl_internal_set__buildIdText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__footSprite(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value);

  constexpr void __cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__nonRCBuildColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__platformIdText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__rcBuildColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__versionText(::UnityW<::TMPro::TextMeshPro> value);

  /// @brief Method .ctor, addr 0x57ff6e4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetApplicationVersionText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetApplicationVersionText(SetApplicationVersionText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetApplicationVersionText(SetApplicationVersionText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6006 };

  /// @brief Field _versionText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____versionText;

  /// @brief Field _labelText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____labelText;

  /// @brief Field _buildIdText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____buildIdText;

  /// @brief Field _platformIdText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____platformIdText;

  /// @brief Field _footSprite, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____footSprite;

  /// @brief Field _rcBuildColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____rcBuildColor;

  /// @brief Field _nonRCBuildColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____nonRCBuildColor;

  /// @brief Field _gameVersionProvider, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersionProvider* ____gameVersionProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____versionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____labelText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____buildIdText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____platformIdText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____footSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____rcBuildColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____nonRCBuildColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____gameVersionProvider) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetApplicationVersionText, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
