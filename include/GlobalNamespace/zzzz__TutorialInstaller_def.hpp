#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialInstaller)
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class TutorialSceneSetupData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialInstaller);
// Type: ::TutorialInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialInstaller*
class CORDL_TYPE TutorialInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _audioClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip))::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _effectPoolsManualInstaller, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__effectPoolsManualInstaller,
                      put = __cordl_internal_set__effectPoolsManualInstaller))::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> _effectPoolsManualInstaller;

  /// @brief Field _playerHeightDetectorPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightDetectorPrefab,
                      put = __cordl_internal_set__playerHeightDetectorPrefab))::UnityW<::GlobalNamespace::PlayerHeightDetector> _playerHeightDetectorPrefab;

  /// @brief Field _sceneSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::TutorialSceneSetupData* _sceneSetupData;

  /// @brief Field _songBPM, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__songBPM, put = __cordl_internal_set__songBPM)) float_t _songBPM;

  /// @brief Method InstallBindings, addr 0x275efa4, size 0xd34, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::TutorialInstaller* New_ctor();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& __cordl_internal_get__effectPoolsManualInstaller() const;

  constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& __cordl_internal_get__effectPoolsManualInstaller();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& __cordl_internal_get__playerHeightDetectorPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& __cordl_internal_get__playerHeightDetectorPrefab();

  constexpr ::GlobalNamespace::TutorialSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr float_t const& __cordl_internal_get__songBPM() const;

  constexpr float_t& __cordl_internal_get__songBPM();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value);

  constexpr void __cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::TutorialSceneSetupData* value);

  constexpr void __cordl_internal_set__songBPM(float_t value);

  /// @brief Method .ctor, addr 0x275fcd8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialInstaller(TutorialInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialInstaller(TutorialInstaller const&) = delete;

  /// @brief Field _audioClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  /// @brief Field _songBPM, offset: 0x28, size: 0x4, def value: None
  float_t ____songBPM;

  /// @brief Field _playerHeightDetectorPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeightDetector> ____playerHeightDetectorPrefab;

  /// @brief Field _effectPoolsManualInstaller, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> ____effectPoolsManualInstaller;

  /// @brief Field _sceneSetupData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialInstaller, ____audioClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialInstaller, ____songBPM) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialInstaller, ____playerHeightDetectorPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialInstaller, ____effectPoolsManualInstaller) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialInstaller, ____sceneSetupData) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialInstaller*, "", "TutorialInstaller");
