#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SettingsApplicatorSO)
namespace BeatSaber::Settings {
struct Settings;
}
namespace BeatSaber::Settings {
struct WindowSettings;
}
namespace GlobalNamespace {
class AudioManager;
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
class IVRPlatformHelper;
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
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsApplicatorSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsApplicatorSO
class CORDL_TYPE SettingsApplicatorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::GlobalNamespace::AudioManager* _audioManager;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer, put = __cordl_internal_set__bloomPrePassEffectContainer)) ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>
      _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassGraphicsSettingsPresets,
                      put = __cordl_internal_set__bloomPrePassGraphicsSettingsPresets)) ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>
      _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _hapticFeedbackManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _mainEffectContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectGraphicsSettingsPresets,
                      put = __cordl_internal_set__mainEffectGraphicsSettingsPresets)) ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>
      _mainEffectGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer)) ::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets)) ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>
      _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _vrPlatformHelper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field roomTransformOffsetDidUpdateEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_roomTransformOffsetDidUpdateEvent, put = __cordl_internal_set_roomTransformOffsetDidUpdateEvent)) ::System::Action* roomTransformOffsetDidUpdateEvent;

  /// @brief Method ApplyGameSettings, addr 0x576d880, size 0x10c, virtual false, abstract: false, final false
  inline void ApplyGameSettings(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method ApplyGraphicSettings, addr 0x576d4f8, size 0x2f0, virtual true, abstract: false, final false
  inline void ApplyGraphicSettings(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType);

  /// @brief Method ApplyWindowSettings, addr 0x576db04, size 0x4, virtual true, abstract: false, final false
  inline void ApplyWindowSettings(::ByRef<::BeatSaber::Settings::WindowSettings> settings);

  static inline ::GlobalNamespace::SettingsApplicatorSO* New_ctor();

  /// @brief Method NotifyRoomTransformOffsetWasUpdated, addr 0x576dae8, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyRoomTransformOffsetWasUpdated();

  constexpr ::GlobalNamespace::AudioManager* const& __cordl_internal_get__audioManager() const;

  constexpr ::GlobalNamespace::AudioManager*& __cordl_internal_get__audioManager();

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

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_roomTransformOffsetDidUpdateEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_roomTransformOffsetDidUpdateEvent();

  constexpr void __cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value);

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_roomTransformOffsetDidUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x576d80c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_roomTransformOffsetDidUpdateEvent, addr 0x576d990, size 0xac, virtual false, abstract: false, final false
  inline void add_roomTransformOffsetDidUpdateEvent(::System::Action* value);

  /// @brief Method remove_roomTransformOffsetDidUpdateEvent, addr 0x576da3c, size 0xac, virtual false, abstract: false, final false
  inline void remove_roomTransformOffsetDidUpdateEvent(::System::Action* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6745 };

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
  ::GlobalNamespace::AudioManager* ____audioManager;

  /// @brief Field _vrPlatformHelper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field roomTransformOffsetDidUpdateEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___roomTransformOffsetDidUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mirrorRendererGraphicsSettingsPresets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mainEffectGraphicsSettingsPresets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____bloomPrePassGraphicsSettingsPresets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mirrorRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____mainEffectContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____bloomPrePassEffectContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____hapticFeedbackManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____audioManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ____vrPlatformHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsApplicatorSO, ___roomTransformOffsetDidUpdateEvent) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsApplicatorSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsApplicatorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsApplicatorSO*, "", "SettingsApplicatorSO");
