#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ImageView;
}
namespace Tweening {
class Vector3Tween;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Transform;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine {
class Sprite;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GhostDuplicationEffect;
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
// SizeInfo { instance_size: 456, native_size: -1, calculated_instance_size: 456, calculated_native_size: 456, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4859)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5245)) CS Name: ::MultiplayerResultsPyramidViewAvatar*
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory;

  /// @brief Field _badgeDirector, offset 0x18, size 0x8
  __declspec(property(get = __get__badgeDirector, put = __set__badgeDirector))::UnityEngine::Playables::PlayableDirector* _badgeDirector;

  /// @brief Field _ghostFirstTrackName, offset 0x20, size 0x8
  __declspec(property(get = __get__ghostFirstTrackName, put = __set__ghostFirstTrackName))::StringW _ghostFirstTrackName;

  /// @brief Field _ghostSecondTrackName, offset 0x28, size 0x8
  __declspec(property(get = __get__ghostSecondTrackName, put = __set__ghostSecondTrackName))::StringW _ghostSecondTrackName;

  /// @brief Field _standWithAvatarTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__standWithAvatarTransform, put = __set__standWithAvatarTransform))::UnityEngine::Transform* _standWithAvatarTransform;

  /// @brief Field _perPositionRotation, offset 0x38, size 0x4
  __declspec(property(get = __get__perPositionRotation, put = __set__perPositionRotation)) float_t _perPositionRotation;

  /// @brief Field _localPlayerColor, offset 0x3c, size 0x10
  __declspec(property(get = __get__localPlayerColor, put = __set__localPlayerColor))::UnityEngine::Color _localPlayerColor;

  /// @brief Field _positionText, offset 0x50, size 0x8
  __declspec(property(get = __get__positionText, put = __set__positionText))::TMPro::TextMeshProUGUI* _positionText;

  /// @brief Field _nameText, offset 0x58, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _nameBackground, offset 0x60, size 0x8
  __declspec(property(get = __get__nameBackground, put = __set__nameBackground))::HMUI::ImageView* _nameBackground;

  /// @brief Field _badgeCanvas, offset 0x68, size 0x8
  __declspec(property(get = __get__badgeCanvas, put = __set__badgeCanvas))::UnityEngine::CanvasGroup* _badgeCanvas;

  /// @brief Field _badgeTitles, offset 0x70, size 0x8
  __declspec(property(get = __get__badgeTitles, put = __set__badgeTitles))::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> _badgeTitles;

  /// @brief Field _badgeImages, offset 0x78, size 0x8
  __declspec(property(get = __get__badgeImages, put = __set__badgeImages))::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> _badgeImages;

  /// @brief Field _badgeSubtitleText, offset 0x80, size 0x8
  __declspec(property(get = __get__badgeSubtitleText, put = __set__badgeSubtitleText))::TMPro::TextMeshProUGUI* _badgeSubtitleText;

  /// @brief Field _badgeSubtitleCanvas, offset 0x88, size 0x8
  __declspec(property(get = __get__badgeSubtitleCanvas, put = __set__badgeSubtitleCanvas))::UnityEngine::CanvasGroup* _badgeSubtitleCanvas;

  /// @brief Field _ghostDuplicationEffect, offset 0x90, size 0x8
  __declspec(property(get = __get__ghostDuplicationEffect, put = __set__ghostDuplicationEffect))::GlobalNamespace::GhostDuplicationEffect* _ghostDuplicationEffect;

  /// @brief Field _ghostAppear, offset 0x98, size 0x48
  __declspec(property(get = __get__ghostAppear, put = __set__ghostAppear))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams _ghostAppear;

  /// @brief Field _ghostReceive, offset 0xe0, size 0x48
  __declspec(property(get = __get__ghostReceive, put = __set__ghostReceive))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams _ghostReceive;

  /// @brief Field _trophyImage, offset 0x128, size 0x8
  __declspec(property(get = __get__trophyImage, put = __set__trophyImage))::HMUI::ImageView* _trophyImage;

  /// @brief Field _firstPlaceTrophy, offset 0x130, size 0x8
  __declspec(property(get = __get__firstPlaceTrophy, put = __set__firstPlaceTrophy))::UnityEngine::Sprite* _firstPlaceTrophy;

  /// @brief Field _secondPlaceTrophy, offset 0x138, size 0x8
  __declspec(property(get = __get__secondPlaceTrophy, put = __set__secondPlaceTrophy))::UnityEngine::Sprite* _secondPlaceTrophy;

