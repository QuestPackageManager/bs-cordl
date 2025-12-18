#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SceneNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneNames)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class SceneNames;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::SceneNames);
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.SceneNames
class CORDL_TYPE SceneNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field kAllSceneNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kAllSceneNames, put = setStaticF_kAllSceneNames)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* kAllSceneNames;

  /// @brief Field kScenesThatShouldDisableRootObjects, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kScenesThatShouldDisableRootObjects,
                      put = setStaticF_kScenesThatShouldDisableRootObjects)) ::System::Collections::Generic::HashSet_1<::StringW>* kScenesThatShouldDisableRootObjects;

  /// @brief Method ShouldDisableRootObjects, addr 0x31b2178, size 0xc8, virtual false, abstract: false, final false
  static inline bool ShouldDisableRootObjects(::StringW sceneName);

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF_kAllSceneNames();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_kScenesThatShouldDisableRootObjects();

  static inline void setStaticF_kAllSceneNames(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline void setStaticF_kScenesThatShouldDisableRootObjects(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneNames(SceneNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneNames(SceneNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22755 };

  /// @brief Field kCreditsSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kCreditsSceneName{ u"Credits" };

  /// @brief Field kEventsTestSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kEventsTestSceneName{ u"EventsTest" };

  /// @brief Field kGameCoreSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameCoreSceneName{ u"GameCore" };

  /// @brief Field kGameInitSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameInitSceneName{ u"GameInit" };

  /// @brief Field kGameLoaderSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameLoaderSceneName{ u"GameLoader" };

  /// @brief Field kHealthWarningSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kHealthWarningSceneName{ u"HealthWarning" };

  /// @brief Field kMainMenuSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainMenuSceneName{ u"MainMenu" };

  /// @brief Field kMissionGameplaySceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissionGameplaySceneName{ u"MissionGameplay" };

  /// @brief Field kMultiplayerEnvironmentSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerEnvironmentSceneName{ u"MultiplayerEnvironment" };

  /// @brief Field kMultiplayerGameplaySceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerGameplaySceneName{ u"MultiplayerGameplay" };

  /// @brief Field kRecordingToolSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolSceneName{ u"RecordingTool" };

  /// @brief Field kShaderWarmUpSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kShaderWarmUpSceneName{ u"ShaderWarmup" };

  /// @brief Field kStandardGameplaySceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardGameplaySceneName{ u"StandardGameplay" };

  /// @brief Field kStartupErrorSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kStartupErrorSceneName{ u"StartupError" };

  /// @brief Field kTheFirstEnvironmentSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTheFirstEnvironmentSceneName{ u"DefaultEnvironment" };

  /// @brief Field kTutorialEnvironmentSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTutorialEnvironmentSceneName{ u"TutorialEnvironment" };

  /// @brief Field kTutorialSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTutorialSceneName{ u"Tutorial" };

  /// @brief Field kWaypointsTestSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kWaypointsTestSceneName{ u"WaypointsTest" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::SceneNames, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::SceneNames);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::SceneNames*, "BeatSaber.Destinations", "SceneNames");
