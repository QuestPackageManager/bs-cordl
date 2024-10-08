#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceToolLauncher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolLauncher)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace GlobalNamespace {
class PerformanceRecorder;
}
namespace GlobalNamespace {
class PerformanceVisualizer;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class SongController;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace GlobalNamespace {
class __PerformanceToolLauncher____c__DisplayClass4_0;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceToolLauncher;
}
namespace GlobalNamespace {
class __PerformanceToolLauncher____c__DisplayClass4_0;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceToolLauncher);
MARK_REF_PTR_T(::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__Assets);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig);
// Type: ::Assets
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceToolLauncher::Assets
struct CORDL_TYPE __PerformanceToolLauncher__Assets {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher__Assets();

  // Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: None }, CppParam { name: "recorder", ty:
  // "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: None }]
  constexpr __PerformanceToolLauncher__Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer, ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept;

  /// @brief Field visualizer, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer;

  /// @brief Field recorder, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5103 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher__Assets, visualizer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher__Assets, recorder) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OverrideConfig
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceToolLauncher::OverrideConfig
struct CORDL_TYPE __PerformanceToolLauncher__OverrideConfig {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig kDefault;

  static inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig getStaticF_kDefault();

  static inline void setStaticF_kDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher__OverrideConfig();

  // Ctor Parameters [CppParam { name: "enableAutoplay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PerformanceToolLauncher__OverrideConfig(bool enableAutoplay, bool enableRecording) noexcept;

  /// @brief Field enableAutoplay, offset: 0x0, size: 0x1, def value: None
  bool enableAutoplay;

  /// @brief Field enableRecording, offset: 0x1, size: 0x1, def value: None
  bool enableRecording;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5104 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, 0x2>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, enableAutoplay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, enableRecording) == 0x1, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceToolLauncher::<>c__DisplayClass4_0*
class CORDL_TYPE __PerformanceToolLauncher____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field recorder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_recorder, put = __cordl_internal_set_recorder)) ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder;

  /// @brief Field songController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_songController, put = __cordl_internal_set_songController)) ::UnityW<::GlobalNamespace::SongController> songController;

  static inline ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0* New_ctor();

  /// @brief Method <Run>g__HandleSongControllerSongDidFinish|1, addr 0x3ab1f64, size 0xa4, virtual false, abstract: false, final false
  inline void _Run_g__HandleSongControllerSongDidFinish_1();

  /// @brief Method <Run>g__HandleSongControllerSongDidStart|0, addr 0x3ab1ec0, size 0xa4, virtual false, abstract: false, final false
  inline void _Run_g__HandleSongControllerSongDidStart_0();

  constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& __cordl_internal_get_recorder() const;

  constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& __cordl_internal_get_recorder();

  constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get_songController() const;

  constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get_songController();

  constexpr void __cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value);

  constexpr void __cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value);

  /// @brief Method .ctor, addr 0x3ab1e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PerformanceToolLauncher____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PerformanceToolLauncher____c__DisplayClass4_0(__PerformanceToolLauncher____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PerformanceToolLauncher____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PerformanceToolLauncher____c__DisplayClass4_0(__PerformanceToolLauncher____c__DisplayClass4_0 const&) = delete;

  /// @brief Field songController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongController> ___songController;

  /// @brief Field recorder, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceRecorder> ___recorder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5105 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0, ___songController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0, ___recorder) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PerformanceToolLauncher
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceToolLauncher*
class CORDL_TYPE PerformanceToolLauncher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Assets = ::GlobalNamespace::__PerformanceToolLauncher__Assets;

  using OverrideConfig = ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0;

  /// @brief Field _assets, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__assets, put = __cordl_internal_set__assets)) ::GlobalNamespace::__PerformanceToolLauncher__Assets _assets;

  /// @brief Method Initialize, addr 0x3ab1ab8, size 0x2a4, virtual false, abstract: false, final false
  inline void Initialize(::Zenject::SceneContext* sceneContext, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                         ::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::SongController* songController, ::GlobalNamespace::IGamePause* gamePause,
                         ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData, ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> overrideConfig);

  static inline ::GlobalNamespace::PerformanceToolLauncher* New_ctor();

  /// @brief Method Run, addr 0x3ab1d5c, size 0x108, virtual false, abstract: false, final false
  static inline void Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController);

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& __cordl_internal_get__assets() const;

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& __cordl_internal_get__assets();

  constexpr void __cordl_internal_set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets value);

  /// @brief Method .ctor, addr 0x3ab1e6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceToolLauncher(PerformanceToolLauncher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceToolLauncher(PerformanceToolLauncher const&) = delete;

  /// @brief Field _assets, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::__PerformanceToolLauncher__Assets ____assets;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceToolLauncher, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher, ____assets) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceToolLauncher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceToolLauncher*, "", "PerformanceToolLauncher");
NEED_NO_BOX(::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*, "", "PerformanceToolLauncher/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__Assets, "", "PerformanceToolLauncher/Assets");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "", "PerformanceToolLauncher/OverrideConfig");
