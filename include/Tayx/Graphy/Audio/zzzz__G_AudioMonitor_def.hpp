#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_AudioMonitor)
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AudioListener;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioMonitor);
// Type: Tayx.Graphy.Audio::G_AudioMonitor
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Audio {
// Is value type: false
// CS Name: ::Tayx.Graphy.Audio::G_AudioMonitor*
class CORDL_TYPE G_AudioMonitor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_MaxDB, put = set_MaxDB)) float_t MaxDB;

  __declspec(property(get = get_Spectrum, put = set_Spectrum))::ArrayW<float_t, ::Array<float_t>*> Spectrum;

  __declspec(property(get = get_SpectrumDataAvailable)) bool SpectrumDataAvailable;

  __declspec(property(get = get_SpectrumHighestValues, put = set_SpectrumHighestValues))::ArrayW<float_t, ::Array<float_t>*> SpectrumHighestValues;

  /// @brief Field <MaxDB>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxDB_k__BackingField, put = __cordl_internal_set__MaxDB_k__BackingField)) float_t _MaxDB_k__BackingField;

  /// @brief Field <SpectrumHighestValues>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__SpectrumHighestValues_k__BackingField,
                      put = __cordl_internal_set__SpectrumHighestValues_k__BackingField))::ArrayW<float_t, ::Array<float_t>*> _SpectrumHighestValues_k__BackingField;

  /// @brief Field <Spectrum>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Spectrum_k__BackingField, put = __cordl_internal_set__Spectrum_k__BackingField))::ArrayW<float_t, ::Array<float_t>*> _Spectrum_k__BackingField;

  /// @brief Field m_FFTWindow, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FFTWindow, put = __cordl_internal_set_m_FFTWindow))::UnityEngine::FFTWindow m_FFTWindow;

  /// @brief Field m_audioListener, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioListener, put = __cordl_internal_set_m_audioListener))::UnityW<::UnityEngine::AudioListener> m_audioListener;

  /// @brief Field m_findAudioListenerInCameraIfNull, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_findAudioListenerInCameraIfNull,
                      put = __cordl_internal_set_m_findAudioListenerInCameraIfNull))::Tayx::Graphy::__GraphyManager__LookForAudioListener m_findAudioListenerInCameraIfNull;

  /// @brief Field m_graphyManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager))::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_spectrumSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spectrumSize, put = __cordl_internal_set_m_spectrumSize)) int32_t m_spectrumSize;

  /// @brief Method Awake, addr 0x2af6eac, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FindAudioListener, addr 0x2af709c, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioListener> FindAudioListener();

  /// @brief Method Init, addr 0x2af0240, size 0x12c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioMonitor* New_ctor();

  /// @brief Method OnDestroy, addr 0x2af7150, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnSceneLoaded, addr 0x2af71f4, size 0x24, virtual false, abstract: false, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode);

  /// @brief Method Update, addr 0x2af6eb0, size 0x1ec, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x2af6bbc, size 0xd0, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr float_t const& __cordl_internal_get__MaxDB_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__MaxDB_k__BackingField();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__SpectrumHighestValues_k__BackingField() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__SpectrumHighestValues_k__BackingField();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__Spectrum_k__BackingField() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__Spectrum_k__BackingField();

  constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get_m_FFTWindow() const;

  constexpr ::UnityEngine::FFTWindow& __cordl_internal_get_m_FFTWindow();

  constexpr ::UnityW<::UnityEngine::AudioListener> const& __cordl_internal_get_m_audioListener() const;

  constexpr ::UnityW<::UnityEngine::AudioListener>& __cordl_internal_get_m_audioListener();

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& __cordl_internal_get_m_findAudioListenerInCameraIfNull() const;

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& __cordl_internal_get_m_findAudioListenerInCameraIfNull();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr int32_t const& __cordl_internal_get_m_spectrumSize() const;

  constexpr int32_t& __cordl_internal_get_m_spectrumSize();

  constexpr void __cordl_internal_set__MaxDB_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__SpectrumHighestValues_k__BackingField(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__Spectrum_k__BackingField(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_FFTWindow(::UnityEngine::FFTWindow value);

  constexpr void __cordl_internal_set_m_audioListener(::UnityW<::UnityEngine::AudioListener> value);

  constexpr void __cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_spectrumSize(int32_t value);

  /// @brief Method .ctor, addr 0x2af7218, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method dBNormalized, addr 0x2af6938, size 0x14, virtual false, abstract: false, final false
  inline float_t dBNormalized(float_t db);

  /// @brief Method get_MaxDB, addr 0x2af6e9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_MaxDB();

  /// @brief Method get_Spectrum, addr 0x2af6e7c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_Spectrum();

  /// @brief Method get_SpectrumDataAvailable, addr 0x2af60f0, size 0x60, virtual false, abstract: false, final false
  inline bool get_SpectrumDataAvailable();

  /// @brief Method get_SpectrumHighestValues, addr 0x2af6e8c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_SpectrumHighestValues();

  /// @brief Method lin2dB, addr 0x2af6908, size 0x30, virtual false, abstract: false, final false
  inline float_t lin2dB(float_t linear);

  /// @brief Method set_MaxDB, addr 0x2af6ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxDB(float_t value);

  /// @brief Method set_Spectrum, addr 0x2af6e84, size 0x8, virtual false, abstract: false, final false
  inline void set_Spectrum(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method set_SpectrumHighestValues, addr 0x2af6e94, size 0x8, virtual false, abstract: false, final false
  inline void set_SpectrumHighestValues(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioMonitor(G_AudioMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioMonitor(G_AudioMonitor const&) = delete;

  /// @brief Field m_graphyManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_audioListener, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioListener> ___m_audioListener;

  /// @brief Field m_findAudioListenerInCameraIfNull, offset: 0x28, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__LookForAudioListener ___m_findAudioListenerInCameraIfNull;

  /// @brief Field m_FFTWindow, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::FFTWindow ___m_FFTWindow;

  /// @brief Field m_spectrumSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_spectrumSize;

  /// @brief Field <Spectrum>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____Spectrum_k__BackingField;

  /// @brief Field <SpectrumHighestValues>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____SpectrumHighestValues_k__BackingField;

  /// @brief Field <MaxDB>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____MaxDB_k__BackingField;

  /// @brief Field m_refValue offset 0xffffffff size 0x4
  static constexpr float_t m_refValue{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioMonitor, 0x50>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ___m_graphyManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ___m_audioListener) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ___m_findAudioListenerInCameraIfNull) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ___m_FFTWindow) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ___m_spectrumSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ____Spectrum_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ____SpectrumHighestValues_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioMonitor, ____MaxDB_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioMonitor*, "Tayx.Graphy.Audio", "G_AudioMonitor");
