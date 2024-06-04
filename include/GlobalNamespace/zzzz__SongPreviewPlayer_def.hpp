#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPreviewPlayer.hpp"
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
namespace GlobalNamespace {
class AudioManagerSO;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::SongPreviewPlayer::InitData*
class CORDL_TYPE __SongPreviewPlayer__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field ambientVolumeScale, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ambientVolumeScale, put = __cordl_internal_set_ambientVolumeScale)) float_t ambientVolumeScale;

  static inline ::GlobalNamespace::__SongPreviewPlayer__InitData* New_ctor(float_t ambientVolumeScale);

  constexpr float_t const& __cordl_internal_get_ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get_ambientVolumeScale();

  constexpr void __cordl_internal_set_ambientVolumeScale(float_t value);

  /// @brief Method .ctor, addr 0x26182a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t ambientVolumeScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__InitData(__SongPreviewPlayer__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__InitData(__SongPreviewPlayer__InitData const&) = delete;

  /// @brief Field ambientVolumeScale, offset: 0x10, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__InitData, ___ambientVolumeScale) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioSourceParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPreviewPlayer::AudioSourceParams*
class CORDL_TYPE __SongPreviewPlayer__AudioSourceParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field _position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _reverbZoneMix, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__reverbZoneMix, put = __cordl_internal_set__reverbZoneMix)) float_t _reverbZoneMix;

  /// @brief Field _spatialBlend, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__spatialBlend, put = __cordl_internal_set__spatialBlend)) float_t _spatialBlend;

  /// @brief Field _spread, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__spread, put = __cordl_internal_set__spread)) float_t _spread;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_reverbZoneMix)) float_t reverbZoneMix;

  __declspec(property(get = get_spatialBlend)) float_t spatialBlend;

  __declspec(property(get = get_spread)) float_t spread;

  static inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr float_t const& __cordl_internal_get__reverbZoneMix() const;

  constexpr float_t& __cordl_internal_get__reverbZoneMix();

  constexpr float_t const& __cordl_internal_get__spatialBlend() const;

  constexpr float_t& __cordl_internal_get__spatialBlend();

  constexpr float_t const& __cordl_internal_get__spread() const;

  constexpr float_t& __cordl_internal_get__spread();

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__reverbZoneMix(float_t value);

  constexpr void __cordl_internal_set__spatialBlend(float_t value);

  constexpr void __cordl_internal_set__spread(float_t value);

  /// @brief Method .ctor, addr 0x26231e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_position, addr 0x26231c0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_reverbZoneMix, addr 0x26231cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_reverbZoneMix();

  /// @brief Method get_spatialBlend, addr 0x26231d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spatialBlend();

  /// @brief Method get_spread, addr 0x26231dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spread();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__AudioSourceParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__AudioSourceParams(__SongPreviewPlayer__AudioSourceParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__AudioSourceParams(__SongPreviewPlayer__AudioSourceParams const&) = delete;

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

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams, ____position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams, ____reverbZoneMix) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams, ____spatialBlend) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams, ____spread) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioSourceVolumeController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPreviewPlayer::AudioSourceVolumeController*
class CORDL_TYPE __SongPreviewPlayer__AudioSourceVolumeController : public ::System::Object {
public:
  // Declarations
  /// @brief Field <maxVolume>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVolume_k__BackingField, put = __cordl_internal_set__maxVolume_k__BackingField)) float_t _maxVolume_k__BackingField;

  /// @brief Field _volume, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Field audioSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSource, put = __cordl_internal_set_audioSource))::UnityW<::UnityEngine::AudioSource> audioSource;