  /// @brief Field _thirdPlaceTrophy, offset 0x140, size 0x8
  __declspec(property(get = __get__thirdPlaceTrophy, put = __set__thirdPlaceTrophy))::UnityEngine::Sprite* _thirdPlaceTrophy;

  /// @brief Field _firstPlaceColor, offset 0x148, size 0x10
  __declspec(property(get = __get__firstPlaceColor, put = __set__firstPlaceColor))::UnityEngine::Color _firstPlaceColor;

  /// @brief Field _personalBestVisual, offset 0x158, size 0x8
  __declspec(property(get = __get__personalBestVisual, put = __set__personalBestVisual))::UnityEngine::GameObject* _personalBestVisual;

  /// @brief Field _playerDataModel, offset 0x160, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _difficultyBeatmap, offset 0x168, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _riseTween, offset 0x170, size 0x8
  __declspec(property(get = __get__riseTween, put = __set__riseTween))::Tweening::Vector3Tween* _riseTween;

  /// @brief Field _avatarRiseTween, offset 0x178, size 0x8
  __declspec(property(get = __get__avatarRiseTween, put = __set__avatarRiseTween))::Tweening::Vector3Tween* _avatarRiseTween;

  /// @brief Field _badgePositionTween, offset 0x180, size 0x8
  __declspec(property(get = __get__badgePositionTween, put = __set__badgePositionTween))::Tweening::Vector3Tween* _badgePositionTween;

  /// @brief Field _badgeOpacityTween, offset 0x188, size 0x8
  __declspec(property(get = __get__badgeOpacityTween, put = __set__badgeOpacityTween))::Tweening::FloatTween* _badgeOpacityTween;

  /// @brief Field _nameOpacityTween, offset 0x190, size 0x8
  __declspec(property(get = __get__nameOpacityTween, put = __set__nameOpacityTween))::Tweening::FloatTween* _nameOpacityTween;

  /// @brief Field _namePositionTween, offset 0x198, size 0x8
  __declspec(property(get = __get__namePositionTween, put = __set__namePositionTween))::Tweening::Vector3Tween* _namePositionTween;

  /// @brief Field _localGlowTween, offset 0x1a0, size 0x8
  __declspec(property(get = __get__localGlowTween, put = __set__localGlowTween))::Tweening::ColorTween* _localGlowTween;

  /// @brief Field _titleMakingSpaceForBadgeTween, offset 0x1a8, size 0x8
  __declspec(property(get = __get__titleMakingSpaceForBadgeTween, put = __set__titleMakingSpaceForBadgeTween))::Tweening::Vector3Tween* _titleMakingSpaceForBadgeTween;

  /// @brief Field _originalBadgeLocalPos, offset 0x1b0, size 0xc
  __declspec(property(get = __get__originalBadgeLocalPos, put = __set__originalBadgeLocalPos))::UnityEngine::Vector3 _originalBadgeLocalPos;

  /// @brief Field _connectedPlayer, offset 0x1c0, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(get = get_badgeDirector))::UnityEngine::Playables::PlayableDirector* badgeDirector;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__badgeDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__badgeDirector() const;

  constexpr void __set__badgeDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::StringW& __get__ghostFirstTrackName();

  constexpr ::StringW const& __get__ghostFirstTrackName() const;

  constexpr void __set__ghostFirstTrackName(::StringW value);

  constexpr ::StringW& __get__ghostSecondTrackName();

  constexpr ::StringW const& __get__ghostSecondTrackName() const;

  constexpr void __set__ghostSecondTrackName(::StringW value);

  constexpr ::UnityEngine::Transform*& __get__standWithAvatarTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__standWithAvatarTransform() const;

  constexpr void __set__standWithAvatarTransform(::UnityEngine::Transform* value);

  constexpr float_t& __get__perPositionRotation();

  constexpr float_t const& __get__perPositionRotation() const;

  constexpr void __set__perPositionRotation(float_t value);

  constexpr ::UnityEngine::Color& __get__localPlayerColor();

  constexpr ::UnityEngine::Color const& __get__localPlayerColor() const;

