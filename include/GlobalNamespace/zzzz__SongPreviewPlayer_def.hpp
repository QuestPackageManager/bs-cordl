#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPreviewPlayer)
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__AudioSourceVolumeController;
}
namespace GlobalNamespace {
class __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__AudioSourceParams;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__InitData;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__AudioSourceParams;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__AudioSourceVolumeController;
}
namespace GlobalNamespace {
class __SongPreviewPlayer__InitData;
}
namespace GlobalNamespace {
class __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPreviewPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams);
MARK_REF_PTR_T(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController);
MARK_REF_PTR_T(::GlobalNamespace::__SongPreviewPlayer__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4078))
// CS Name: ::SongPreviewPlayer::InitData*
class CORDL_TYPE __SongPreviewPlayer__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field ambientVolumeScale, offset 0x10, size 0x4
  __declspec(property(get = __get_ambientVolumeScale, put = __set_ambientVolumeScale)) float_t ambientVolumeScale;

  constexpr float_t& __get_ambientVolumeScale();

  constexpr float_t const& __get_ambientVolumeScale() const;

  constexpr void __set_ambientVolumeScale(float_t value);

  static inline ::GlobalNamespace::__SongPreviewPlayer__InitData* New_ctor(float_t ambientVolumeScale);

  /// @brief Method .ctor addr 0x2231120 size 0x28 virtual false final false
  inline void _ctor(float_t ambientVolumeScale);

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__InitData(__SongPreviewPlayer__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__InitData(__SongPreviewPlayer__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__InitData();

public:
  /// @brief Field ambientVolumeScale, offset: 0x10, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioSourceParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4079))
// CS Name: ::SongPreviewPlayer::AudioSourceParams*
class CORDL_TYPE __SongPreviewPlayer__AudioSourceParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field _position, offset 0x10, size 0xc
  __declspec(property(get = __get__position, put = __set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _reverbZoneMix, offset 0x1c, size 0x4
  __declspec(property(get = __get__reverbZoneMix, put = __set__reverbZoneMix)) float_t _reverbZoneMix;

  /// @brief Field _spatialBlend, offset 0x20, size 0x4
  __declspec(property(get = __get__spatialBlend, put = __set__spatialBlend)) float_t _spatialBlend;

  /// @brief Field _spread, offset 0x24, size 0x4
  __declspec(property(get = __get__spread, put = __set__spread)) float_t _spread;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_reverbZoneMix)) float_t reverbZoneMix;

  __declspec(property(get = get_spatialBlend)) float_t spatialBlend;

  __declspec(property(get = get_spread)) float_t spread;

  constexpr ::UnityEngine::Vector3& __get__position();

  constexpr ::UnityEngine::Vector3 const& __get__position() const;

  constexpr void __set__position(::UnityEngine::Vector3 value);

  constexpr float_t& __get__reverbZoneMix();

  constexpr float_t const& __get__reverbZoneMix() const;

  constexpr void __set__reverbZoneMix(float_t value);

  constexpr float_t& __get__spatialBlend();

  constexpr float_t const& __get__spatialBlend() const;

  constexpr void __set__spatialBlend(float_t value);

  constexpr float_t& __get__spread();

  constexpr float_t const& __get__spread() const;

  constexpr void __set__spread(float_t value);

  /// @brief Method get_position addr 0x2231148 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_reverbZoneMix addr 0x2231154 size 0x8 virtual false final false
  inline float_t get_reverbZoneMix();

  /// @brief Method get_spatialBlend addr 0x223115c size 0x8 virtual false final false
  inline float_t get_spatialBlend();

  /// @brief Method get_spread addr 0x2231164 size 0x8 virtual false final false
  inline float_t get_spread();

  static inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* New_ctor();

  /// @brief Method .ctor addr 0x223116c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__AudioSourceParams(__SongPreviewPlayer__AudioSourceParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__AudioSourceParams(__SongPreviewPlayer__AudioSourceParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__AudioSourceParams();

public:
  /// @brief Field _position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _reverbZoneMix, offset: 0x1c, size: 0x4, def value: None
  float_t ____reverbZoneMix;

  /// @brief Field _spatialBlend, offset: 0x20, size: 0x4, def value: None
  float_t ____spatialBlend;

  /// @brief Field _spread, offset: 0x24, size: 0x4, def value: None
  float_t ____spread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioSourceVolumeController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4080))
