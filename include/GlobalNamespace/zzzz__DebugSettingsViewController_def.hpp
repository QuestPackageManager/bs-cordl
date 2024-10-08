#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(DebugSettingsViewController)
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugSettingsViewController);
// Type: ::DebugSettingsViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugSettingsViewController*
class CORDL_TYPE DebugSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _fpsCounter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__fpsCounter, put = __cordl_internal_set__fpsCounter)) ::UnityW<::UnityEngine::UI::Toggle> _fpsCounter;

  /// @brief Field _fpsRecorder, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__fpsRecorder, put = __cordl_internal_set__fpsRecorder)) ::UnityW<::UnityEngine::UI::Toggle> _fpsRecorder;

  /// @brief Field _memoryTracker, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__memoryTracker, put = __cordl_internal_set__memoryTracker)) ::UnityW<::UnityEngine::UI::Toggle> _memoryTracker;

  /// @brief Field _settingsManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _showBeatmapLevelVersions, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__showBeatmapLevelVersions, put = __cordl_internal_set__showBeatmapLevelVersions)) ::UnityW<::UnityEngine::UI::Toggle> _showBeatmapLevelVersions;

  /// @brief Method DidActivate, addr 0x3baa998, size 0x1fc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3baab94, size 0x70, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleFpsCounterChanged, addr 0x3baac04, size 0x20, virtual false, abstract: false, final false
  inline void HandleFpsCounterChanged(bool newValue);

  /// @brief Method HandleFpsRecorderChanged, addr 0x3baac24, size 0x20, virtual false, abstract: false, final false
  inline void HandleFpsRecorderChanged(bool newValue);

  /// @brief Method HandleMemoryTrackerChanged, addr 0x3baac44, size 0x20, virtual false, abstract: false, final false
  inline void HandleMemoryTrackerChanged(bool newValue);

  /// @brief Method HandleShowBeatmapLevelVersionsChanged, addr 0x3baac64, size 0x20, virtual false, abstract: false, final false
  inline void HandleShowBeatmapLevelVersionsChanged(bool newValue);

  static inline ::GlobalNamespace::DebugSettingsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__fpsCounter() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__fpsCounter();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__fpsRecorder() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__fpsRecorder();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__memoryTracker() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__memoryTracker();

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__showBeatmapLevelVersions() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__showBeatmapLevelVersions();

  constexpr void __cordl_internal_set__fpsCounter(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__fpsRecorder(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__memoryTracker(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__showBeatmapLevelVersions(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x3baac84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugSettingsViewController(DebugSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugSettingsViewController(DebugSettingsViewController const&) = delete;

  /// @brief Field _fpsCounter, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____fpsCounter;

  /// @brief Field _fpsRecorder, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____fpsRecorder;

  /// @brief Field _memoryTracker, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____memoryTracker;

  /// @brief Field _showBeatmapLevelVersions, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____showBeatmapLevelVersions;

  /// @brief Field _settingsManager, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugSettingsViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSettingsViewController, ____fpsCounter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSettingsViewController, ____fpsRecorder) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSettingsViewController, ____memoryTracker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSettingsViewController, ____showBeatmapLevelVersions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSettingsViewController, ____settingsManager) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugSettingsViewController*, "", "DebugSettingsViewController");
