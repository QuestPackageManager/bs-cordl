#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServersFilterText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameServersFilterText)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersFilterText);
// Type: ::GameServersFilterText
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServersFilterText*
class CORDL_TYPE GameServersFilterText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _songPackMasksModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _stringBuilder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::HMUI::CurvedTextMeshPro> _text;

  static inline ::GlobalNamespace::GameServersFilterText* New_ctor();

  /// @brief Method Setup, addr 0x2696244, size 0x214, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool visible);

  /// @brief Method Setup, addr 0x2695fe0, size 0x264, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::GameServersFilter* filter, bool visible);

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__text(::UnityW<::HMUI::CurvedTextMeshPro> value);

  /// @brief Method .ctor, addr 0x2696458, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilterText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilterText(GameServersFilterText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilterText(GameServersFilterText const&) = delete;

  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____text;

  /// @brief Field _songPackMasksModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _stringBuilder, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilterText, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____songPackMasksModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____stringBuilder) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilterText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilterText*, "", "GameServersFilterText");
