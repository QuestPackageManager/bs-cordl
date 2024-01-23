#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BTSCharacterSpawnAnimationController)
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class JumpReceiver;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class ActivationTrack;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnAnimationController);
// Type: ::BTSCharacterSpawnAnimationController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3970))
// CS Name: ::BTSCharacterSpawnAnimationController*
class CORDL_TYPE BTSCharacterSpawnAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _spawnCharacterPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnCharacterPlayableDirector,
                      put = __cordl_internal_set__spawnCharacterPlayableDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> _spawnCharacterPlayableDirector;

  /// @brief Field _jumpReceiver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpReceiver, put = __cordl_internal_set__jumpReceiver))::UnityW<::GlobalNamespace::JumpReceiver> _jumpReceiver;

  /// @brief Field _appearAnimationEndTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__appearAnimationEndTime, put = __cordl_internal_set__appearAnimationEndTime)) float_t _appearAnimationEndTime;

  /// @brief Field _disappearAnimationStartTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearAnimationStartTime, put = __cordl_internal_set__disappearAnimationStartTime)) float_t _disappearAnimationStartTime;

  /// @brief Field _rimLightColorSetter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightColorSetter,
                      put = __cordl_internal_set__rimLightColorSetter))::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> _rimLightColorSetter;

  /// @brief Field _rimLightIntensityAnimator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightIntensityAnimator,
                      put = __cordl_internal_set__rimLightIntensityAnimator))::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> _rimLightIntensityAnimator;

  /// @brief Field _rimLightEdgeStartAnimator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightEdgeStartAnimator,
                      put = __cordl_internal_set__rimLightEdgeStartAnimator))::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> _rimLightEdgeStartAnimator;

  /// @brief Field _songSpeedData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songSpeedData, put = __cordl_internal_set__songSpeedData))::GlobalNamespace::SongSpeedData* _songSpeedData;

  /// @brief Field _characterActivationTrack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__characterActivationTrack,
                      put = __cordl_internal_set__characterActivationTrack))::UnityW<::UnityEngine::Timeline::ActivationTrack> _characterActivationTrack;

  /// @brief Field _currentBtsCharacter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__currentBtsCharacter, put = __cordl_internal_set__currentBtsCharacter))::UnityW<::GlobalNamespace::BTSCharacter> _currentBtsCharacter;

  /// @brief Field _defaultSpawnCharacterDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultSpawnCharacterDuration, put = __cordl_internal_set__defaultSpawnCharacterDuration)) float_t _defaultSpawnCharacterDuration;

  /// @brief Field _playableDirectorTimeBeforePause, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__playableDirectorTimeBeforePause, put = __cordl_internal_set__playableDirectorTimeBeforePause)) double_t _playableDirectorTimeBeforePause;

  /// @brief Field _animatorNormalizedTimeBeforePause, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__animatorNormalizedTimeBeforePause, put = __cordl_internal_set__animatorNormalizedTimeBeforePause)) float_t _animatorNormalizedTimeBeforePause;

  __declspec(property(get = get_isCharacterVisible)) bool isCharacterVisible;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_characterActivationTrack))::UnityW<::UnityEngine::Timeline::ActivationTrack> characterActivationTrack;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__spawnCharacterPlayableDirector();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__spawnCharacterPlayableDirector() const;

  constexpr void __cordl_internal_set__spawnCharacterPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr ::UnityW<::GlobalNamespace::JumpReceiver>& __cordl_internal_get__jumpReceiver();

  constexpr ::UnityW<::GlobalNamespace::JumpReceiver> const& __cordl_internal_get__jumpReceiver() const;

  constexpr void __cordl_internal_set__jumpReceiver(::UnityW<::GlobalNamespace::JumpReceiver> value);

  constexpr float_t& __cordl_internal_get__appearAnimationEndTime();

  constexpr float_t const& __cordl_internal_get__appearAnimationEndTime() const;

  constexpr void __cordl_internal_set__appearAnimationEndTime(float_t value);

  constexpr float_t& __cordl_internal_get__disappearAnimationStartTime();

  constexpr float_t const& __cordl_internal_get__disappearAnimationStartTime() const;

  constexpr void __cordl_internal_set__disappearAnimationStartTime(float_t value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& __cordl_internal_get__rimLightColorSetter();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& __cordl_internal_get__rimLightColorSetter() const;

  constexpr void __cordl_internal_set__rimLightColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& __cordl_internal_get__rimLightIntensityAnimator();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& __cordl_internal_get__rimLightIntensityAnimator() const;

  constexpr void __cordl_internal_set__rimLightIntensityAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& __cordl_internal_get__rimLightEdgeStartAnimator();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& __cordl_internal_get__rimLightEdgeStartAnimator() const;

  constexpr void __cordl_internal_set__rimLightEdgeStartAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value);

  constexpr ::GlobalNamespace::SongSpeedData*& __cordl_internal_get__songSpeedData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongSpeedData*> const& __cordl_internal_get__songSpeedData() const;

  constexpr void __cordl_internal_set__songSpeedData(::GlobalNamespace::SongSpeedData* value);

  constexpr ::UnityW<::UnityEngine::Timeline::ActivationTrack>& __cordl_internal_get__characterActivationTrack();

  constexpr ::UnityW<::UnityEngine::Timeline::ActivationTrack> const& __cordl_internal_get__characterActivationTrack() const;

  constexpr void __cordl_internal_set__characterActivationTrack(::UnityW<::UnityEngine::Timeline::ActivationTrack> value);

  constexpr ::UnityW<::GlobalNamespace::BTSCharacter>& __cordl_internal_get__currentBtsCharacter();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacter> const& __cordl_internal_get__currentBtsCharacter() const;

  constexpr void __cordl_internal_set__currentBtsCharacter(::UnityW<::GlobalNamespace::BTSCharacter> value);

  constexpr float_t& __cordl_internal_get__defaultSpawnCharacterDuration();

  constexpr float_t const& __cordl_internal_get__defaultSpawnCharacterDuration() const;

  constexpr void __cordl_internal_set__defaultSpawnCharacterDuration(float_t value);

  constexpr double_t& __cordl_internal_get__playableDirectorTimeBeforePause();

  constexpr double_t const& __cordl_internal_get__playableDirectorTimeBeforePause() const;

  constexpr void __cordl_internal_set__playableDirectorTimeBeforePause(double_t value);

  constexpr float_t& __cordl_internal_get__animatorNormalizedTimeBeforePause();

  constexpr float_t const& __cordl_internal_get__animatorNormalizedTimeBeforePause() const;

  constexpr void __cordl_internal_set__animatorNormalizedTimeBeforePause(float_t value);

  /// @brief Method get_isCharacterVisible, addr 0x2219c34, size 0x28, virtual false, abstract: false, final false
  inline bool get_isCharacterVisible();

  /// @brief Method get_duration, addr 0x2219c5c, size 0x38, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_characterActivationTrack, addr 0x2219c94, size 0x410, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::ActivationTrack> get_characterActivationTrack();

  /// @brief Method PlayAnimation, addr 0x221a0a4, size 0xcc, virtual false, abstract: false, final false
  inline void PlayAnimation();

  /// @brief Method EndEarlyAnimation, addr 0x221a170, size 0x74, virtual false, abstract: false, final false
  inline void EndEarlyAnimation();

  /// @brief Method StopAnimation, addr 0x221a1e4, size 0x1c, virtual false, abstract: false, final false
  inline void StopAnimation();

  /// @brief Method SetCharacter, addr 0x221a200, size 0x94, virtual false, abstract: false, final false
  inline void SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter);

  /// @brief Method WillResumeAnimation, addr 0x221a294, size 0x60, virtual false, abstract: false, final false
  inline void WillResumeAnimation();

  /// @brief Method ResumeAnimation, addr 0x221a2f4, size 0x60, virtual false, abstract: false, final false
  inline void ResumeAnimation();

  /// @brief Method PauseAnimation, addr 0x221a354, size 0x9c, virtual false, abstract: false, final false
  inline void PauseAnimation();

  static inline ::GlobalNamespace::BTSCharacterSpawnAnimationController* New_ctor();

  /// @brief Method .ctor, addr 0x221a3f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterSpawnAnimationController();

