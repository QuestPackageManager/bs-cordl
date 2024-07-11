#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/Audio.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Audio)
namespace BGLib::SaveDataCore {
class ISerializableSaveData;
}
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class Audio;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::Audio);
// Type: BeatSaber.GameSettings::Audio
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::Audio*
class CORDL_TYPE Audio : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ambientVolumeScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ambientVolumeScale, put = __cordl_internal_set__ambientVolumeScale)) float_t _ambientVolumeScale;

  /// @brief Field _audioLatency, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__audioLatency, put = __cordl_internal_set__audioLatency)) float_t _audioLatency;

  /// @brief Field <isDirty>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty_k__BackingField, put = __cordl_internal_set__isDirty_k__BackingField)) bool _isDirty_k__BackingField;

  /// @brief Field _overrideAudioLatency, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideAudioLatency, put = __cordl_internal_set__overrideAudioLatency)) bool _overrideAudioLatency;

  /// @brief Field _volume, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  __declspec(property(get = get_ambientVolumeScale, put = set_ambientVolumeScale)) float_t ambientVolumeScale;

  __declspec(property(put = set_audioLatency)) float_t audioLatency;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_overrideAudioLatency, put = set_overrideAudioLatency)) bool overrideAudioLatency;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept;

  /// @brief Method GetAudioLatency, addr 0x106e800, size 0x4c, virtual false, abstract: false, final false
  inline float_t GetAudioLatency(::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettingsHandler);

  static inline ::BeatSaber::GameSettings::Audio* New_ctor();

  constexpr float_t const& __cordl_internal_get__ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get__ambientVolumeScale();

  constexpr float_t const& __cordl_internal_get__audioLatency() const;

  constexpr float_t& __cordl_internal_get__audioLatency();

  constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDirty_k__BackingField();

  constexpr bool const& __cordl_internal_get__overrideAudioLatency() const;

  constexpr bool& __cordl_internal_get__overrideAudioLatency();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr void __cordl_internal_set__ambientVolumeScale(float_t value);

  constexpr void __cordl_internal_set__audioLatency(float_t value);

  constexpr void __cordl_internal_set__isDirty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overrideAudioLatency(bool value);

  constexpr void __cordl_internal_set__volume(float_t value);

  /// @brief Method .ctor, addr 0x106e84c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ambientVolumeScale, addr 0x106e7f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ambientVolumeScale();

  /// @brief Method get_isDirty, addr 0x106e7d4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isDirty();

  /// @brief Method get_overrideAudioLatency, addr 0x106e7f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideAudioLatency();

  /// @brief Method get_volume, addr 0x106e7e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
  constexpr ::BGLib::SaveDataCore::ISerializableSaveData* i___BGLib__SaveDataCore__ISerializableSaveData() noexcept;

  /// @brief Method set_ambientVolumeScale, addr 0x106e5fc, size 0x10, virtual false, abstract: false, final false
  inline void set_ambientVolumeScale(float_t value);

  /// @brief Method set_audioLatency, addr 0x106e620, size 0x10, virtual false, abstract: false, final false
  inline void set_audioLatency(float_t value);

  /// @brief Method set_isDirty, addr 0x106e7dc, size 0xc, virtual true, abstract: false, final true
  inline void set_isDirty(bool value);

  /// @brief Method set_overrideAudioLatency, addr 0x106e60c, size 0x14, virtual false, abstract: false, final false
  inline void set_overrideAudioLatency(bool value);

  /// @brief Method set_volume, addr 0x106e5ec, size 0x10, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Audio();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Audio", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Audio(Audio&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Audio", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Audio(Audio const&) = delete;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDirty_k__BackingField;

  /// @brief Field _volume, offset: 0x14, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _ambientVolumeScale, offset: 0x18, size: 0x4, def value: None
  float_t ____ambientVolumeScale;

  /// @brief Field _overrideAudioLatency, offset: 0x1c, size: 0x1, def value: None
  bool ____overrideAudioLatency;

  /// @brief Field _audioLatency, offset: 0x20, size: 0x4, def value: None
  float_t ____audioLatency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::Audio, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Audio, ____isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Audio, ____volume) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Audio, ____ambientVolumeScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Audio, ____overrideAudioLatency) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Audio, ____audioLatency) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::Audio);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::Audio*, "BeatSaber.GameSettings", "Audio");