// CS Name: ::SongPreviewPlayer::AudioSourceVolumeController*
class CORDL_TYPE __SongPreviewPlayer__AudioSourceVolumeController : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioSource, offset 0x10, size 0x8
  __declspec(property(get = __get_audioSource, put = __set_audioSource))::UnityEngine::AudioSource* audioSource;

  /// @brief Field <maxVolume>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__maxVolume_k__BackingField, put = __set__maxVolume_k__BackingField)) float_t _maxVolume_k__BackingField;

  /// @brief Field _volume, offset 0x1c, size 0x4
  __declspec(property(get = __get__volume, put = __set__volume)) float_t _volume;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  __declspec(property(get = get_maxVolume, put = set_maxVolume)) float_t maxVolume;

  constexpr ::UnityEngine::AudioSource*& __get_audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get_audioSource() const;

  constexpr void __set_audioSource(::UnityEngine::AudioSource* value);

  constexpr float_t& __get__maxVolume_k__BackingField();

  constexpr float_t const& __get__maxVolume_k__BackingField() const;

  constexpr void __set__maxVolume_k__BackingField(float_t value);

  constexpr float_t& __get__volume();

  constexpr float_t const& __get__volume() const;

  constexpr void __set__volume(float_t value);

  /// @brief Method set_volume addr 0x22309c8 size 0x34 virtual false final false
  inline void set_volume(float_t value);

  /// @brief Method get_volume addr 0x2231174 size 0x8 virtual false final false
  inline float_t get_volume();

  /// @brief Method get_maxVolume addr 0x223117c size 0x8 virtual false final false
  inline float_t get_maxVolume();

  /// @brief Method set_maxVolume addr 0x2231184 size 0x8 virtual false final false
  inline void set_maxVolume(float_t value);

  static inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController* New_ctor(::UnityEngine::AudioSource* audioSource);

  /// @brief Method .ctor addr 0x22305a0 size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::AudioSource* audioSource);

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceVolumeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__AudioSourceVolumeController(__SongPreviewPlayer__AudioSourceVolumeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceVolumeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__AudioSourceVolumeController(__SongPreviewPlayer__AudioSourceVolumeController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__AudioSourceVolumeController();

public:
  /// @brief Field audioSource, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ___audioSource;

  /// @brief Field <maxVolume>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____maxVolume_k__BackingField;

  /// @brief Field _volume, offset: 0x1c, size: 0x4, def value: None
  float_t ____volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<CrossFadeAfterDelayCoroutine>d__28
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4081))
// CS Name: ::SongPreviewPlayer::<CrossFadeAfterDelayCoroutine>d__28*
class CORDL_TYPE __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SongPreviewPlayer* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SongPreviewPlayer* value);

  static inline ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x223075c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x223118c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2231190 size 0xac virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x223123c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2231244 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2231284 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPreviewPlayer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4082))
// CS Name: ::SongPreviewPlayer*
class CORDL_TYPE SongPreviewPlayer : public ::GlobalNamespace::AudioPlayerBase {
public:
  // Declarations
  using _CrossFadeAfterDelayCoroutine_d__28 = ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;

  using AudioSourceVolumeController = ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController;

  using AudioSourceParams = ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams;

  using InitData = ::GlobalNamespace::__SongPreviewPlayer__InitData;

  /// @brief Field _channelsCount, offset 0x18, size 0x4
  __declspec(property(get = __get__channelsCount, put = __set__channelsCount)) int32_t _channelsCount;

  /// @brief Field _audioSourcePrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__audioSourcePrefab, put = __set__audioSourcePrefab))::UnityEngine::AudioSource* _audioSourcePrefab;