public:
  /// @brief Field _spawnCharacterPlayableDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____spawnCharacterPlayableDirector;

  /// @brief Field _jumpReceiver, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::JumpReceiver> ____jumpReceiver;

  /// @brief Field _appearAnimationEndTime, offset: 0x28, size: 0x4, def value: None
  float_t ____appearAnimationEndTime;

  /// @brief Field _disappearAnimationStartTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____disappearAnimationStartTime;

  /// @brief Field _rimLightColorSetter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> ____rimLightColorSetter;

  /// @brief Field _rimLightIntensityAnimator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> ____rimLightIntensityAnimator;

  /// @brief Field _rimLightEdgeStartAnimator, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> ____rimLightEdgeStartAnimator;

  /// @brief Field _songSpeedData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SongSpeedData* ____songSpeedData;

  /// @brief Field _characterActivationTrack, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::ActivationTrack> ____characterActivationTrack;

  /// @brief Field _currentBtsCharacter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacter> ____currentBtsCharacter;

  /// @brief Field _defaultSpawnCharacterDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____defaultSpawnCharacterDuration;

  /// @brief Field _playableDirectorTimeBeforePause, offset: 0x68, size: 0x8, def value: None
  double_t ____playableDirectorTimeBeforePause;

  /// @brief Field _animatorNormalizedTimeBeforePause, offset: 0x70, size: 0x4, def value: None
  float_t ____animatorNormalizedTimeBeforePause;

  /// @brief Field kCharacterActivationStreamName offset 0xffffffff size 0x8
  static constexpr ::ConstString kCharacterActivationStreamName{ u"CharacterActivationTrack" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnAnimationController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____spawnCharacterPlayableDirector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____jumpReceiver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____appearAnimationEndTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____disappearAnimationStartTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____rimLightColorSetter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____rimLightIntensityAnimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____rimLightEdgeStartAnimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____songSpeedData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____characterActivationTrack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____currentBtsCharacter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____defaultSpawnCharacterDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____playableDirectorTimeBeforePause) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnAnimationController, ____animatorNormalizedTimeBeforePause) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnAnimationController*, "", "BTSCharacterSpawnAnimationController");