  constexpr void __set__localPlayerColor(::UnityEngine::Color value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__positionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__positionText() const;

  constexpr void __set__positionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::HMUI::ImageView*& __get__nameBackground();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__nameBackground() const;

  constexpr void __set__nameBackground(::HMUI::ImageView* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__badgeCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__badgeCanvas() const;

  constexpr void __set__badgeCanvas(::UnityEngine::CanvasGroup* value);

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*>& __get__badgeTitles();

  constexpr ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> const& __get__badgeTitles() const;

  constexpr void __set__badgeTitles(::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> value);

  constexpr ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*>& __get__badgeImages();

  constexpr ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> const& __get__badgeImages() const;

  constexpr void __set__badgeImages(::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__badgeSubtitleText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__badgeSubtitleText() const;

  constexpr void __set__badgeSubtitleText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__badgeSubtitleCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__badgeSubtitleCanvas() const;

  constexpr void __set__badgeSubtitleCanvas(::UnityEngine::CanvasGroup* value);

  constexpr ::GlobalNamespace::GhostDuplicationEffect*& __get__ghostDuplicationEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> const& __get__ghostDuplicationEffect() const;

  constexpr void __set__ghostDuplicationEffect(::GlobalNamespace::GhostDuplicationEffect* value);

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __get__ghostAppear();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __get__ghostAppear() const;

  constexpr void __set__ghostAppear(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __get__ghostReceive();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __get__ghostReceive() const;

  constexpr void __set__ghostReceive(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  constexpr ::HMUI::ImageView*& __get__trophyImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__trophyImage() const;

  constexpr void __set__trophyImage(::HMUI::ImageView* value);

  constexpr ::UnityEngine::Sprite*& __get__firstPlaceTrophy();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__firstPlaceTrophy() const;

  constexpr void __set__firstPlaceTrophy(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__secondPlaceTrophy();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__secondPlaceTrophy() const;

  constexpr void __set__secondPlaceTrophy(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__thirdPlaceTrophy();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__thirdPlaceTrophy() const;

  constexpr void __set__thirdPlaceTrophy(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Color& __get__firstPlaceColor();

  constexpr ::UnityEngine::Color const& __get__firstPlaceColor() const;

  constexpr void __set__firstPlaceColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::GameObject*& __get__personalBestVisual();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__personalBestVisual() const;

  constexpr void __set__personalBestVisual(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::Tweening::Vector3Tween*& __get__riseTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__riseTween() const;

  constexpr void __set__riseTween(::Tweening::Vector3Tween* value);

  constexpr ::Tweening::Vector3Tween*& __get__avatarRiseTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__avatarRiseTween() const;

  constexpr void __set__avatarRiseTween(::Tweening::Vector3Tween* value);

  constexpr ::Tweening::Vector3Tween*& __get__badgePositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__badgePositionTween() const;

  constexpr void __set__badgePositionTween(::Tweening::Vector3Tween* value);

  constexpr ::Tweening::FloatTween*& __get__badgeOpacityTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__badgeOpacityTween() const;

  constexpr void __set__badgeOpacityTween(::Tweening::FloatTween* value);

  constexpr ::Tweening::FloatTween*& __get__nameOpacityTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__nameOpacityTween() const;

  constexpr void __set__nameOpacityTween(::Tweening::FloatTween* value);

  constexpr ::Tweening::Vector3Tween*& __get__namePositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__namePositionTween() const;

  constexpr void __set__namePositionTween(::Tweening::Vector3Tween* value);

  constexpr ::Tweening::ColorTween*& __get__localGlowTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__localGlowTween() const;

  constexpr void __set__localGlowTween(::Tweening::ColorTween* value);

  constexpr ::Tweening::Vector3Tween*& __get__titleMakingSpaceForBadgeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__titleMakingSpaceForBadgeTween() const;

  constexpr void __set__titleMakingSpaceForBadgeTween(::Tweening::Vector3Tween* value);

  constexpr ::UnityEngine::Vector3& __get__originalBadgeLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get__originalBadgeLocalPos() const;

  constexpr void __set__originalBadgeLocalPos(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method get_badgeDirector, addr 0x22588a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableDirector* get_badgeDirector();

  /// @brief Method Awake, addr 0x22588ac, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Setup, addr 0x22583bc, size 0x464, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MultiplayerPlayerResultsData* resultData, int32_t position, int32_t playerCount);

  /// @brief Method SetupBadgeTimeline, addr 0x2257e40, size 0x57c, virtual false, abstract: false, final false
  inline void SetupBadgeTimeline(::UnityEngine::Transform* startTransform, ::UnityEngine::Transform* midTransform);

  static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* New_ctor();

  /// @brief Method .ctor, addr 0x22588cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidViewAvatar();

public:
  /// @brief Field _badgeDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____badgeDirector;

  /// @brief Field _ghostFirstTrackName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ghostFirstTrackName;

  /// @brief Field _ghostSecondTrackName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ghostSecondTrackName;

  /// @brief Field _standWithAvatarTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____standWithAvatarTransform;

  /// @brief Field _perPositionRotation, offset: 0x38, size: 0x4, def value: None
  float_t ____perPositionRotation;

  /// @brief Field _localPlayerColor, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ____localPlayerColor;

  /// @brief Field _positionText, offset: 0x50, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____positionText;

  /// @brief Field _nameText, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _nameBackground, offset: 0x60, size: 0x8, def value: None
  ::HMUI::ImageView* ____nameBackground;

  /// @brief Field _badgeCanvas, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____badgeCanvas;

  /// @brief Field _badgeTitles, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::TMPro::TextMeshProUGUI*, ::Array<::TMPro::TextMeshProUGUI*>*> ____badgeTitles;

  /// @brief Field _badgeImages, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::HMUI::ImageView*, ::Array<::HMUI::ImageView*>*> ____badgeImages;

  /// @brief Field _badgeSubtitleText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____badgeSubtitleText;

  /// @brief Field _badgeSubtitleCanvas, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____badgeSubtitleCanvas;

  /// @brief Field _ghostDuplicationEffect, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GhostDuplicationEffect* ____ghostDuplicationEffect;

  /// @brief Field _ghostAppear, offset: 0x98, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ____ghostAppear;

  /// @brief Field _ghostReceive, offset: 0xe0, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ____ghostReceive;

  /// @brief Field _trophyImage, offset: 0x128, size: 0x8, def value: None
  ::HMUI::ImageView* ____trophyImage;

  /// @brief Field _firstPlaceTrophy, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____firstPlaceTrophy;

  /// @brief Field _secondPlaceTrophy, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____secondPlaceTrophy;

  /// @brief Field _thirdPlaceTrophy, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____thirdPlaceTrophy;

  /// @brief Field _firstPlaceColor, offset: 0x148, size: 0x10, def value: None
  ::UnityEngine::Color ____firstPlaceColor;

  /// @brief Field _personalBestVisual, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____personalBestVisual;

  /// @brief Field _playerDataModel, offset: 0x160, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _difficultyBeatmap, offset: 0x168, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _riseTween, offset: 0x170, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____riseTween;

  /// @brief Field _avatarRiseTween, offset: 0x178, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____avatarRiseTween;

  /// @brief Field _badgePositionTween, offset: 0x180, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____badgePositionTween;

  /// @brief Field _badgeOpacityTween, offset: 0x188, size: 0x8, def value: None
  ::Tweening::FloatTween* ____badgeOpacityTween;

  /// @brief Field _nameOpacityTween, offset: 0x190, size: 0x8, def value: None
  ::Tweening::FloatTween* ____nameOpacityTween;

  /// @brief Field _namePositionTween, offset: 0x198, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____namePositionTween;

  /// @brief Field _localGlowTween, offset: 0x1a0, size: 0x8, def value: None
  ::Tweening::ColorTween* ____localGlowTween;

  /// @brief Field _titleMakingSpaceForBadgeTween, offset: 0x1a8, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____titleMakingSpaceForBadgeTween;

  /// @brief Field _originalBadgeLocalPos, offset: 0x1b0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalBadgeLocalPos;

  /// @brief Field _connectedPlayer, offset: 0x1c0, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, 0x1c8>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____difficultyBeatmap) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____riseTween) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____avatarRiseTween) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgePositionTween) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____badgeOpacityTween) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____nameOpacityTween) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____namePositionTween) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____localGlowTween) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____titleMakingSpaceForBadgeTween) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____originalBadgeLocalPos) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, ____connectedPlayer) == 0x1c0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11005)), TypeDefinitionIndex(TypeDefinitionIndex(12778)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst:
// 3489 }), TypeDefinitionIndex(TypeDefinitionIndex(5245))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5244)) CS Name: ::MultiplayerResultsPyramidViewAvatar::Factory*
class CORDL_TYPE __MultiplayerResultsPyramidViewAvatar__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x22588f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsPyramidViewAvatar__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, "", "MultiplayerResultsPyramidViewAvatar/Factory");
