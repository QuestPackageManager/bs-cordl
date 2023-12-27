#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioManagerSO)
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioManagerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioManagerSO);
// Type: ::AudioManagerSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4047))
// CS Name: ::AudioManagerSO*
class CORDL_TYPE AudioManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _audioMixer, offset 0x18, size 0x8
  __declspec(property(get = __get__audioMixer, put = __set__audioMixer))::UnityEngine::Audio::AudioMixer* _audioMixer;

  /// @brief Field _spatializerPluginLatency, offset 0x20, size 0x4
  __declspec(property(get = __get__spatializerPluginLatency, put = __set__spatializerPluginLatency)) float_t _spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset 0x24, size 0x4
  __declspec(property(get = __get__spatializerSfxVolumeOffset, put = __set__spatializerSfxVolumeOffset)) float_t _spatializerSfxVolumeOffset;

  /// @brief Field _musicVolumeOffset, offset 0x28, size 0x4
  __declspec(property(get = __get__musicVolumeOffset, put = __set__musicVolumeOffset)) float_t _musicVolumeOffset;

  /// @brief Field _sfxVolumeOffset, offset 0x2c, size 0x4
  __declspec(property(get = __get__sfxVolumeOffset, put = __set__sfxVolumeOffset)) float_t _sfxVolumeOffset;

  /// @brief Field _sfxVolume, offset 0x30, size 0x4
  __declspec(property(get = __get__sfxVolume, put = __set__sfxVolume)) float_t _sfxVolume;

  /// @brief Field _sfxEnabled, offset 0x34, size 0x1
  __declspec(property(get = __get__sfxEnabled, put = __set__sfxEnabled)) bool _sfxEnabled;

  __declspec(property(get = get_sfxLatency)) float_t sfxLatency;

  __declspec(property(put = set_mainVolume)) float_t mainVolume;

  __declspec(property(put = set_musicVolume)) float_t musicVolume;

  __declspec(property(get = get_sfxVolume, put = set_sfxVolume)) float_t sfxVolume;

  __declspec(property(get = get_sfxEnabled, put = set_sfxEnabled)) bool sfxEnabled;

  __declspec(property(put = set_musicPitch)) float_t musicPitch;

  __declspec(property(put = set_musicSpeed)) float_t musicSpeed;

  constexpr ::UnityEngine::Audio::AudioMixer*& __get__audioMixer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Audio::AudioMixer*> const& __get__audioMixer() const;

  constexpr void __set__audioMixer(::UnityEngine::Audio::AudioMixer* value);

  constexpr float_t& __get__spatializerPluginLatency();

  constexpr float_t const& __get__spatializerPluginLatency() const;

  constexpr void __set__spatializerPluginLatency(float_t value);

  constexpr float_t& __get__spatializerSfxVolumeOffset();

  constexpr float_t const& __get__spatializerSfxVolumeOffset() const;

  constexpr void __set__spatializerSfxVolumeOffset(float_t value);

  constexpr float_t& __get__musicVolumeOffset();

  constexpr float_t const& __get__musicVolumeOffset() const;

  constexpr void __set__musicVolumeOffset(float_t value);

  constexpr float_t& __get__sfxVolumeOffset();

  constexpr float_t const& __get__sfxVolumeOffset() const;

  constexpr void __set__sfxVolumeOffset(float_t value);

  constexpr float_t& __get__sfxVolume();

  constexpr float_t const& __get__sfxVolume() const;

  constexpr void __set__sfxVolume(float_t value);

  constexpr bool& __get__sfxEnabled();

  constexpr bool const& __get__sfxEnabled() const;

  constexpr void __set__sfxEnabled(bool value);

  /// @brief Method get_sfxLatency addr 0x222b034 size 0x60 virtual false final false
  inline float_t get_sfxLatency();

  /// @brief Method Init addr 0x2226a84 size 0xa8 virtual false final false
  inline void Init();

  /// @brief Method set_mainVolume addr 0x2226b2c size 0x64 virtual false final false
  inline void set_mainVolume(float_t value);

  /// @brief Method set_musicVolume addr 0x222b094 size 0x68 virtual false final false
  inline void set_musicVolume(float_t value);

  /// @brief Method get_sfxVolume addr 0x222b0fc size 0x18 virtual false final false
  inline float_t get_sfxVolume();

  /// @brief Method set_sfxVolume addr 0x222b114 size 0x84 virtual false final false
  inline void set_sfxVolume(float_t value);

  /// @brief Method get_sfxEnabled addr 0x222b198 size 0x8 virtual false final false
  inline bool get_sfxEnabled();

  /// @brief Method set_sfxEnabled addr 0x222b1a0 size 0x20 virtual false final false
  inline void set_sfxEnabled(bool value);

  /// @brief Method set_musicPitch addr 0x222b1c0 size 0x100 virtual false final false
  inline void set_musicPitch(float_t value);

  /// @brief Method set_musicSpeed addr 0x222b2c0 size 0x64 virtual false final false
  inline void set_musicSpeed(float_t value);

  static inline ::GlobalNamespace::AudioManagerSO* New_ctor();

  /// @brief Method .ctor addr 0x222b324 size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManagerSO(AudioManagerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManagerSO(AudioManagerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManagerSO();

public:
  /// @brief Field _audioMixer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Audio::AudioMixer* ____audioMixer;

  /// @brief Field _spatializerPluginLatency, offset: 0x20, size: 0x4, def value: None
  float_t ____spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____spatializerSfxVolumeOffset;

  /// @brief Field _musicVolumeOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____musicVolumeOffset;

  /// @brief Field _sfxVolumeOffset, offset: 0x2c, size: 0x4, def value: None
  float_t ____sfxVolumeOffset;

  /// @brief Field _sfxVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____sfxVolume;

  /// @brief Field _sfxEnabled, offset: 0x34, size: 0x1, def value: None
  bool ____sfxEnabled;

  /// @brief Field kDefaultMusicVolume offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMusicVolume{ -4.0 };

  /// @brief Field kPreferredSpatializerPluginName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPreferredSpatializerPluginName{ u"Microsoft Spatializer" };

  /// @brief Field kSfxVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kSfxVolume{ u"SFXVolume" };

  /// @brief Field kMainVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainVolume{ u"MainVolume" };

  /// @brief Field kMusicVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicVolume{ u"MusicVolume" };

  /// @brief Field kMusicPitch offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPitch{ u"MusicPitch" };

  /// @brief Field kMusicSpeed offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicSpeed{ u"MusicSpeed" };

  /// @brief Field kMusicPitchShifterWet offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPitchShifterWet{ u"MusicPitchShifterWet" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManagerSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManagerSO*, "", "AudioManagerSO");