  __declspec(property(get = get_maxVolume, put = set_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  static inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController* New_ctor(::UnityEngine::AudioSource* audioSource);

  constexpr float_t const& __cordl_internal_get__maxVolume_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__maxVolume_k__BackingField();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource();

  constexpr void __cordl_internal_set__maxVolume_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__volume(float_t value);

  constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  /// @brief Method .ctor, addr 0x2622658, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSource* audioSource);

  /// @brief Method get_maxVolume, addr 0x26231f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method get_volume, addr 0x26231ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method set_maxVolume, addr 0x26231fc, size 0x8, virtual false, abstract: false, final false
  inline void set_maxVolume(float_t value);

  /// @brief Method set_volume, addr 0x2622a94, size 0x34, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer__AudioSourceVolumeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceVolumeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer__AudioSourceVolumeController(__SongPreviewPlayer__AudioSourceVolumeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer__AudioSourceVolumeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer__AudioSourceVolumeController(__SongPreviewPlayer__AudioSourceVolumeController const&) = delete;

  /// @brief Field audioSource, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audioSource;

  /// @brief Field <maxVolume>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____maxVolume_k__BackingField;

  /// @brief Field _volume, offset: 0x1c, size: 0x4, def value: None
  float_t ____volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController, ___audioSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController, ____maxVolume_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController, ____volume) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CrossFadeAfterDelayCoroutine>d__28
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPreviewPlayer::<CrossFadeAfterDelayCoroutine>d__28*
class CORDL_TYPE __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::SongPreviewPlayer> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2623208, size 0xac, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26232b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26232bc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26232fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2623204, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x2622814, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPreviewPlayer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPreviewPlayer*
class CORDL_TYPE SongPreviewPlayer : public ::GlobalNamespace::AudioPlayerBase {
public:
  // Declarations
  using AudioSourceParams = ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams;

  using AudioSourceVolumeController = ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController;

  using InitData = ::GlobalNamespace::__SongPreviewPlayer__InitData;

  using _CrossFadeAfterDelayCoroutine_d__28 = ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;

  /// @brief Field _activeChannel, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__activeChannel, put = __cordl_internal_set__activeChannel)) int32_t _activeChannel;

  /// @brief Field _ambientVolumeScale, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__ambientVolumeScale, put = __cordl_internal_set__ambientVolumeScale)) float_t _ambientVolumeScale;

  /// @brief Field _audioManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _audioSourceControllers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSourceControllers,
                      put = __cordl_internal_set__audioSourceControllers))::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,
                                                                                   ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> _audioSourceControllers;

  /// @brief Field _audioSourcePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSourcePrefab, put = __cordl_internal_set__audioSourcePrefab))::UnityW<::UnityEngine::AudioSource> _audioSourcePrefab;

  /// @brief Field _channelToFadeOutCallbackDictionary, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__channelToFadeOutCallbackDictionary,
                      put = __cordl_internal_set__channelToFadeOutCallbackDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* _channelToFadeOutCallbackDictionary;

  /// @brief Field _channelsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__channelsCount, put = __cordl_internal_set__channelsCount)) int32_t _channelsCount;

  /// @brief Field _crossFadeToAnotherSongSpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__crossFadeToAnotherSongSpeed, put = __cordl_internal_set__crossFadeToAnotherSongSpeed)) float_t _crossFadeToAnotherSongSpeed;

  /// @brief Field _crossFadeToDefaultSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__crossFadeToDefaultSpeed, put = __cordl_internal_set__crossFadeToDefaultSpeed)) float_t _crossFadeToDefaultSpeed;

  /// @brief Field _defaultAudioClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAudioClip, put = __cordl_internal_set__defaultAudioClip))::UnityW<::UnityEngine::AudioClip> _defaultAudioClip;

