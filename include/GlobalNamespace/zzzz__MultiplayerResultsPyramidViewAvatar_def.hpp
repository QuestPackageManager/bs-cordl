#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerResultsPyramidViewAvatar)
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
namespace HMUI {
class ImageView;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace Tweening {
class ColorTween;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class Vector3Tween;
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
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory);
// Type: ::MultiplayerResultsPyramidViewAvatar
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerResultsPyramidViewAvatar*
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory;

  /// @brief Field _avatarRiseTween, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarRiseTween, put = __cordl_internal_set__avatarRiseTween))::Tweening::Vector3Tween* _avatarRiseTween;

  /// @brief Field _badgeCanvas, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeCanvas, put = __cordl_internal_set__badgeCanvas))::UnityW<::UnityEngine::CanvasGroup> _badgeCanvas;

  /// @brief Field _badgeDirector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeDirector, put = __cordl_internal_set__badgeDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> _badgeDirector;

  /// @brief Field _badgeImages, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeImages, put = __cordl_internal_set__badgeImages))::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> _badgeImages;

  /// @brief Field _badgeOpacityTween, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeOpacityTween, put = __cordl_internal_set__badgeOpacityTween))::Tweening::FloatTween* _badgeOpacityTween;

  /// @brief Field _badgePositionTween, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__badgePositionTween, put = __cordl_internal_set__badgePositionTween))::Tweening::Vector3Tween* _badgePositionTween;

  /// @brief Field _badgeSubtitleCanvas, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeSubtitleCanvas, put = __cordl_internal_set__badgeSubtitleCanvas))::UnityW<::UnityEngine::CanvasGroup> _badgeSubtitleCanvas;

  /// @brief Field _badgeSubtitleText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeSubtitleText, put = __cordl_internal_set__badgeSubtitleText))::UnityW<::TMPro::TextMeshProUGUI> _badgeSubtitleText;

