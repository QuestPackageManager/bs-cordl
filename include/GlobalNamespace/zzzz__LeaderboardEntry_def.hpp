#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardEntry;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardEntry);
// Type: ::LeaderboardEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardEntry*
class CORDL_TYPE LeaderboardEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  /// @brief Field _playerNameText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText))::UnityW<::TMPro::TextMeshProUGUI> _playerNameText;

  /// @brief Field _rankText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText))::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _scoreText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText))::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  static inline ::GlobalNamespace::LeaderboardEntry* New_ctor();

  /// @brief Method SetScore, addr 0x265d79c, size 0x190, virtual false, abstract: false, final false
  inline void SetScore(int32_t score, ::StringW playerName, int32_t rank, bool highlighted, bool showSeparator);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x265d92c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntry(LeaderboardEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntry(LeaderboardEntry const&) = delete;

  /// @brief Field _scoreText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _playerNameText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerNameText;

  /// @brief Field _rankText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  /// @brief Field _color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardEntry, ____scoreText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardEntry, ____playerNameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardEntry, ____rankText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardEntry, ____color) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardEntry*, "", "LeaderboardEntry");
