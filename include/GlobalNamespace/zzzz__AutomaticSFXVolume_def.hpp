#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticSFXVolume)
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class AutomaticSFXVolumeParamsSO;
}
namespace GlobalNamespace {
class __AutomaticSFXVolume__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomaticSFXVolume;
}
namespace GlobalNamespace {
class __AutomaticSFXVolume__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutomaticSFXVolume);
MARK_REF_PTR_T(::GlobalNamespace::__AutomaticSFXVolume__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4000))
// CS Name: ::AutomaticSFXVolume::InitData*
class CORDL_TYPE __AutomaticSFXVolume__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field volumeOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeOffset, put = __cordl_internal_set_volumeOffset)) float_t volumeOffset;

  /// @brief Field maxVolume, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_maxVolume, put = __cordl_internal_set_maxVolume)) float_t maxVolume;

  /// @brief Field adaptiveSfx, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_adaptiveSfx, put = __cordl_internal_set_adaptiveSfx)) bool adaptiveSfx;

  constexpr float_t& __cordl_internal_get_volumeOffset();

  constexpr float_t const& __cordl_internal_get_volumeOffset() const;

  constexpr void __cordl_internal_set_volumeOffset(float_t value);

  constexpr float_t& __cordl_internal_get_maxVolume();

  constexpr float_t const& __cordl_internal_get_maxVolume() const;

  constexpr void __cordl_internal_set_maxVolume(float_t value);

  constexpr bool& __cordl_internal_get_adaptiveSfx();

  constexpr bool const& __cordl_internal_get_adaptiveSfx() const;

  constexpr void __cordl_internal_set_adaptiveSfx(bool value);

  static inline ::GlobalNamespace::__AutomaticSFXVolume__InitData* New_ctor(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume);

  /// @brief Method .ctor, addr 0x22b61d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume);

  // Ctor Parameters [CppParam { name: "", ty: "__AutomaticSFXVolume__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AutomaticSFXVolume__InitData(__AutomaticSFXVolume__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AutomaticSFXVolume__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AutomaticSFXVolume__InitData(__AutomaticSFXVolume__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AutomaticSFXVolume__InitData();

