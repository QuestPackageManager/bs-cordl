#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/QuestPerformanceSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__FoveatedRenderingLevel_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ProcessorPerformanceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuestPerformanceSettings)
namespace BeatSaber::PerformancePresets {
struct FoveatedRenderingLevel;
}
namespace BeatSaber::PerformancePresets {
struct ProcessorPerformanceLevel;
}
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class QuestPerformanceSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::QuestPerformanceSettings);
// Type: BeatSaber.PerformancePresets::QuestPerformanceSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::QuestPerformanceSettings*
class CORDL_TYPE QuestPerformanceSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cpuLevel, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__cpuLevel, put = __cordl_internal_set__cpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel _cpuLevel;

  /// @brief Field _dynamicFoveatedRenderingEnabled, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__dynamicFoveatedRenderingEnabled, put = __cordl_internal_set__dynamicFoveatedRenderingEnabled)) bool _dynamicFoveatedRenderingEnabled;

  /// @brief Field _eyeTrackedFoveatedRenderingEnabled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__eyeTrackedFoveatedRenderingEnabled, put = __cordl_internal_set__eyeTrackedFoveatedRenderingEnabled)) bool _eyeTrackedFoveatedRenderingEnabled;

  /// @brief Field _foveatedRenderingLevelGameplay, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__foveatedRenderingLevelGameplay,
                      put = __cordl_internal_set__foveatedRenderingLevelGameplay))::BeatSaber::PerformancePresets::FoveatedRenderingLevel _foveatedRenderingLevelGameplay;

  /// @brief Field _foveatedRenderingLevelMenu, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__foveatedRenderingLevelMenu,
                      put = __cordl_internal_set__foveatedRenderingLevelMenu))::BeatSaber::PerformancePresets::FoveatedRenderingLevel _foveatedRenderingLevelMenu;

  /// @brief Field _gpuLevel, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__gpuLevel, put = __cordl_internal_set__gpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel _gpuLevel;

  __declspec(property(get = get_cpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel cpuLevel;

  __declspec(property(get = get_dynamicFoveatedRenderingEnabled)) bool dynamicFoveatedRenderingEnabled;

  __declspec(property(get = get_eyeTrackedFoveatedRenderingEnabled)) bool eyeTrackedFoveatedRenderingEnabled;

  __declspec(property(get = get_foveatedRenderingLevelGameplay))::BeatSaber::PerformancePresets::FoveatedRenderingLevel foveatedRenderingLevelGameplay;

  __declspec(property(get = get_foveatedRenderingLevelMenu))::BeatSaber::PerformancePresets::FoveatedRenderingLevel foveatedRenderingLevelMenu;

  __declspec(property(get = get_gpuLevel))::BeatSaber::PerformancePresets::ProcessorPerformanceLevel gpuLevel;

  static inline ::BeatSaber::PerformancePresets::QuestPerformanceSettings* New_ctor();

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& __cordl_internal_get__cpuLevel() const;

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& __cordl_internal_get__cpuLevel();

  constexpr bool const& __cordl_internal_get__dynamicFoveatedRenderingEnabled() const;

  constexpr bool& __cordl_internal_get__dynamicFoveatedRenderingEnabled();

  constexpr bool const& __cordl_internal_get__eyeTrackedFoveatedRenderingEnabled() const;

  constexpr bool& __cordl_internal_get__eyeTrackedFoveatedRenderingEnabled();

  constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel const& __cordl_internal_get__foveatedRenderingLevelGameplay() const;

  constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel& __cordl_internal_get__foveatedRenderingLevelGameplay();

  constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel const& __cordl_internal_get__foveatedRenderingLevelMenu() const;

  constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel& __cordl_internal_get__foveatedRenderingLevelMenu();

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel const& __cordl_internal_get__gpuLevel() const;

  constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel& __cordl_internal_get__gpuLevel();

  constexpr void __cordl_internal_set__cpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value);

  constexpr void __cordl_internal_set__dynamicFoveatedRenderingEnabled(bool value);

  constexpr void __cordl_internal_set__eyeTrackedFoveatedRenderingEnabled(bool value);

  constexpr void __cordl_internal_set__foveatedRenderingLevelGameplay(::BeatSaber::PerformancePresets::FoveatedRenderingLevel value);

  constexpr void __cordl_internal_set__foveatedRenderingLevelMenu(::BeatSaber::PerformancePresets::FoveatedRenderingLevel value);

  constexpr void __cordl_internal_set__gpuLevel(::BeatSaber::PerformancePresets::ProcessorPerformanceLevel value);

  /// @brief Method .ctor, addr 0x1066f40, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cpuLevel, addr 0x1066f18, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel get_cpuLevel();

  /// @brief Method get_dynamicFoveatedRenderingEnabled, addr 0x1066f38, size 0x8, virtual false, abstract: false, final false
  inline bool get_dynamicFoveatedRenderingEnabled();

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0x1066f30, size 0x8, virtual false, abstract: false, final false
  inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method get_foveatedRenderingLevelGameplay, addr 0x1066f28, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::FoveatedRenderingLevel get_foveatedRenderingLevelGameplay();

  /// @brief Method get_foveatedRenderingLevelMenu, addr 0x1066f20, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::FoveatedRenderingLevel get_foveatedRenderingLevelMenu();

  /// @brief Method get_gpuLevel, addr 0x1066f10, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel get_gpuLevel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestPerformanceSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestPerformanceSettings(QuestPerformanceSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestPerformanceSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestPerformanceSettings(QuestPerformanceSettings const&) = delete;

  /// @brief Field _gpuLevel, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel ____gpuLevel;

  /// @brief Field _cpuLevel, offset: 0x14, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel ____cpuLevel;

  /// @brief Field _foveatedRenderingLevelMenu, offset: 0x18, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::FoveatedRenderingLevel ____foveatedRenderingLevelMenu;

  /// @brief Field _foveatedRenderingLevelGameplay, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::FoveatedRenderingLevel ____foveatedRenderingLevelGameplay;

  /// @brief Field _eyeTrackedFoveatedRenderingEnabled, offset: 0x20, size: 0x1, def value: None
  bool ____eyeTrackedFoveatedRenderingEnabled;

  /// @brief Field _dynamicFoveatedRenderingEnabled, offset: 0x21, size: 0x1, def value: None
  bool ____dynamicFoveatedRenderingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::QuestPerformanceSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____gpuLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____cpuLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____foveatedRenderingLevelMenu) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____foveatedRenderingLevelGameplay) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____eyeTrackedFoveatedRenderingEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::QuestPerformanceSettings, ____dynamicFoveatedRenderingEnabled) == 0x21, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::QuestPerformanceSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::QuestPerformanceSettings*, "BeatSaber.PerformancePresets", "QuestPerformanceSettings");
