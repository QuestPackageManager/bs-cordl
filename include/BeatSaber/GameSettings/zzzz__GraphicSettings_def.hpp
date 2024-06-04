#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/GraphicSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__WindowMode_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphicSettings)
namespace BeatSaber::GameSettings {
struct WindowMode;
}
namespace BeatSaber::PerformancePresets {
class CustomPerformancePreset;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class GraphicSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::GraphicSettings);
// Type: BeatSaber.GameSettings::GraphicSettings
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::GraphicSettings*
class CORDL_TYPE GraphicSettings : public ::BGLib::SaveDataCore::VersionableSaveData {
public:
  // Declarations
  /// @brief Field _customPreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__customPreset, put = __cordl_internal_set__customPreset))::BeatSaber::PerformancePresets::CustomPerformancePreset* _customPreset;

  /// @brief Field _performancePresetKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__performancePresetKey, put = __cordl_internal_set__performancePresetKey))::StringW _performancePresetKey;

  /// @brief Field _windowMode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__windowMode, put = __cordl_internal_set__windowMode))::BeatSaber::GameSettings::WindowMode _windowMode;

  /// @brief Field _windowResolution, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get__windowResolution, put = __cordl_internal_set__windowResolution))::UnityEngine::Vector2Int _windowResolution;

  __declspec(property(get = get_customPreset, put = set_customPreset))::BeatSaber::PerformancePresets::CustomPerformancePreset* customPreset;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_performancePresetKey, put = set_performancePresetKey))::StringW performancePresetKey;

  __declspec(property(get = get_windowMode, put = set_windowMode))::BeatSaber::GameSettings::WindowMode windowMode;

  __declspec(property(get = get_windowResolution, put = set_windowResolution))::UnityEngine::Vector2Int windowResolution;

  static inline ::BeatSaber::GameSettings::GraphicSettings* New_ctor();

  constexpr ::BeatSaber::PerformancePresets::CustomPerformancePreset*& __cordl_internal_get__customPreset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::CustomPerformancePreset*> const& __cordl_internal_get__customPreset() const;

  constexpr ::StringW const& __cordl_internal_get__performancePresetKey() const;

  constexpr ::StringW& __cordl_internal_get__performancePresetKey();

  constexpr ::BeatSaber::GameSettings::WindowMode const& __cordl_internal_get__windowMode() const;

  constexpr ::BeatSaber::GameSettings::WindowMode& __cordl_internal_get__windowMode();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__windowResolution() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__windowResolution();

  constexpr void __cordl_internal_set__customPreset(::BeatSaber::PerformancePresets::CustomPerformancePreset* value);

  constexpr void __cordl_internal_set__performancePresetKey(::StringW value);

  constexpr void __cordl_internal_set__windowMode(::BeatSaber::GameSettings::WindowMode value);

  constexpr void __cordl_internal_set__windowResolution(::UnityEngine::Vector2Int value);

  /// @brief Method .ctor, addr 0x10656dc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customPreset, addr 0x1065694, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::PerformancePresets::CustomPerformancePreset* get_customPreset();

  /// @brief Method get_isDirty, addr 0x1065624, size 0x34, virtual true, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method get_performancePresetKey, addr 0x106567c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_performancePresetKey();

  /// @brief Method get_windowMode, addr 0x10656ac, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::WindowMode get_windowMode();

  /// @brief Method get_windowResolution, addr 0x10656c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_windowResolution();

  /// @brief Method set_customPreset, addr 0x106569c, size 0x10, virtual false, abstract: false, final false
  inline void set_customPreset(::BeatSaber::PerformancePresets::CustomPerformancePreset* value);

  /// @brief Method set_isDirty, addr 0x1065658, size 0x24, virtual true, abstract: false, final false
  inline void set_isDirty(bool value);

  /// @brief Method set_performancePresetKey, addr 0x1065684, size 0x10, virtual false, abstract: false, final false
  inline void set_performancePresetKey(::StringW value);

  /// @brief Method set_windowMode, addr 0x10656b4, size 0x10, virtual false, abstract: false, final false
  inline void set_windowMode(::BeatSaber::GameSettings::WindowMode value);

  /// @brief Method set_windowResolution, addr 0x10656cc, size 0x10, virtual false, abstract: false, final false
  inline void set_windowResolution(::UnityEngine::Vector2Int value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettings(GraphicSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettings(GraphicSettings const&) = delete;

  /// @brief Field _performancePresetKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____performancePresetKey;

  /// @brief Field _customPreset, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::CustomPerformancePreset* ____customPreset;

  /// @brief Field _windowMode, offset: 0x30, size: 0x4, def value: None
  ::BeatSaber::GameSettings::WindowMode ____windowMode;

  /// @brief Field _windowResolution, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____windowResolution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::GraphicSettings, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettings, ____performancePresetKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettings, ____customPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettings, ____windowMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettings, ____windowResolution) == 0x34, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::GraphicSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::GraphicSettings*, "BeatSaber.GameSettings", "GraphicSettings");