  /// @brief Field _badgeTitles, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTitles,
                      put = __cordl_internal_set__badgeTitles))::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> _badgeTitles;

  /// @brief Field _beatmapKey, offset 0x168, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey))::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _connectedPlayer, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _firstPlaceColor, offset 0x148, size 0x10
  __declspec(property(get = __cordl_internal_get__firstPlaceColor, put = __cordl_internal_set__firstPlaceColor))::UnityEngine::Color _firstPlaceColor;

  /// @brief Field _firstPlaceTrophy, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlaceTrophy, put = __cordl_internal_set__firstPlaceTrophy))::UnityW<::UnityEngine::Sprite> _firstPlaceTrophy;

  /// @brief Field _ghostAppear, offset 0x98, size 0x48
  __declspec(property(get = __cordl_internal_get__ghostAppear, put = __cordl_internal_set__ghostAppear))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams _ghostAppear;

  /// @brief Field _ghostDuplicationEffect, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostDuplicationEffect,
                      put = __cordl_internal_set__ghostDuplicationEffect))::UnityW<::GlobalNamespace::GhostDuplicationEffect> _ghostDuplicationEffect;

  /// @brief Field _ghostFirstTrackName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostFirstTrackName, put = __cordl_internal_set__ghostFirstTrackName))::StringW _ghostFirstTrackName;

  /// @brief Field _ghostReceive, offset 0xe0, size 0x48
  __declspec(property(get = __cordl_internal_get__ghostReceive, put = __cordl_internal_set__ghostReceive))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams _ghostReceive;

  /// @brief Field _ghostSecondTrackName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostSecondTrackName, put = __cordl_internal_set__ghostSecondTrackName))::StringW _ghostSecondTrackName;

  /// @brief Field _localGlowTween, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__localGlowTween, put = __cordl_internal_set__localGlowTween))::Tweening::ColorTween* _localGlowTween;

  /// @brief Field _localPlayerColor, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get__localPlayerColor, put = __cordl_internal_set__localPlayerColor))::UnityEngine::Color _localPlayerColor;

  /// @brief Field _nameBackground, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__nameBackground, put = __cordl_internal_set__nameBackground))::UnityW<::HMUI::ImageView> _nameBackground;

  /// @brief Field _nameOpacityTween, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__nameOpacityTween, put = __cordl_internal_set__nameOpacityTween))::Tweening::FloatTween* _nameOpacityTween;

  /// @brief Field _namePositionTween, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__namePositionTween, put = __cordl_internal_set__namePositionTween))::Tweening::Vector3Tween* _namePositionTween;

  /// @brief Field _nameText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText))::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _originalBadgeLocalPos, offset 0x1c0, size 0xc
  __declspec(property(get = __cordl_internal_get__originalBadgeLocalPos, put = __cordl_internal_set__originalBadgeLocalPos))::UnityEngine::Vector3 _originalBadgeLocalPos;

  /// @brief Field _perPositionRotation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__perPositionRotation, put = __cordl_internal_set__perPositionRotation)) float_t _perPositionRotation;

  /// @brief Field _personalBestVisual, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__personalBestVisual, put = __cordl_internal_set__personalBestVisual))::UnityW<::UnityEngine::GameObject> _personalBestVisual;

  /// @brief Field _playerDataModel, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _positionText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__positionText, put = __cordl_internal_set__positionText))::UnityW<::TMPro::TextMeshProUGUI> _positionText;

  /// @brief Field _riseTween, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__riseTween, put = __cordl_internal_set__riseTween))::Tweening::Vector3Tween* _riseTween;

  /// @brief Field _secondPlaceTrophy, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__secondPlaceTrophy, put = __cordl_internal_set__secondPlaceTrophy))::UnityW<::UnityEngine::Sprite> _secondPlaceTrophy;

  /// @brief Field _standWithAvatarTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__standWithAvatarTransform, put = __cordl_internal_set__standWithAvatarTransform))::UnityW<::UnityEngine::Transform> _standWithAvatarTransform;

  /// @brief Field _thirdPlaceTrophy, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__thirdPlaceTrophy, put = __cordl_internal_set__thirdPlaceTrophy))::UnityW<::UnityEngine::Sprite> _thirdPlaceTrophy;

  /// @brief Field _titleMakingSpaceForBadgeTween, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__titleMakingSpaceForBadgeTween, put = __cordl_internal_set__titleMakingSpaceForBadgeTween))::Tweening::Vector3Tween* _titleMakingSpaceForBadgeTween;

  /// @brief Field _trophyImage, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__trophyImage, put = __cordl_internal_set__trophyImage))::UnityW<::HMUI::ImageView> _trophyImage;

  __declspec(property(get = get_badgeDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> badgeDirector;

  /// @brief Method Awake, addr 0x2486380, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* New_ctor();

  /// @brief Method Setup, addr 0x2485e68, size 0x48c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MultiplayerPlayerResultsData* resultData, int32_t position, int32_t playerCount);

  /// @brief Method SetupBadgeTimeline, addr 0x24858ec, size 0x57c, virtual false, abstract: false, final false
  inline void SetupBadgeTimeline(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* midTransform);

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__avatarRiseTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__avatarRiseTween() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__badgeCanvas() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__badgeCanvas();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__badgeDirector() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__badgeDirector();

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> const& __cordl_internal_get__badgeImages() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*>& __cordl_internal_get__badgeImages();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__badgeOpacityTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__badgeOpacityTween() const;

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__badgePositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__badgePositionTween() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__badgeSubtitleCanvas() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__badgeSubtitleCanvas();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__badgeSubtitleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__badgeSubtitleText();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> const& __cordl_internal_get__badgeTitles() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>& __cordl_internal_get__badgeTitles();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get__firstPlaceColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__firstPlaceColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__firstPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__firstPlaceTrophy();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __cordl_internal_get__ghostAppear() const;

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __cordl_internal_get__ghostAppear();

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& __cordl_internal_get__ghostDuplicationEffect() const;

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& __cordl_internal_get__ghostDuplicationEffect();

  constexpr ::StringW const& __cordl_internal_get__ghostFirstTrackName() const;

  constexpr ::StringW& __cordl_internal_get__ghostFirstTrackName();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __cordl_internal_get__ghostReceive() const;

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __cordl_internal_get__ghostReceive();

  constexpr ::StringW const& __cordl_internal_get__ghostSecondTrackName() const;

  constexpr ::StringW& __cordl_internal_get__ghostSecondTrackName();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__localGlowTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__localGlowTween() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get__localPlayerColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__localPlayerColor();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__nameBackground() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__nameBackground();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__nameOpacityTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__nameOpacityTween() const;

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__namePositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__namePositionTween() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalBadgeLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalBadgeLocalPos();

  constexpr float_t const& __cordl_internal_get__perPositionRotation() const;

  constexpr float_t& __cordl_internal_get__perPositionRotation();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__personalBestVisual() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__personalBestVisual();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__positionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__positionText();

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__riseTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__riseTween() const;

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__secondPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__secondPlaceTrophy();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__standWithAvatarTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__standWithAvatarTransform();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__thirdPlaceTrophy() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__thirdPlaceTrophy();

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__titleMakingSpaceForBadgeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__titleMakingSpaceForBadgeTween() const;

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__trophyImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__trophyImage();

  constexpr void __cordl_internal_set__avatarRiseTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__badgeCanvas(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__badgeDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__badgeImages(::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> value);

  constexpr void __cordl_internal_set__badgeOpacityTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__badgePositionTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__badgeSubtitleCanvas(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__badgeSubtitleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__badgeTitles(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__firstPlaceColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__firstPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__ghostAppear(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  constexpr void __cordl_internal_set__ghostDuplicationEffect(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value);

  constexpr void __cordl_internal_set__ghostFirstTrackName(::StringW value);

  constexpr void __cordl_internal_set__ghostReceive(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  constexpr void __cordl_internal_set__ghostSecondTrackName(::StringW value);

  constexpr void __cordl_internal_set__localGlowTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__localPlayerColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__nameBackground(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__nameOpacityTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__namePositionTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__originalBadgeLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__perPositionRotation(float_t value);

  constexpr void __cordl_internal_set__personalBestVisual(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__riseTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__secondPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__standWithAvatarTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__thirdPlaceTrophy(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__titleMakingSpaceForBadgeTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__trophyImage(::UnityW<::HMUI::ImageView> value);

  /// @brief Method .ctor, addr 0x24863a0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_badgeDirector, addr 0x2486378, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableDirector> get_badgeDirector();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidViewAvatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar const&) = delete;

  /// @brief Field _badgeDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____badgeDirector;

  /// @brief Field _ghostFirstTrackName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ghostFirstTrackName;

  /// @brief Field _ghostSecondTrackName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ghostSecondTrackName;

  /// @brief Field _standWithAvatarTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____standWithAvatarTransform;

  /// @brief Field _perPositionRotation, offset: 0x38, size: 0x4, def value: None
  float_t ____perPositionRotation;

  /// @brief Field _localPlayerColor, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ____localPlayerColor;

  /// @brief Field _positionText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____positionText;

  /// @brief Field _nameText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _nameBackground, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____nameBackground;

  /// @brief Field _badgeCanvas, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____badgeCanvas;

  /// @brief Field _badgeTitles, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____badgeTitles;

  /// @brief Field _badgeImages, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ImageView>, ::Array<::UnityW<::HMUI::ImageView>>*> ____badgeImages;

  /// @brief Field _badgeSubtitleText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____badgeSubtitleText;

  /// @brief Field _badgeSubtitleCanvas, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____badgeSubtitleCanvas;

  /// @brief Field _ghostDuplicationEffect, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GhostDuplicationEffect> ____ghostDuplicationEffect;

  /// @brief Field _ghostAppear, offset: 0x98, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ____ghostAppear;

  /// @brief Field _ghostReceive, offset: 0xe0, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ____ghostReceive;

  /// @brief Field _trophyImage, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____trophyImage;

  /// @brief Field _firstPlaceTrophy, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____firstPlaceTrophy;

  /// @brief Field _secondPlaceTrophy, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____secondPlaceTrophy;

  /// @brief Field _thirdPlaceTrophy, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____thirdPlaceTrophy;

  /// @brief Field _firstPlaceColor, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____firstPlaceColor;

  /// @brief Field _personalBestVisual, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____personalBestVisual;

  /// @brief Field _playerDataModel, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatmapKey, offset: 0x168, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _riseTween, offset: 0x180, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____riseTween;

  /// @brief Field _avatarRiseTween, offset: 0x188, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____avatarRiseTween;

  /// @brief Field _badgePositionTween, offset: 0x190, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____badgePositionTween;

  /// @brief Field _badgeOpacityTween, offset: 0x198, size: 0x8, def value: None
  ::Tweening::FloatTween* ____badgeOpacityTween;

  /// @brief Field _nameOpacityTween, offset: 0x1a0, size: 0x8, def value: None
  ::Tweening::FloatTween* ____nameOpacityTween;

  /// @brief Field _namePositionTween, offset: 0x1a8, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____namePositionTween;

  /// @brief Field _localGlowTween, offset: 0x1b0, size: 0x8, def value: None
  ::Tweening::ColorTween* ____localGlowTween;

  /// @brief Field _titleMakingSpaceForBadgeTween, offset: 0x1b8, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____titleMakingSpaceForBadgeTween;

  /// @brief Field _originalBadgeLocalPos, offset: 0x1c0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalBadgeLocalPos;

  /// @brief Field _connectedPlayer, offset: 0x1d0, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, 0x1d8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeDirector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostFirstTrackName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostSecondTrackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____standWithAvatarTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____perPositionRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____localPlayerColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____positionText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameBackground) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeCanvas) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeTitles) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeImages) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeSubtitleText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeSubtitleCanvas) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostDuplicationEffect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostAppear) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____ghostReceive) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____trophyImage) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____firstPlaceTrophy) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____secondPlaceTrophy) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____thirdPlaceTrophy) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____firstPlaceColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____personalBestVisual) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____playerDataModel) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____beatmapKey) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____riseTween) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____avatarRiseTween) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgePositionTween) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeOpacityTween) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameOpacityTween) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____namePositionTween) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____localGlowTween) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____titleMakingSpaceForBadgeTween) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____originalBadgeLocalPos) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____connectedPlayer) == 0x1d0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerResultsPyramidViewAvatar::Factory*
class CORDL_TYPE __MultiplayerResultsPyramidViewAvatar__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x24863cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsPyramidViewAvatar__Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, "", "MultiplayerResultsPyramidViewAvatar/Factory");
