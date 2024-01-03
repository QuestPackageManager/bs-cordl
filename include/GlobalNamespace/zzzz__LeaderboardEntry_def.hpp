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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5533))
// CS Name: ::LeaderboardEntry*
class CORDL_TYPE LeaderboardEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _scoreText, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _playerNameText, offset 0x20, size 0x8
  __declspec(property(get = __get__playerNameText, put = __set__playerNameText))::TMPro::TextMeshProUGUI* _playerNameText;

  /// @brief Field _rankText, offset 0x28, size 0x8
  __declspec(property(get = __get__rankText, put = __set__rankText))::TMPro::TextMeshProUGUI* _rankText;

  /// @brief Field _color, offset 0x30, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__playerNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playerNameText() const;

  constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__rankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__rankText() const;

  constexpr void __set__rankText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  /// @brief Method SetScore, addr 0x229e66c, size 0x190, virtual false, abstract: false, final false
  inline void SetScore(int32_t score, ::StringW playerName, int32_t rank, bool highlighted, bool showSeparator);

  static inline ::GlobalNamespace::LeaderboardEntry* New_ctor();

  /// @brief Method .ctor, addr 0x229e7fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntry(LeaderboardEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntry(LeaderboardEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntry();

public:
  /// @brief Field _scoreText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _playerNameText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playerNameText;

  /// @brief Field _rankText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____rankText;

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
