#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultsTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsTableCell)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsTableCell);
// Dependencies TableCellWithSeparator
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResultsTableCell
class CORDL_TYPE ResultsTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
  // Declarations
  /// @brief Field _border, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__border, put = __cordl_internal_set__border)) ::UnityW<::UnityEngine::GameObject> _border;

  /// @brief Field _nameText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _orderText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__orderText, put = __cordl_internal_set__orderText)) ::UnityW<::TMPro::TextMeshProUGUI> _orderText;

  /// @brief Field _rankText, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText)) ::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _scoreText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  static inline ::GlobalNamespace::ResultsTableCell* New_ctor();

  /// @brief Method SetData, addr 0x3b05f00, size 0x388, virtual false, abstract: false, final false
  inline void SetData(int32_t order, ::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__border() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__border();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__orderText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__orderText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr void __cordl_internal_set__border(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__orderText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b06288, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsTableCell(ResultsTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsTableCell(ResultsTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5002 };

  /// @brief Field _border, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____border;

  /// @brief Field _orderText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____orderText;

  /// @brief Field _nameText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _scoreText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _rankText, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____border) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____orderText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____nameText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____scoreText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____rankText) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsTableCell, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableCell*, "", "ResultsTableCell");
