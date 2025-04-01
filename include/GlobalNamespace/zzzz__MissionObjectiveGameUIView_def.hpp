#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveGameUIView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveGameUIView)
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveGameUIView);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveGameUIView
class CORDL_TYPE MissionObjectiveGameUIView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _clearedIcon, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedIcon, put = __cordl_internal_set__clearedIcon)) ::UnityW<::UnityEngine::Sprite> _clearedIcon;

  /// @brief Field _clearedPS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedPS, put = __cordl_internal_set__clearedPS)) ::UnityW<::UnityEngine::ParticleSystem> _clearedPS;

  /// @brief Field _conditionText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionText, put = __cordl_internal_set__conditionText)) ::UnityW<::TMPro::TextMeshProUGUI> _conditionText;

  /// @brief Field _failedIcon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__failedIcon, put = __cordl_internal_set__failedIcon)) ::UnityW<::UnityEngine::Sprite> _failedIcon;

  /// @brief Field _finalClearIconColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__finalClearIconColor, put = __cordl_internal_set__finalClearIconColor)) ::UnityEngine::Color _finalClearIconColor;

  /// @brief Field _finalFailIconColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__finalFailIconColor, put = __cordl_internal_set__finalFailIconColor)) ::UnityEngine::Color _finalFailIconColor;

  /// @brief Field _missionObjectiveChecker, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveChecker, put = __cordl_internal_set__missionObjectiveChecker)) ::UnityW<::GlobalNamespace::MissionObjectiveChecker>
      _missionObjectiveChecker;

  /// @brief Field _nameText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _nonFinalIconColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__nonFinalIconColor, put = __cordl_internal_set__nonFinalIconColor)) ::UnityEngine::Color _nonFinalIconColor;

  /// @brief Field _notClearedIcon, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__notClearedIcon, put = __cordl_internal_set__notClearedIcon)) ::UnityW<::UnityEngine::Sprite> _notClearedIcon;

  /// @brief Field _notFailedIcon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__notFailedIcon, put = __cordl_internal_set__notFailedIcon)) ::UnityW<::UnityEngine::Sprite> _notFailedIcon;

  /// @brief Field _numberOfParticles, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfParticles, put = __cordl_internal_set__numberOfParticles)) int32_t _numberOfParticles;

  /// @brief Field _resultIcon, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__resultIcon, put = __cordl_internal_set__resultIcon)) ::UnityW<::UnityEngine::UI::Image> _resultIcon;

  /// @brief Field _valueText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__valueText, put = __cordl_internal_set__valueText)) ::UnityW<::TMPro::TextMeshProUGUI> _valueText;

  /// @brief Method HandleMissionObjectiveCheckedValueDidChange, addr 0x3ba3050, size 0x4, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckedValueDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  /// @brief Method HandleMissionObjectiveStatusDidChange, addr 0x3ba304c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  static inline ::GlobalNamespace::MissionObjectiveGameUIView* New_ctor();

  /// @brief Method RefreshIcon, addr 0x3ba2ef0, size 0x104, virtual false, abstract: false, final false
  inline void RefreshIcon();

  /// @brief Method RefreshValue, addr 0x3ba2ff4, size 0x58, virtual false, abstract: false, final false
  inline void RefreshValue();

  /// @brief Method SetMissionObjectiveChecker, addr 0x3ba2c7c, size 0x274, virtual false, abstract: false, final false
  inline void SetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__clearedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__clearedIcon();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__clearedPS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__clearedPS();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__conditionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__conditionText();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__failedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__failedIcon();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__finalClearIconColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__finalClearIconColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__finalFailIconColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__finalFailIconColor();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveChecker> const& __cordl_internal_get__missionObjectiveChecker() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveChecker>& __cordl_internal_get__missionObjectiveChecker();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__nonFinalIconColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__nonFinalIconColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__notClearedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__notClearedIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__notFailedIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__notFailedIcon();

  constexpr int32_t const& __cordl_internal_get__numberOfParticles() const;

  constexpr int32_t& __cordl_internal_get__numberOfParticles();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__resultIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__resultIcon();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__valueText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__valueText();

  constexpr void __cordl_internal_set__clearedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__clearedPS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__failedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__finalClearIconColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__finalFailIconColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__missionObjectiveChecker(::UnityW<::GlobalNamespace::MissionObjectiveChecker> value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__nonFinalIconColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__notClearedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__notFailedIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__numberOfParticles(int32_t value);

  constexpr void __cordl_internal_set__resultIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3ba3054, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveGameUIView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveGameUIView(MissionObjectiveGameUIView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveGameUIView(MissionObjectiveGameUIView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4411 };

  /// @brief Field _notFailedIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____notFailedIcon;

  /// @brief Field _failedIcon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____failedIcon;

  /// @brief Field _notClearedIcon, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____notClearedIcon;

  /// @brief Field _clearedIcon, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____clearedIcon;

  /// @brief Field _resultIcon, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____resultIcon;

  /// @brief Field _finalClearIconColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____finalClearIconColor;

  /// @brief Field _finalFailIconColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____finalFailIconColor;

  /// @brief Field _nonFinalIconColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____nonFinalIconColor;

  /// @brief Field _clearedPS, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____clearedPS;

  /// @brief Field _numberOfParticles, offset: 0x80, size: 0x4, def value: None
  int32_t ____numberOfParticles;

  /// @brief Field _nameText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _valueText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____valueText;

  /// @brief Field _conditionText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____conditionText;

  /// @brief Field _missionObjectiveChecker, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveChecker> ____missionObjectiveChecker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____notFailedIcon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____failedIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____notClearedIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____clearedIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____resultIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____finalClearIconColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____finalFailIconColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____nonFinalIconColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____clearedPS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____numberOfParticles) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____nameText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____valueText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____conditionText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveGameUIView, ____missionObjectiveChecker) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveGameUIView, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveGameUIView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveGameUIView*, "", "MissionObjectiveGameUIView");
