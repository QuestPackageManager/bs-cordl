#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolLauncher)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Config;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace GlobalNamespace {
class PerformanceVisualizer;
}
namespace GlobalNamespace {
class PerformanceRecorder;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceToolLauncher;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Config;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceToolLauncher);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__Assets);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__Config);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig);
// Type: ::Assets
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5948))
// CS Name: ::PerformanceToolLauncher::Assets
struct CORDL_TYPE __PerformanceToolLauncher__Assets {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "visualizer", ty: "::GlobalNamespace::PerformanceVisualizer*", modifiers: "", def_value: None }, CppParam { name: "recorder", ty:
  // "::GlobalNamespace::PerformanceRecorder*", modifiers: "", def_value: None }]
  constexpr __PerformanceToolLauncher__Assets(::GlobalNamespace::PerformanceVisualizer* visualizer, ::GlobalNamespace::PerformanceRecorder* recorder) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher__Assets();

  /// @brief Field visualizer, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceVisualizer* visualizer;

  /// @brief Field recorder, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceRecorder* recorder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Config
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5949))
// CS Name: ::PerformanceToolLauncher::Config
struct CORDL_TYPE __PerformanceToolLauncher__Config {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "enableRecording", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }, CppParam { name: "enableFpsVisualization", ty:
  // "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }, CppParam { name: "enableMemoryVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }]
  constexpr __PerformanceToolLauncher__Config(::GlobalNamespace::BoolSO* enableRecording, ::GlobalNamespace::BoolSO* enableFpsVisualization,
                                              ::GlobalNamespace::BoolSO* enableMemoryVisualization) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher__Config();

  /// @brief Field enableRecording, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* enableRecording;

  /// @brief Field enableFpsVisualization, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* enableFpsVisualization;

  /// @brief Field enableMemoryVisualization, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* enableMemoryVisualization;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__Config, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OverrideConfig
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5950))
// CS Name: ::PerformanceToolLauncher::OverrideConfig
struct CORDL_TYPE __PerformanceToolLauncher__OverrideConfig {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault))::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig kDefault;

  static inline void setStaticF_kDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig value);

  static inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig getStaticF_kDefault();

  // Ctor Parameters [CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "minFpsWindow", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __PerformanceToolLauncher__OverrideConfig(bool enableRecording, float_t minFpsWindow) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceToolLauncher__OverrideConfig();

  /// @brief Field enableRecording, offset: 0x0, size: 0x1, def value: None
  bool enableRecording;

  /// @brief Field minFpsWindow, offset: 0x4, size: 0x4, def value: None
  float_t minFpsWindow;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PerformanceToolLauncher
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5949)), TypeDefinitionIndex(TypeDefinitionIndex(5948))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5951))
// CS Name: ::PerformanceToolLauncher*
class CORDL_TYPE PerformanceToolLauncher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OverrideConfig = ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig;

  using Config = ::GlobalNamespace::__PerformanceToolLauncher__Config;

  using Assets = ::GlobalNamespace::__PerformanceToolLauncher__Assets;

  /// @brief Field _assets, offset 0x18, size 0x10
  __declspec(property(get = __get__assets, put = __set__assets))::GlobalNamespace::__PerformanceToolLauncher__Assets _assets;

  /// @brief Field _config, offset 0x28, size 0x18
  __declspec(property(get = __get__config, put = __set__config))::GlobalNamespace::__PerformanceToolLauncher__Config _config;

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& __get__assets();

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& __get__assets() const;

  constexpr void __set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets value);

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config& __get__config();

  constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config const& __get__config() const;

  constexpr void __set__config(::GlobalNamespace::__PerformanceToolLauncher__Config value);

  /// @brief Method Initialize addr 0x2304c94 size 0x27c virtual false final false
  inline void Initialize(::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::IGamePause* gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                         ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> overrideConfig);

  static inline ::GlobalNamespace::PerformanceToolLauncher* New_ctor();

  /// @brief Method .ctor addr 0x2304f10 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceToolLauncher(PerformanceToolLauncher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceToolLauncher(PerformanceToolLauncher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncher();

public:
  /// @brief Field _assets, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::__PerformanceToolLauncher__Assets ____assets;

  /// @brief Field _config, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::__PerformanceToolLauncher__Config ____config;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceToolLauncher, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceToolLauncher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceToolLauncher*, "", "PerformanceToolLauncher");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__Assets, "", "PerformanceToolLauncher/Assets");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__Config, "", "PerformanceToolLauncher/Config");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "", "PerformanceToolLauncher/OverrideConfig");
