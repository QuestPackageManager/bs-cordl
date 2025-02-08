#pragma once
// IWYU pragma private; include "GlobalNamespace/AdaptiveSfxVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveSfxVolume)
namespace GlobalNamespace {
class AdaptiveSfxVolume_InitData;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class MomentaryLoudnessBuffer;
}
namespace GlobalNamespace {
class MomentaryLoudnessHistory;
}
namespace LufsMetering {
class LufsMeter;
}
// Forward declare root types
namespace GlobalNamespace {
class AdaptiveSfxVolume;
}
namespace GlobalNamespace {
class AdaptiveSfxVolume_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AdaptiveSfxVolume);
MARK_REF_PTR_T(::GlobalNamespace::AdaptiveSfxVolume_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdaptiveSfxVolume/InitData
class CORDL_TYPE AdaptiveSfxVolume_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field adaptiveSfx, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_adaptiveSfx, put = __cordl_internal_set_adaptiveSfx)) bool adaptiveSfx;

  /// @brief Field frequency, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_frequency, put = __cordl_internal_set_frequency)) int32_t frequency;

  /// @brief Field userSettingsVolumeOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_userSettingsVolumeOffset, put = __cordl_internal_set_userSettingsVolumeOffset)) float_t userSettingsVolumeOffset;

  static inline ::GlobalNamespace::AdaptiveSfxVolume_InitData* New_ctor(float_t userSettingsVolumeOffset, bool adaptiveSfx, int32_t frequency);

  constexpr bool const& __cordl_internal_get_adaptiveSfx() const;

  constexpr bool& __cordl_internal_get_adaptiveSfx();

  constexpr int32_t const& __cordl_internal_get_frequency() const;

  constexpr int32_t& __cordl_internal_get_frequency();

  constexpr float_t const& __cordl_internal_get_userSettingsVolumeOffset() const;

  constexpr float_t& __cordl_internal_get_userSettingsVolumeOffset();

  constexpr void __cordl_internal_set_adaptiveSfx(bool value);

  constexpr void __cordl_internal_set_frequency(int32_t value);

  constexpr void __cordl_internal_set_userSettingsVolumeOffset(float_t value);

  /// @brief Method .ctor, addr 0x3ad3290, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t userSettingsVolumeOffset, bool adaptiveSfx, int32_t frequency);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdaptiveSfxVolume_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveSfxVolume_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdaptiveSfxVolume_InitData(AdaptiveSfxVolume_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveSfxVolume_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdaptiveSfxVolume_InitData(AdaptiveSfxVolume_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3987 };

  /// @brief Field userSettingsVolumeOffset, offset: 0x10, size: 0x4, def value: None
  float_t ___userSettingsVolumeOffset;

  /// @brief Field adaptiveSfx, offset: 0x14, size: 0x1, def value: None
  bool ___adaptiveSfx;

  /// @brief Field frequency, offset: 0x18, size: 0x4, def value: None
  int32_t ___frequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume_InitData, ___userSettingsVolumeOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume_InitData, ___adaptiveSfx) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume_InitData, ___frequency) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdaptiveSfxVolume_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdaptiveSfxVolume
class CORDL_TYPE AdaptiveSfxVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::AdaptiveSfxVolume_InitData;

  /// @brief Field _audioManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _buffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::GlobalNamespace::MomentaryLoudnessBuffer* _buffer;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::AdaptiveSfxVolume_InitData* _initData;

  /// @brief Field _loudnessHistory, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__loudnessHistory, put = __cordl_internal_set__loudnessHistory)) ::GlobalNamespace::MomentaryLoudnessHistory* _loudnessHistory;

  /// @brief Field _lufsMeter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lufsMeter, put = __cordl_internal_set__lufsMeter)) ::LufsMetering::LufsMeter* _lufsMeter;

  /// @brief Field _minThreshold, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minThreshold, put = __cordl_internal_set__minThreshold)) float_t _minThreshold;

  /// @brief Method ApplyLoudness, addr 0x3ad315c, size 0x30, virtual false, abstract: false, final false
  inline void ApplyLoudness(float_t songLoudness);

  static inline ::GlobalNamespace::AdaptiveSfxVolume* New_ctor();

  /// @brief Method OnAudioFilterRead, addr 0x3ad2dc8, size 0x174, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method OnDisable, addr 0x3ad2d3c, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Start, addr 0x3ad2c68, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ad30a8, size 0x34, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::GlobalNamespace::MomentaryLoudnessBuffer* const& __cordl_internal_get__buffer() const;

  constexpr ::GlobalNamespace::MomentaryLoudnessBuffer*& __cordl_internal_get__buffer();

  constexpr ::GlobalNamespace::AdaptiveSfxVolume_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::AdaptiveSfxVolume_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::MomentaryLoudnessHistory* const& __cordl_internal_get__loudnessHistory() const;

  constexpr ::GlobalNamespace::MomentaryLoudnessHistory*& __cordl_internal_get__loudnessHistory();

  constexpr ::LufsMetering::LufsMeter* const& __cordl_internal_get__lufsMeter() const;

  constexpr ::LufsMetering::LufsMeter*& __cordl_internal_get__lufsMeter();

  constexpr float_t const& __cordl_internal_get__minThreshold() const;

  constexpr float_t& __cordl_internal_get__minThreshold();

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__buffer(::GlobalNamespace::MomentaryLoudnessBuffer* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::AdaptiveSfxVolume_InitData* value);

  constexpr void __cordl_internal_set__loudnessHistory(::GlobalNamespace::MomentaryLoudnessHistory* value);

  constexpr void __cordl_internal_set__lufsMeter(::LufsMetering::LufsMeter* value);

  constexpr void __cordl_internal_set__minThreshold(float_t value);

  /// @brief Method .ctor, addr 0x3ad318c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdaptiveSfxVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveSfxVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdaptiveSfxVolume(AdaptiveSfxVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdaptiveSfxVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdaptiveSfxVolume(AdaptiveSfxVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3988 };

  /// @brief Field kAverageLoudnessFrames offset 0xffffffff size 0x4
  static constexpr int32_t kAverageLoudnessFrames{ static_cast<int32_t>(0xc) };

  /// @brief Field kReadingsPerBuffer offset 0xffffffff size 0x4
  static constexpr int32_t kReadingsPerBuffer{ static_cast<int32_t>(0x4) };

  /// @brief Field _audioManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AdaptiveSfxVolume_InitData* ____initData;

  /// @brief Field _minThreshold, offset: 0x30, size: 0x4, def value: None
  float_t ____minThreshold;

  /// @brief Field _buffer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MomentaryLoudnessBuffer* ____buffer;

  /// @brief Field _lufsMeter, offset: 0x40, size: 0x8, def value: None
  ::LufsMetering::LufsMeter* ____lufsMeter;

  /// @brief Field _loudnessHistory, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MomentaryLoudnessHistory* ____loudnessHistory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____audioManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____minThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____lufsMeter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdaptiveSfxVolume, ____loudnessHistory) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AdaptiveSfxVolume, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AdaptiveSfxVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdaptiveSfxVolume*, "", "AdaptiveSfxVolume");
NEED_NO_BOX(::GlobalNamespace::AdaptiveSfxVolume_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AdaptiveSfxVolume_InitData*, "", "AdaptiveSfxVolume/InitData");
