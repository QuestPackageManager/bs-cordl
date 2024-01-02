#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsTableCell)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IConnectedPlayer;
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
// Type: ::ResultsTableCell
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5806))
// CS Name: ::ResultsTableCell*
class CORDL_TYPE ResultsTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
  // Declarations
  /// @brief Field _border, offset 0x60, size 0x8
  __declspec(property(get = __get__border, put = __set__border))::UnityEngine::GameObject* _border;

  /// @brief Field _orderText, offset 0x68, size 0x8
  __declspec(property(get = __get__orderText, put = __set__orderText))::TMPro::TextMeshProUGUI* _orderText;

  /// @brief Field _nameText, offset 0x70, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _scoreText, offset 0x78, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _rankText, offset 0x80, size 0x8
  __declspec(property(get = __get__rankText, put = __set__rankText))::TMPro::TextMeshProUGUI* _rankText;

  constexpr ::UnityEngine::GameObject*& __get__border();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__border() const;

  constexpr void __set__border(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__orderText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__orderText() const;

  constexpr void __set__orderText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__rankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__rankText() const;

  constexpr void __set__rankText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method SetData, addr 0x22e8148, size 0x38c, virtual false, abstract: false, final false
  inline void SetData(int32_t order, ::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::ResultsTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x22e84d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsTableCell(ResultsTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsTableCell(ResultsTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsTableCell();

public:
  /// @brief Field _border, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____border;

  /// @brief Field _orderText, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____orderText;

  /// @brief Field _nameText, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _scoreText, offset: 0x78, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _rankText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____rankText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsTableCell, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____border) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____orderText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____nameText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____scoreText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableCell, ____rankText) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableCell*, "", "ResultsTableCell");
