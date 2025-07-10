#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipAudioSourceHiLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoipAudioSourceHiLevel)
namespace Oculus::Platform {
class IVoipPCMSource;
}
namespace Oculus::Platform {
class VoipAudioSourceHiLevel_FilterReadDelegate;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipAudioSourceHiLevel;
}
namespace Oculus::Platform {
class VoipAudioSourceHiLevel_FilterReadDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::VoipAudioSourceHiLevel);
MARK_REF_PTR_T(::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate);
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
class CORDL_TYPE VoipAudioSourceHiLevel_FilterReadDelegate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> parent;

  /// @brief Field scratchBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_scratchBuffer, put = __cordl_internal_set_scratchBuffer)) ::ArrayW<float_t, ::Array<float_t>*> scratchBuffer;

  /// @brief Method Awake, addr 0x3f8e0cc, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate* New_ctor();

  /// @brief Method OnAudioFilterRead, addr 0x3f8e150, size 0x4e0, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> const& __cordl_internal_get_parent() const;

  constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel>& __cordl_internal_get_parent();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_scratchBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_scratchBuffer();

  constexpr void __cordl_internal_set_parent(::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> value);

  constexpr void __cordl_internal_set_scratchBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x3f8e630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipAudioSourceHiLevel_FilterReadDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel_FilterReadDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipAudioSourceHiLevel_FilterReadDelegate(VoipAudioSourceHiLevel_FilterReadDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel_FilterReadDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipAudioSourceHiLevel_FilterReadDelegate(VoipAudioSourceHiLevel_FilterReadDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15487 };

  /// @brief Field parent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> ___parent;

  /// @brief Field scratchBuffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___scratchBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate, ___scratchBuffer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.VoipAudioSourceHiLevel
class CORDL_TYPE VoipAudioSourceHiLevel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FilterReadDelegate = ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate;

  /// @brief Field audioSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSource, put = __cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource> audioSource;

  /// @brief Field audioSystemPlaybackFrequency, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_audioSystemPlaybackFrequency, put = setStaticF_audioSystemPlaybackFrequency)) int32_t audioSystemPlaybackFrequency;

  /// @brief Field initialPlaybackDelayMS, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_initialPlaybackDelayMS, put = __cordl_internal_set_initialPlaybackDelayMS)) int32_t initialPlaybackDelayMS;

  /// @brief Field pcmSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_pcmSource, put = __cordl_internal_set_pcmSource)) ::Oculus::Platform::IVoipPCMSource* pcmSource;

  /// @brief Field peakAmplitude, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_peakAmplitude, put = __cordl_internal_set_peakAmplitude)) float_t peakAmplitude;

  __declspec(property(put = set_senderID)) uint64_t senderID;

  /// @brief Field verboseLogging, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_verboseLogging, put = setStaticF_verboseLogging)) bool verboseLogging;

  /// @brief Method Awake, addr 0x3f8da54, size 0x2a4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreatePCMSource, addr 0x3f8dd14, size 0x58, virtual true, abstract: false, final false
  inline void CreatePCMSource();

  /// @brief Method MSToElements, addr 0x3f8dd74, size 0x68, virtual false, abstract: false, final false
  static inline int32_t MSToElements(int32_t ms);

  static inline ::Oculus::Platform::VoipAudioSourceHiLevel* New_ctor();

  /// @brief Method SampleRateToEnum, addr 0x3f8da10, size 0x44, virtual false, abstract: false, final false
  inline ::Oculus::Platform::VoipSampleRate SampleRateToEnum(int32_t rate);

  /// @brief Method Start, addr 0x3f8dcf8, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x3f8da0c, size 0x4, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Update, addr 0x3f8dddc, size 0x2e8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource();

  constexpr int32_t const& __cordl_internal_get_initialPlaybackDelayMS() const;

  constexpr int32_t& __cordl_internal_get_initialPlaybackDelayMS();

  constexpr ::Oculus::Platform::IVoipPCMSource* const& __cordl_internal_get_pcmSource() const;

  constexpr ::Oculus::Platform::IVoipPCMSource*& __cordl_internal_get_pcmSource();

  constexpr float_t const& __cordl_internal_get_peakAmplitude() const;

  constexpr float_t& __cordl_internal_get_peakAmplitude();

  constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_initialPlaybackDelayMS(int32_t value);

  constexpr void __cordl_internal_set_pcmSource(::Oculus::Platform::IVoipPCMSource* value);

  constexpr void __cordl_internal_set_peakAmplitude(float_t value);

  /// @brief Method .ctor, addr 0x3f8e0c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_audioSystemPlaybackFrequency();

  static inline bool getStaticF_verboseLogging();

  static inline void setStaticF_audioSystemPlaybackFrequency(int32_t value);

  static inline void setStaticF_verboseLogging(bool value);

  /// @brief Method set_senderID, addr 0x3f8d960, size 0xac, virtual false, abstract: false, final false
  inline void set_senderID(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipAudioSourceHiLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipAudioSourceHiLevel(VoipAudioSourceHiLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipAudioSourceHiLevel(VoipAudioSourceHiLevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15488 };

  /// @brief Field initialPlaybackDelayMS, offset: 0x20, size: 0x4, def value: None
  int32_t ___initialPlaybackDelayMS;

  /// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audioSource;

  /// @brief Field peakAmplitude, offset: 0x30, size: 0x4, def value: None
  float_t ___peakAmplitude;

  /// @brief Field pcmSource, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::IVoipPCMSource* ___pcmSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel, ___initialPlaybackDelayMS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel, ___peakAmplitude) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipAudioSourceHiLevel, ___pcmSource) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipAudioSourceHiLevel, 0x40>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::VoipAudioSourceHiLevel);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipAudioSourceHiLevel*, "Oculus.Platform", "VoipAudioSourceHiLevel");
NEED_NO_BOX(::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*, "Oculus.Platform", "VoipAudioSourceHiLevel/FilterReadDelegate");
