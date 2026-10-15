#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsPyramidViewAvatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerResultsPyramidViewAvatar)
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar_Factory;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class ImageView;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar_Factory;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*);
MARK_REF_T(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory*, "", "MultiplayerResultsPyramidViewAvatar/Factory");
// Dependencies Zenject.PlaceholderFactory`2<TParam1, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerResultsPyramidViewAvatar/Factory
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar_Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory* New_ctor();

  /// @brief Method .ctor, addr 0x5e3cefc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidViewAvatar_Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar_Factory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidViewAvatar_Factory(MultiplayerResultsPyramidViewAvatar_Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar_Factory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidViewAvatar_Factory(MultiplayerResultsPyramidViewAvatar_Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, GhostDuplicationEffect::GhostEffectParams, HMUI.ImageView, TMPro.TextMeshProUGUI, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerResultsPyramidViewAvatar
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar_Factory;

  /// @brief Field _badgeCanvas, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeCanvas, put = __cordl_internal_set__badgeCanvas)) ::UnityW<::UnityEngine::CanvasGroup> _badgeCanvas;

  /// @brief Field _badgeDirector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeDirector, put = __cordl_internal_set__badgeDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector> _badgeDirector;

  /// @brief Field _badgeImages, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeImages, put = __cordl_internal_set__badgeImages)) ::ArrayW<::UnityW<::HMUI::ImageView>> _badgeImages;

  /// @brief Field _badgeSubtitleCanvas, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeSubtitleCanvas, put = __cordl_internal_set__badgeSubtitleCanvas)) ::UnityW<::UnityEngine::CanvasGroup> _badgeSubtitleCanvas;

  /// @brief Field _badgeSubtitleText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeSubtitleText, put = __cordl_internal_set__badgeSubtitleText)) ::UnityW<::TMPro::TextMeshProUGUI> _badgeSubtitleText;

  /// @brief Field _badgeTitles, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTitles, put = __cordl_internal_set__badgeTitles)) ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> _badgeTitles;

  /// @brief Field _beatmapKey, offset 0x170, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _connectedPlayer, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IBeatSaberConnectedPlayer* _connectedPlayer;

  /// @brief Field _firstPlaceColor, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get__firstPlaceColor, put = __cordl_internal_set__firstPlaceColor)) ::UnityEngine::Color _firstPlaceColor;

  /// @brief Field _firstPlaceTrophy, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlaceTrophy, put = __cordl_internal_set__firstPlaceTrophy)) ::UnityW<::UnityEngine::Sprite> _firstPlaceTrophy;

  /// @brief Field _ghostAppear, offset 0xa0, size 0x48
  __declspec(property(get = __cordl_internal_get__ghostAppear, put = __cordl_internal_set__ghostAppear)) ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams _ghostAppear;

  /// @brief Field _ghostDuplicationEffect, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostDuplicationEffect, put = __cordl_internal_set__ghostDuplicationEffect)) ::UnityW<::GlobalNamespace::GhostDuplicationEffect>
      _ghostDuplicationEffect;

  /// @brief Field _ghostFirstTrackName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostFirstTrackName, put = __cordl_internal_set__ghostFirstTrackName)) ::StringW _ghostFirstTrackName;

  /// @brief Field _ghostReceive, offset 0xe8, size 0x48
  __declspec(property(get = __cordl_internal_get__ghostReceive, put = __cordl_internal_set__ghostReceive)) ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams _ghostReceive;

  /// @brief Field _ghostSecondTrackName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostSecondTrackName, put = __cordl_internal_set__ghostSecondTrackName)) ::StringW _ghostSecondTrackName;

  /// @brief Field _localPlayerColor, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__localPlayerColor, put = __cordl_internal_set__localPlayerColor)) ::UnityEngine::Color _localPlayerColor;

  /// @brief Field _nameBackground, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__nameBackground, put = __cordl_internal_set__nameBackground)) ::UnityW<::HMUI::ImageView> _nameBackground;

  /// @brief Field _nameText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _perPositionRotation, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__perPositionRotation, put = __cordl_internal_set__perPositionRotation)) float_t _perPositionRotation;

  /// @brief Field _personalBestVisual, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__personalBestVisual, put = __cordl_internal_set__personalBestVisual)) ::UnityW<::UnityEngine::GameObject> _personalBestVisual;

  /// @brief Field _playerDataModel, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _positionText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__positionText, put = __cordl_internal_set__positionText)) ::UnityW<::TMPro::TextMeshProUGUI> _positionText;

  /// @brief Field _secondPlaceTrophy, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__secondPlaceTrophy, put = __cordl_internal_set__secondPlaceTrophy)) ::UnityW<::UnityEngine::Sprite> _secondPlaceTrophy;

  /// @brief Field _standWithAvatarTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__standWithAvatarTransform, put = __cordl_internal_set__standWithAvatarTransform)) ::UnityW<::UnityEngine::Transform> _standWithAvatarTransform;

  /// @brief Field _thirdPlaceTrophy, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__thirdPlaceTrophy, put = __cordl_internal_set__thirdPlaceTrophy)) ::UnityW<::UnityEngine::Sprite> _thirdPlaceTrophy;

  /// @brief Field _trophyImage, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__trophyImage, put = __cordl_internal_set__trophyImage)) ::UnityW<::HMUI::ImageView> _trophyImage;

  __declspec(property(get = get_badgeDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector> badgeDirector;

  /// @brief Method Awake, addr 0x5e3cebc, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* New_ctor();

  /// @brief Method Setup, addr 0x5e3c8dc, size 0x534, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MultiplayerPlayerResultsData* resultData, int32_t position, int32_t playerCount);

  /// @brief Method SetupBadgeTimeline, addr 0x5e3c394, size 0x548, virtual false, abstract: false, final false
  inline void SetupBadgeTimeline(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* midTransform);

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__badgeCanvas() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__badgeCanvas();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__badgeDirector() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__badgeDirector();

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>> const& __cordl_internal_get__badgeImages() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>>& __cordl_internal_get__badgeImages();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__badgeSubtitleCanvas() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__badgeSubtitleCanvas();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__badgeSubtitleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__badgeSubtitleText();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> const& __cordl_internal_get__badgeTitles() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>& __cordl_internal_get__badgeTitles();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__firstPlaceColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__firstPlaceColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__firstPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__firstPlaceTrophy();

  constexpr ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams const& __cordl_internal_get__ghostAppear() const;

  constexpr ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams& __cordl_internal_get__ghostAppear();

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& __cordl_internal_get__ghostDuplicationEffect() const;

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& __cordl_internal_get__ghostDuplicationEffect();

  constexpr ::StringW const& __cordl_internal_get__ghostFirstTrackName() const;

  constexpr ::StringW& __cordl_internal_get__ghostFirstTrackName();

  constexpr ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams const& __cordl_internal_get__ghostReceive() const;

  constexpr ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams& __cordl_internal_get__ghostReceive();

  constexpr ::StringW const& __cordl_internal_get__ghostSecondTrackName() const;

  constexpr ::StringW& __cordl_internal_get__ghostSecondTrackName();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__localPlayerColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__localPlayerColor();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__nameBackground() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__nameBackground();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr float_t const& __cordl_internal_get__perPositionRotation() const;

  constexpr float_t& __cordl_internal_get__perPositionRotation();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__personalBestVisual() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__personalBestVisual();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__positionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__positionText();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__secondPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__secondPlaceTrophy();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__standWithAvatarTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__standWithAvatarTransform();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__thirdPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__thirdPlaceTrophy();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__trophyImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__trophyImage();

  constexpr void __cordl_internal_set__badgeCanvas(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__badgeDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__badgeImages(::ArrayW<::UnityW<::HMUI::ImageView>> value);

  constexpr void __cordl_internal_set__badgeSubtitleCanvas(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__badgeSubtitleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__badgeTitles(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set__firstPlaceColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__firstPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__ghostAppear(::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams value);

  constexpr void __cordl_internal_set__ghostDuplicationEffect(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value);

  constexpr void __cordl_internal_set__ghostFirstTrackName(::StringW value);

  constexpr void __cordl_internal_set__ghostReceive(::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams value);

  constexpr void __cordl_internal_set__ghostSecondTrackName(::StringW value);

  constexpr void __cordl_internal_set__localPlayerColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__nameBackground(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__perPositionRotation(float_t value);

  constexpr void __cordl_internal_set__personalBestVisual(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__secondPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__standWithAvatarTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__thirdPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__trophyImage(::UnityW<::HMUI::ImageView> value);

  /// @brief Method .ctor, addr 0x5e3ced8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_badgeDirector, addr 0x5e3ceb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableDirector> get_badgeDirector();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidViewAvatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6304 };

  /// [Header("New")]
  /// [SerializeField]
  /// @brief Field _badgeDirector, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____badgeDirector;

  /// [SerializeField]
  /// @brief Field _ghostFirstTrackName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ghostFirstTrackName;

  /// [SerializeField]
  /// @brief Field _ghostSecondTrackName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ghostSecondTrackName;

  /// [Header("Old")]
  /// [SerializeField]
  /// @brief Field _standWithAvatarTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____standWithAvatarTransform;

  /// [SerializeField]
  /// @brief Field _perPositionRotation, offset: 0x40, size: 0x4, def value: None
  float_t ____perPositionRotation;

  /// [SerializeField]
  /// @brief Field _localPlayerColor, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Color ____localPlayerColor;

  /// [Header("Name")]
  /// [SerializeField]
  /// @brief Field _positionText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____positionText;

  /// [SerializeField]
  /// @brief Field _nameText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// [SerializeField]
  /// @brief Field _nameBackground, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____nameBackground;

  /// [Header("Badge Tweens")]
  /// [SerializeField]
  /// @brief Field _badgeCanvas, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____badgeCanvas;

  /// [SerializeField]
  /// @brief Field _badgeTitles, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> ____badgeTitles;

  /// [SerializeField]
  /// @brief Field _badgeImages, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ImageView>> ____badgeImages;

  /// [Header("Subtitle")]
  /// [SerializeField]
  /// @brief Field _badgeSubtitleText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____badgeSubtitleText;

  /// [SerializeField]
  /// @brief Field _badgeSubtitleCanvas, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____badgeSubtitleCanvas;

  /// [Header("Ghost Effect")]
  /// [SerializeField]
  /// @brief Field _ghostDuplicationEffect, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GhostDuplicationEffect> ____ghostDuplicationEffect;

  /// [SerializeField]
  /// @brief Field _ghostAppear, offset: 0xa0, size: 0x48, def value: None
  ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams ____ghostAppear;

  /// [SerializeField]
  /// @brief Field _ghostReceive, offset: 0xe8, size: 0x48, def value: None
  ::GlobalNamespace::GhostDuplicationEffect_GhostEffectParams ____ghostReceive;

  /// [Header("Trophy")]
  /// [SerializeField]
  /// @brief Field _trophyImage, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____trophyImage;

  /// [SerializeField]
  /// @brief Field _firstPlaceTrophy, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____firstPlaceTrophy;

  /// [SerializeField]
  /// @brief Field _secondPlaceTrophy, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____secondPlaceTrophy;

  /// [SerializeField]
  /// @brief Field _thirdPlaceTrophy, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____thirdPlaceTrophy;

  /// [SerializeField]
  /// @brief Field _firstPlaceColor, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Color ____firstPlaceColor;

  /// [SerializeField]
  /// @brief Field _personalBestVisual, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____personalBestVisual;

  /// [Inject]
  /// @brief Field _playerDataModel, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// [Inject]
  /// @brief Field _beatmapKey, offset: 0x170, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// [Inject]
  /// @brief Field _connectedPlayer, offset: 0x188, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeDirector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostFirstTrackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostSecondTrackName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____standWithAvatarTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____perPositionRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____localPlayerColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____positionText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameBackground) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeCanvas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeTitles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeImages) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeSubtitleText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeSubtitleCanvas) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostDuplicationEffect) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostAppear) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostReceive) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____trophyImage) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____firstPlaceTrophy) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____secondPlaceTrophy) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____thirdPlaceTrophy) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____firstPlaceColor) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____personalBestVisual) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____playerDataModel) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____beatmapKey) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____connectedPlayer) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar) == 0x190, "Size mismatch!");

} // namespace GlobalNamespace
