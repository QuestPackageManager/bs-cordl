#pragma once
// IWYU pragma private; include "GlobalNamespace/ImmediateRankUIPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ImmediateRankUIPanel)
namespace GlobalNamespace {
class RelativeScoreAndImmediateRankCounter;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ImmediateRankUIPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImmediateRankUIPanel);
// Type: ::ImmediateRankUIPanel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImmediateRankUIPanel*
class CORDL_TYPE ImmediateRankUIPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prevImmediateRank, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevImmediateRank, put = __cordl_internal_set__prevImmediateRank))::GlobalNamespace::__RankModel__Rank _prevImmediateRank;

  /// @brief Field _prevRelativeScore, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__prevRelativeScore, put = __cordl_internal_set__prevRelativeScore)) float_t _prevRelativeScore;

  /// @brief Field _rankText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText))::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _relativeScoreAndImmediateRankCounter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeScoreAndImmediateRankCounter,
                      put = __cordl_internal_set__relativeScoreAndImmediateRankCounter))::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> _relativeScoreAndImmediateRankCounter;

  /// @brief Field _relativeScoreText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeScoreText, put = __cordl_internal_set__relativeScoreText))::UnityW<::TMPro::TextMeshProUGUI> _relativeScoreText;

  /// @brief Field _stringBuilder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Method HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange, addr 0x26f799c, size 0x4, virtual false, abstract: false, final false
  inline void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange();

  static inline ::GlobalNamespace::ImmediateRankUIPanel* New_ctor();

  /// @brief Method RefreshUI, addr 0x26f7794, size 0x16c, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method Start, addr 0x26f76d0, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __cordl_internal_get__prevImmediateRank() const;

  constexpr ::GlobalNamespace::__RankModel__Rank& __cordl_internal_get__prevImmediateRank();

  constexpr float_t const& __cordl_internal_get__prevRelativeScore() const;

  constexpr float_t& __cordl_internal_get__prevRelativeScore();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> const& __cordl_internal_get__relativeScoreAndImmediateRankCounter() const;

  constexpr ::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter>& __cordl_internal_get__relativeScoreAndImmediateRankCounter();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__relativeScoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__relativeScoreText();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr void __cordl_internal_set__prevImmediateRank(::GlobalNamespace::__RankModel__Rank value);

  constexpr void __cordl_internal_set__prevRelativeScore(float_t value);

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__relativeScoreAndImmediateRankCounter(::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> value);

  constexpr void __cordl_internal_set__relativeScoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x26f79a0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImmediateRankUIPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImmediateRankUIPanel(ImmediateRankUIPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImmediateRankUIPanel(ImmediateRankUIPanel const&) = delete;

  /// @brief Field _rankText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  /// @brief Field _relativeScoreText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____relativeScoreText;

  /// @brief Field _relativeScoreAndImmediateRankCounter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> ____relativeScoreAndImmediateRankCounter;

  /// @brief Field _stringBuilder, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field _prevRelativeScore, offset: 0x38, size: 0x4, def value: None
  float_t ____prevRelativeScore;

  /// @brief Field _prevImmediateRank, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__RankModel__Rank ____prevImmediateRank;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImmediateRankUIPanel, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____rankText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____relativeScoreText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____relativeScoreAndImmediateRankCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____stringBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____prevRelativeScore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImmediateRankUIPanel, ____prevImmediateRank) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImmediateRankUIPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImmediateRankUIPanel*, "", "ImmediateRankUIPanel");