  /// @brief Field _defaultAudioSourceParams, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAudioSourceParams,
                      put = __cordl_internal_set__defaultAudioSourceParams))::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* _defaultAudioSourceParams;

  /// @brief Field _fadeInSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInSpeed, put = __cordl_internal_set__fadeInSpeed)) float_t _fadeInSpeed;

  /// @brief Field _fadeSpeed, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeSpeed, put = __cordl_internal_set__fadeSpeed)) float_t _fadeSpeed;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__SongPreviewPlayer__InitData* _initData;

  /// @brief Field _isActiveChannelPaused, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__isActiveChannelPaused, put = __cordl_internal_set__isActiveChannelPaused)) bool _isActiveChannelPaused;

  /// @brief Field _othersAudioSourceParams, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__othersAudioSourceParams,
                      put = __cordl_internal_set__othersAudioSourceParams))::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* _othersAudioSourceParams;

  /// @brief Field _timeToDefaultAudioTransition, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToDefaultAudioTransition, put = __cordl_internal_set__timeToDefaultAudioTransition)) float_t _timeToDefaultAudioTransition;

  /// @brief Field _transitionAfterDelay, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__transitionAfterDelay, put = __cordl_internal_set__transitionAfterDelay)) bool _transitionAfterDelay;

  /// @brief Field _volume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Field _volumeScale, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__volumeScale, put = __cordl_internal_set__volumeScale)) float_t _volumeScale;

  __declspec(property(get = get_activeAudioClip))::UnityW<::UnityEngine::AudioClip> activeAudioClip;

  /// @brief Method Awake, addr 0x2622484, size 0x1d4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CrossFadeAfterDelayCoroutine, addr 0x262279c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CrossFadeAfterDelayCoroutine(float_t delay);

  /// @brief Method CrossfadeTo, addr 0x2622b50, size 0x27c, virtual false, abstract: false, final false
  inline void CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, bool isDefault, ::System::Action* onFadeOutCallback);

  /// @brief Method CrossfadeTo, addr 0x262301c, size 0xc, virtual false, abstract: false, final false
  inline void CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, ::System::Action* onFadeOutCallback);

  /// @brief Method CrossfadeToDefault, addr 0x2622dcc, size 0x170, virtual false, abstract: false, final false
  inline void CrossfadeToDefault();

  /// @brief Method CrossfadeToNewDefault, addr 0x2622f3c, size 0xe0, virtual false, abstract: false, final false
  inline void CrossfadeToNewDefault(::UnityEngine::AudioClip* audioClip);

  /// @brief Method FadeOut, addr 0x262310c, size 0x1c, virtual true, abstract: false, final false
  inline void FadeOut(float_t duration);

  static inline ::GlobalNamespace::SongPreviewPlayer* New_ctor();

  /// @brief Method OnDisable, addr 0x262283c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26226a8, size 0xf4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PauseCurrentChannel, addr 0x2623028, size 0x74, virtual true, abstract: false, final false
  inline void PauseCurrentChannel();

  /// @brief Method ReportChannelDidFadeOut, addr 0x2622ac8, size 0x88, virtual false, abstract: false, final false
  inline void ReportChannelDidFadeOut(int32_t channel);

  /// @brief Method Start, addr 0x2622688, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnPauseCurrentChannel, addr 0x262309c, size 0x70, virtual true, abstract: false, final false
  inline void UnPauseCurrentChannel();

  /// @brief Method Update, addr 0x2622910, size 0x184, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__activeChannel() const;

  constexpr int32_t& __cordl_internal_get__activeChannel();

  constexpr float_t const& __cordl_internal_get__ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get__ambientVolumeScale();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> const&
  __cordl_internal_get__audioSourceControllers() const;

  constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>&
  __cordl_internal_get__audioSourceControllers();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSourcePrefab() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSourcePrefab();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*& __cordl_internal_get__channelToFadeOutCallbackDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*> const& __cordl_internal_get__channelToFadeOutCallbackDictionary() const;

  constexpr int32_t const& __cordl_internal_get__channelsCount() const;

  constexpr int32_t& __cordl_internal_get__channelsCount();

  constexpr float_t const& __cordl_internal_get__crossFadeToAnotherSongSpeed() const;

  constexpr float_t& __cordl_internal_get__crossFadeToAnotherSongSpeed();

  constexpr float_t const& __cordl_internal_get__crossFadeToDefaultSpeed() const;

  constexpr float_t& __cordl_internal_get__crossFadeToDefaultSpeed();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__defaultAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__defaultAudioClip();

  constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& __cordl_internal_get__defaultAudioSourceParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const& __cordl_internal_get__defaultAudioSourceParams() const;

  constexpr float_t const& __cordl_internal_get__fadeInSpeed() const;

  constexpr float_t& __cordl_internal_get__fadeInSpeed();

  constexpr float_t const& __cordl_internal_get__fadeSpeed() const;

  constexpr float_t& __cordl_internal_get__fadeSpeed();

  constexpr ::GlobalNamespace::__SongPreviewPlayer__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__InitData*> const& __cordl_internal_get__initData() const;

  constexpr bool const& __cordl_internal_get__isActiveChannelPaused() const;

  constexpr bool& __cordl_internal_get__isActiveChannelPaused();

  constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& __cordl_internal_get__othersAudioSourceParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const& __cordl_internal_get__othersAudioSourceParams() const;

  constexpr float_t const& __cordl_internal_get__timeToDefaultAudioTransition() const;

  constexpr float_t& __cordl_internal_get__timeToDefaultAudioTransition();

  constexpr bool const& __cordl_internal_get__transitionAfterDelay() const;

  constexpr bool& __cordl_internal_get__transitionAfterDelay();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr float_t const& __cordl_internal_get__volumeScale() const;

  constexpr float_t& __cordl_internal_get__volumeScale();

  constexpr void __cordl_internal_set__activeChannel(int32_t value);

  constexpr void __cordl_internal_set__ambientVolumeScale(float_t value);

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__audioSourceControllers(
      ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> value);

  constexpr void __cordl_internal_set__audioSourcePrefab(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__channelToFadeOutCallbackDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* value);

  constexpr void __cordl_internal_set__channelsCount(int32_t value);

  constexpr void __cordl_internal_set__crossFadeToAnotherSongSpeed(float_t value);

  constexpr void __cordl_internal_set__crossFadeToDefaultSpeed(float_t value);

  constexpr void __cordl_internal_set__defaultAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__defaultAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value);

  constexpr void __cordl_internal_set__fadeInSpeed(float_t value);

  constexpr void __cordl_internal_set__fadeSpeed(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__SongPreviewPlayer__InitData* value);

  constexpr void __cordl_internal_set__isActiveChannelPaused(bool value);

  constexpr void __cordl_internal_set__othersAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value);

  constexpr void __cordl_internal_set__timeToDefaultAudioTransition(float_t value);

  constexpr void __cordl_internal_set__transitionAfterDelay(bool value);

  constexpr void __cordl_internal_set__volume(float_t value);

  constexpr void __cordl_internal_set__volumeScale(float_t value);

  /// @brief Method .ctor, addr 0x2623128, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeAudioClip, addr 0x2622430, size 0x54, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_activeAudioClip();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPreviewPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPreviewPlayer(SongPreviewPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPreviewPlayer(SongPreviewPlayer const&) = delete;

  /// @brief Field _channelsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____channelsCount;

  /// @brief Field _audioSourcePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSourcePrefab;

  /// @brief Field _defaultAudioClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____defaultAudioClip;

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
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

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

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____channelsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____audioSourcePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____defaultAudioClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____crossFadeToAnotherSongSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____crossFadeToDefaultSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____fadeInSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____defaultAudioSourceParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____othersAudioSourceParams) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____initData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____audioManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____audioSourceControllers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____activeChannel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____timeToDefaultAudioTransition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____transitionAfterDelay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____volumeScale) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____fadeSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____ambientVolumeScale) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____isActiveChannelPaused) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPreviewPlayer, ____channelToFadeOutCallbackDictionary) == 0x88, "Offset mismatch!");

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