public:
  /// @brief Field volumeOffset, offset: 0x10, size: 0x4, def value: None
  float_t ___volumeOffset;

  /// @brief Field maxVolume, offset: 0x14, size: 0x4, def value: None
  float_t ___maxVolume;

  /// @brief Field adaptiveSfx, offset: 0x18, size: 0x1, def value: None
  bool ___adaptiveSfx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AutomaticSFXVolume__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutomaticSFXVolume__InitData, ___volumeOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutomaticSFXVolume__InitData, ___maxVolume) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AutomaticSFXVolume__InitData, ___adaptiveSfx) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AutomaticSFXVolume
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4001))
// CS Name: ::AutomaticSFXVolume*
class CORDL_TYPE AutomaticSFXVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__AutomaticSFXVolume__InitData;

  /// @brief Field _params, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params))::UnityW<::GlobalNamespace::AutomaticSFXVolumeParamsSO> _params;

  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__AutomaticSFXVolume__InitData* _initData;

  /// @brief Field _sampleRate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__sampleRate, put = __cordl_internal_set__sampleRate)) float_t _sampleRate;

  /// @brief Field _volume, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Field _envelope, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__envelope, put = __cordl_internal_set__envelope)) float_t _envelope;

  /// @brief Field _attackSamples, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__attackSamples, put = __cordl_internal_set__attackSamples)) float_t _attackSamples;

  /// @brief Field _releaseSamples, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__releaseSamples, put = __cordl_internal_set__releaseSamples)) float_t _releaseSamples;

  /// @brief Field _attackCoef, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__attackCoef, put = __cordl_internal_set__attackCoef)) float_t _attackCoef;

  /// @brief Field _releaseCoef, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__releaseCoef, put = __cordl_internal_set__releaseCoef)) float_t _releaseCoef;

  /// @brief Field _maxVolume, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVolume, put = __cordl_internal_set__maxVolume)) float_t _maxVolume;

  constexpr ::UnityW<::GlobalNamespace::AutomaticSFXVolumeParamsSO>& __cordl_internal_get__params();

  constexpr ::UnityW<::GlobalNamespace::AutomaticSFXVolumeParamsSO> const& __cordl_internal_get__params() const;

  constexpr void __cordl_internal_set__params(::UnityW<::GlobalNamespace::AutomaticSFXVolumeParamsSO> value);

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr ::GlobalNamespace::__AutomaticSFXVolume__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AutomaticSFXVolume__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__AutomaticSFXVolume__InitData* value);

  constexpr float_t& __cordl_internal_get__sampleRate();

  constexpr float_t const& __cordl_internal_get__sampleRate() const;

  constexpr void __cordl_internal_set__sampleRate(float_t value);

  constexpr float_t& __cordl_internal_get__volume();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr void __cordl_internal_set__volume(float_t value);

  constexpr float_t& __cordl_internal_get__envelope();

  constexpr float_t const& __cordl_internal_get__envelope() const;

  constexpr void __cordl_internal_set__envelope(float_t value);

  constexpr float_t& __cordl_internal_get__attackSamples();

  constexpr float_t const& __cordl_internal_get__attackSamples() const;

  constexpr void __cordl_internal_set__attackSamples(float_t value);

  constexpr float_t& __cordl_internal_get__releaseSamples();

  constexpr float_t const& __cordl_internal_get__releaseSamples() const;

  constexpr void __cordl_internal_set__releaseSamples(float_t value);

  constexpr float_t& __cordl_internal_get__attackCoef();

  constexpr float_t const& __cordl_internal_get__attackCoef() const;

  constexpr void __cordl_internal_set__attackCoef(float_t value);

  constexpr float_t& __cordl_internal_get__releaseCoef();

  constexpr float_t const& __cordl_internal_get__releaseCoef() const;

  constexpr void __cordl_internal_set__releaseCoef(float_t value);

  constexpr float_t& __cordl_internal_get__maxVolume();

  constexpr float_t const& __cordl_internal_get__maxVolume() const;

  constexpr void __cordl_internal_set__maxVolume(float_t value);

  /// @brief Method Start, addr 0x22b5f18, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x22b5f94, size 0x84, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x22b6018, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RecalculateParams, addr 0x22b5f1c, size 0x78, virtual false, abstract: false, final false
  inline void RecalculateParams();

  /// @brief Method OnAudioFilterRead, addr 0x22b601c, size 0x154, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method Update, addr 0x22b6170, size 0x4c, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::AutomaticSFXVolume* New_ctor();

  /// @brief Method .ctor, addr 0x22b61bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutomaticSFXVolume(AutomaticSFXVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutomaticSFXVolume(AutomaticSFXVolume const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticSFXVolume();

public:
  /// @brief Field _params, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AutomaticSFXVolumeParamsSO> ____params;

  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__AutomaticSFXVolume__InitData* ____initData;

  /// @brief Field _sampleRate, offset: 0x30, size: 0x4, def value: None
  float_t ____sampleRate;

  /// @brief Field _volume, offset: 0x34, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _envelope, offset: 0x38, size: 0x4, def value: None
  float_t ____envelope;

  /// @brief Field _attackSamples, offset: 0x3c, size: 0x4, def value: None
  float_t ____attackSamples;

  /// @brief Field _releaseSamples, offset: 0x40, size: 0x4, def value: None
  float_t ____releaseSamples;

  /// @brief Field _attackCoef, offset: 0x44, size: 0x4, def value: None
  float_t ____attackCoef;

  /// @brief Field _releaseCoef, offset: 0x48, size: 0x4, def value: None
  float_t ____releaseCoef;

  /// @brief Field _maxVolume, offset: 0x4c, size: 0x4, def value: None
  float_t ____maxVolume;

  /// @brief Field kBaseVolume offset 0xffffffff size 0x4
  static constexpr float_t kBaseVolume{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutomaticSFXVolume, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____params) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____sampleRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____volume) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____envelope) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____attackSamples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____releaseSamples) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____attackCoef) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____releaseCoef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolume, ____maxVolume) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
NEED_NO_BOX(::GlobalNamespace::__AutomaticSFXVolume__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AutomaticSFXVolume__InitData*, "", "AutomaticSFXVolume/InitData");