  /// @brief Field _defaultAudioClip, offset 0x28, size 0x8
  __declspec(property(get = __get__defaultAudioClip, put = __set__defaultAudioClip))::UnityEngine::AudioClip* _defaultAudioClip;

  /// @brief Field _volume, offset 0x30, size 0x4
  __declspec(property(get = __get__volume, put = __set__volume)) float_t _volume;

  /// @brief Field _crossFadeToAnotherSongSpeed, offset 0x34, size 0x4
  __declspec(property(get = __get__crossFadeToAnotherSongSpeed, put = __set__crossFadeToAnotherSongSpeed)) float_t _crossFadeToAnotherSongSpeed;

  /// @brief Field _crossFadeToDefaultSpeed, offset 0x38, size 0x4
  __declspec(property(get = __get__crossFadeToDefaultSpeed, put = __set__crossFadeToDefaultSpeed)) float_t _crossFadeToDefaultSpeed;

  /// @brief Field _fadeInSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __get__fadeInSpeed, put = __set__fadeInSpeed)) float_t _fadeInSpeed;

  /// @brief Field _defaultAudioSourceParams, offset 0x40, size 0x8
  __declspec(property(get = __get__defaultAudioSourceParams, put = __set__defaultAudioSourceParams))::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* _defaultAudioSourceParams;

  /// @brief Field _othersAudioSourceParams, offset 0x48, size 0x8
  __declspec(property(get = __get__othersAudioSourceParams, put = __set__othersAudioSourceParams))::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* _othersAudioSourceParams;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__SongPreviewPlayer__InitData* _initData;

  /// @brief Field _audioManager, offset 0x58, size 0x8
  __declspec(property(get = __get__audioManager, put = __set__audioManager))::GlobalNamespace::AudioManagerSO* _audioManager;

  /// @brief Field _audioSourceControllers, offset 0x60, size 0x8
  __declspec(property(get = __get__audioSourceControllers,
                      put = __set__audioSourceControllers))::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,
                                                                    ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> _audioSourceControllers;

  /// @brief Field _activeChannel, offset 0x68, size 0x4
  __declspec(property(get = __get__activeChannel, put = __set__activeChannel)) int32_t _activeChannel;

  /// @brief Field _timeToDefaultAudioTransition, offset 0x6c, size 0x4
  __declspec(property(get = __get__timeToDefaultAudioTransition, put = __set__timeToDefaultAudioTransition)) float_t _timeToDefaultAudioTransition;

  /// @brief Field _transitionAfterDelay, offset 0x70, size 0x1
  __declspec(property(get = __get__transitionAfterDelay, put = __set__transitionAfterDelay)) bool _transitionAfterDelay;

  /// @brief Field _volumeScale, offset 0x74, size 0x4
  __declspec(property(get = __get__volumeScale, put = __set__volumeScale)) float_t _volumeScale;

  /// @brief Field _fadeSpeed, offset 0x78, size 0x4
  __declspec(property(get = __get__fadeSpeed, put = __set__fadeSpeed)) float_t _fadeSpeed;

  /// @brief Field _ambientVolumeScale, offset 0x7c, size 0x4
  __declspec(property(get = __get__ambientVolumeScale, put = __set__ambientVolumeScale)) float_t _ambientVolumeScale;

  /// @brief Field _isActiveChannelPaused, offset 0x80, size 0x1
  __declspec(property(get = __get__isActiveChannelPaused, put = __set__isActiveChannelPaused)) bool _isActiveChannelPaused;

