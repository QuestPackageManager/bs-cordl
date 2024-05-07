#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SettingsApplicatorSO)
namespace BeatSaber::GameSettings {
class MainSettings;
}
namespace BeatSaber::GameSettings {
struct WindowMode;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
struct SceneType;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsApplicatorSO);
// Type: ::SettingsApplicatorSO
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsApplicatorSO*
class CORDL_TYPE SettingsApplicatorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer,
                      put = __cordl_internal_set__bloomPrePassEffectContainer))::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassGraphicsSettingsPresets,
                      put = __cordl_internal_set__bloomPrePassGraphicsSettingsPresets))::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _hapticFeedbackManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _mainEffectContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer))::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectGraphicsSettingsPresets,
                      put = __cordl_internal_set__mainEffectGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> _mainEffectGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer))::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> _mirrorRendererGraphicsSettingsPresets;

  /// @brief Method ApplyMainSettings, addr 0x2696f2c, size 0x48, virtual false, abstract: false, final false
  inline void ApplyMainSettings(::BeatSaber::GameSettings::MainSettings* settings);

  /// @brief Method ApplyPerformancePreset, addr 0x2696ba8, size 0x20c, virtual true, abstract: false, final false
  inline void ApplyPerformancePreset(::BeatSaber::PerformancePresets::PerformancePreset* preset, ::GlobalNamespace::SceneType sceneType);

  /// @brief Method ApplyWindowSettings, addr 0x2696f7c, size 0x4, virtual true, abstract: false, final false
  inline void ApplyWindowSettings(::UnityEngine::Vector2Int resolution, ::BeatSaber::GameSettings::WindowMode windowMode);

  static inline ::GlobalNamespace::SettingsApplicatorSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& __cordl_internal_get__mainEffectGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& __cordl_internal_get__mainEffectGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets();

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  /// @brief Method .ctor, addr 0x2696dbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsApplicatorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsApplicatorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsApplicatorSO(SettingsApplicatorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsApplicatorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsApplicatorSO(SettingsApplicatorSO const&) = delete;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> ____mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> ____bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _hapticFeedbackManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _audioManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsApplicatorSO, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mirrorRendererGraphicsSettingsPresets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mainEffectGraphicsSettingsPresets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____bloomPrePassGraphicsSettingsPresets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mirrorRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mainEffectContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____bloomPrePassEffectContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____hapticFeedbackManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____audioManager) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsApplicatorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsApplicatorSO*, "", "SettingsApplicatorSO");
