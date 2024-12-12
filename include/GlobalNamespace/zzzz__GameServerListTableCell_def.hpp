#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerListTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
CORDL_MODULE_EXPORT(GameServerListTableCell)
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerListTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerListTableCell);
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerListTableCell
class CORDL_TYPE GameServerListTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _difficultiesText, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultiesText, put = __cordl_internal_set__difficultiesText)) ::UnityW<::HMUI::CurvedTextMeshPro> _difficultiesText;

  /// @brief Field _musicPackText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__musicPackText, put = __cordl_internal_set__musicPackText)) ::UnityW<::HMUI::CurvedTextMeshPro> _musicPackText;

  /// @brief Field _passwordProtected, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__passwordProtected, put = __cordl_internal_set__passwordProtected)) ::UnityW<::UnityEngine::GameObject> _passwordProtected;

  /// @brief Field _playerCount, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playerCount, put = __cordl_internal_set__playerCount)) ::UnityW<::HMUI::CurvedTextMeshPro> _playerCount;

  /// @brief Field _serverName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__serverName, put = __cordl_internal_set__serverName)) ::UnityW<::HMUI::CurvedTextMeshPro> _serverName;

  /// @brief Field _songPackMasksModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  static inline ::GlobalNamespace::GameServerListTableCell* New_ctor();

  /// @brief Method SetData, addr 0x3bf8648, size 0x410, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::INetworkPlayer* player);

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__difficultiesText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__difficultiesText();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__musicPackText() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__musicPackText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__passwordProtected() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__passwordProtected();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__playerCount() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__playerCount();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__serverName() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__serverName();

  constexpr ::GlobalNamespace::SongPackMasksModel* const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr void __cordl_internal_set__difficultiesText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__musicPackText(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__passwordProtected(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__playerCount(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__serverName(::UnityW<::HMUI::CurvedTextMeshPro> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  /// @brief Method .ctor, addr 0x3bf8a58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerListTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerListTableCell(GameServerListTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerListTableCell(GameServerListTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4748 };

  /// @brief Field _serverName, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____serverName;

  /// @brief Field _difficultiesText, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____difficultiesText;

  /// @brief Field _musicPackText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____musicPackText;

  /// @brief Field _playerCount, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____playerCount;

  /// @brief Field _passwordProtected, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____passwordProtected;

  /// @brief Field _songPackMasksModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____serverName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____difficultiesText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____musicPackText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____playerCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____passwordProtected) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListTableCell, ____songPackMasksModel) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListTableCell, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListTableCell*, "", "GameServerListTableCell");