  /// @brief Field _channelToFadeOutCallbackDictionary, offset 0x88, size 0x8
  __declspec(property(get = __get__channelToFadeOutCallbackDictionary,
                      put = __set__channelToFadeOutCallbackDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* _channelToFadeOutCallbackDictionary;

  __declspec(property(get = get_activeAudioClip))::UnityEngine::AudioClip* activeAudioClip;

  constexpr int32_t& __get__channelsCount();

  constexpr int32_t const& __get__channelsCount() const;

  constexpr void __set__channelsCount(int32_t value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSourcePrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSourcePrefab() const;

  constexpr void __set__audioSourcePrefab(::UnityEngine::AudioSource* value);

  constexpr ::UnityEngine::AudioClip*& __get__defaultAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__defaultAudioClip() const;

  constexpr void __set__defaultAudioClip(::UnityEngine::AudioClip* value);

  constexpr float_t& __get__volume();

  constexpr float_t const& __get__volume() const;

  constexpr void __set__volume(float_t value);

  constexpr float_t& __get__crossFadeToAnotherSongSpeed();

  constexpr float_t const& __get__crossFadeToAnotherSongSpeed() const;

  constexpr void __set__crossFadeToAnotherSongSpeed(float_t value);

  constexpr float_t& __get__crossFadeToDefaultSpeed();

  constexpr float_t const& __get__crossFadeToDefaultSpeed() const;

  constexpr void __set__crossFadeToDefaultSpeed(float_t value);

  constexpr float_t& __get__fadeInSpeed();

  constexpr float_t const& __get__fadeInSpeed() const;

  constexpr void __set__fadeInSpeed(float_t value);

  constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& __get__defaultAudioSourceParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const& __get__defaultAudioSourceParams() const;

  constexpr void __set__defaultAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value);

  constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& __get__othersAudioSourceParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const& __get__othersAudioSourceParams() const;

  constexpr void __set__othersAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value);

  constexpr ::GlobalNamespace::__SongPreviewPlayer__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__SongPreviewPlayer__InitData* value);

  constexpr ::GlobalNamespace::AudioManagerSO*& __get__audioManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& __get__audioManager() const;

  constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO* value);

  constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>&
  __get__audioSourceControllers();

  constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> const&
  __get__audioSourceControllers() const;

  constexpr void
  __set__audioSourceControllers(::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> value);

  constexpr int32_t& __get__activeChannel();

  constexpr int32_t const& __get__activeChannel() const;

  constexpr void __set__activeChannel(int32_t value);

  constexpr float_t& __get__timeToDefaultAudioTransition();

  constexpr float_t const& __get__timeToDefaultAudioTransition() const;

  constexpr void __set__timeToDefaultAudioTransition(float_t value);

  constexpr bool& __get__transitionAfterDelay();

  constexpr bool const& __get__transitionAfterDelay() const;

  constexpr void __set__transitionAfterDelay(bool value);

  constexpr float_t& __get__volumeScale();

  constexpr float_t const& __get__volumeScale() const;

  constexpr void __set__volumeScale(float_t value);

  constexpr float_t& __get__fadeSpeed();

  constexpr float_t const& __get__fadeSpeed() const;

  constexpr void __set__fadeSpeed(float_t value);

  constexpr float_t& __get__ambientVolumeScale();

  constexpr float_t const& __get__ambientVolumeScale() const;

  constexpr void __set__ambientVolumeScale(float_t value);

  constexpr bool& __get__isActiveChannelPaused();

  constexpr bool const& __get__isActiveChannelPaused() const;

  constexpr void __set__isActiveChannelPaused(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*& __get__channelToFadeOutCallbackDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*> const& __get__channelToFadeOutCallbackDictionary() const;

  constexpr void __set__channelToFadeOutCallbackDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* value);

  /// @brief Method get_activeAudioClip addr 0x2230378 size 0x54 virtual true final false
  inline ::UnityEngine::AudioClip* get_activeAudioClip();

  /// @brief Method Awake addr 0x22303cc size 0x1d4 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x22305d0 size 0x20 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x22305f0 size 0xf4 virtual false final false
  inline void OnEnable();

  /// @brief Method CrossFadeAfterDelayCoroutine addr 0x22306e4 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* CrossFadeAfterDelayCoroutine(float_t delay);

  /// @brief Method OnDisable addr 0x2230784 size 0xd4 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x2230858 size 0x170 virtual false final false
  inline void Update();

  /// @brief Method CrossfadeToDefault addr 0x2230d2c size 0x170 virtual false final false
  inline void CrossfadeToDefault();

  /// @brief Method CrossfadeToNewDefault addr 0x2230e9c size 0xe0 virtual false final false
  inline void CrossfadeToNewDefault(::UnityEngine::AudioClip* audioClip);

  /// @brief Method CrossfadeTo addr 0x2230f7c size 0xc virtual false final false
  inline void CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, ::System::Action* onFadeOutCallback);

  /// @brief Method CrossfadeTo addr 0x2230aac size 0x280 virtual false final false
  inline void CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, bool isDefault, ::System::Action* onFadeOutCallback);

  /// @brief Method PauseCurrentChannel addr 0x2230f88 size 0x74 virtual true final false
  inline void PauseCurrentChannel();

  /// @brief Method UnPauseCurrentChannel addr 0x2230ffc size 0x70 virtual true final false
  inline void UnPauseCurrentChannel();

  /// @brief Method FadeOut addr 0x223106c size 0x1c virtual true final false
  inline void FadeOut(float_t duration);

  /// @brief Method ReportChannelDidFadeOut addr 0x22309fc size 0xb0 virtual false final false
  inline void ReportChannelDidFadeOut(int32_t channel);

  static inline ::GlobalNamespace::SongPreviewPlayer* New_ctor();

  /// @brief Method .ctor addr 0x2231088 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPreviewPlayer(SongPreviewPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPreviewPlayer(SongPreviewPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPreviewPlayer();

public:
  /// @brief Field _channelsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____channelsCount;

  /// @brief Field _audioSourcePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSourcePrefab;

  /// @brief Field _defaultAudioClip, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____defaultAudioClip;

  /// @brief Field _volume, offset: 0x30, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _crossFadeToAnotherSongSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____crossFadeToAnotherSongSpeed;

  /// @brief Field _crossFadeToDefaultSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ____crossFadeToDefaultSpeed;

  /// @brief Field _fadeInSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ____fadeInSpeed;

  /// @brief Field _defaultAudioSourceParams, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* ____defaultAudioSourceParams;

  /// @brief Field _othersAudioSourceParams, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* ____othersAudioSourceParams;

  /// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__SongPreviewPlayer__InitData* ____initData;

  /// @brief Field _audioManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AudioManagerSO* ____audioManager;

  /// @brief Field _audioSourceControllers, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> ____audioSourceControllers;

  /// @brief Field _activeChannel, offset: 0x68, size: 0x4, def value: None
  int32_t ____activeChannel;

  /// @brief Field _timeToDefaultAudioTransition, offset: 0x6c, size: 0x4, def value: None
  float_t ____timeToDefaultAudioTransition;

  /// @brief Field _transitionAfterDelay, offset: 0x70, size: 0x1, def value: None
  bool ____transitionAfterDelay;

  /// @brief Field _volumeScale, offset: 0x74, size: 0x4, def value: None
  float_t ____volumeScale;

  /// @brief Field _fadeSpeed, offset: 0x78, size: 0x4, def value: None
  float_t ____fadeSpeed;

  /// @brief Field _ambientVolumeScale, offset: 0x7c, size: 0x4, def value: None
  float_t ____ambientVolumeScale;

  /// @brief Field _isActiveChannelPaused, offset: 0x80, size: 0x1, def value: None
  bool ____isActiveChannelPaused;

  /// @brief Field _channelToFadeOutCallbackDictionary, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* ____channelToFadeOutCallbackDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPreviewPlayer, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPreviewPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPreviewPlayer*, "", "SongPreviewPlayer");
NEED_NO_BOX(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, "", "SongPreviewPlayer/AudioSourceParams");
NEED_NO_BOX(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, "", "SongPreviewPlayer/AudioSourceVolumeController");
NEED_NO_BOX(::GlobalNamespace::__SongPreviewPlayer__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPreviewPlayer__InitData*, "", "SongPreviewPlayer/InitData");
NEED_NO_BOX(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*, "", "SongPreviewPlayer/<CrossFadeAfterDelayCoroutine>d__28");
