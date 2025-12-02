#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BeatmapDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass0_0;
}
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass4_0;
}
namespace BeatmapLevelSaveDataVersion4 {
class AudioSaveData;
}
namespace BeatmapSaveDataVersion4 {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion4 {
class ChainBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader;
}
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass0_0;
}
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass1_0;
}
namespace BeatmapDataLoaderVersion4 {
class BeatmapDataLoader___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0);
// Dependencies BeatmapDifficulty, BeatmapLevelDataVersion, System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BeatmapDataLoader/<>c__DisplayClass0_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioDataJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioDataJson, put = __cordl_internal_set_audioDataJson)) ::StringW audioDataJson;

  /// @brief Field beatmapDifficulty, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapJson, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  /// @brief Field beatmapLevelDataVersion, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapLevelDataVersion, put = __cordl_internal_set_beatmapLevelDataVersion)) ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field defaultLightshowJson, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLightshowJson, put = __cordl_internal_set_defaultLightshowJson)) ::StringW defaultLightshowJson;

  /// @brief Field gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field lightEventConverter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lightEventConverter, put = __cordl_internal_set_lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter;

  /// @brief Field lightshowJson, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lightshowJson, put = __cordl_internal_set_lightshowJson)) ::StringW lightshowJson;

  /// @brief Field loadingForDesignatedEnvironment, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_loadingForDesignatedEnvironment, put = __cordl_internal_set_loadingForDesignatedEnvironment)) bool loadingForDesignatedEnvironment;

  /// @brief Field originalEnvironmentInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_originalEnvironmentInfo, put = __cordl_internal_set_originalEnvironmentInfo)) ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field targetEnvironmentInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_targetEnvironmentInfo, put = __cordl_internal_set_targetEnvironmentInfo)) ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo;

  static inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x363979c, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapData* _GetBeatmapDataFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_audioDataJson() const;

  constexpr ::StringW& __cordl_internal_get_audioDataJson();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& __cordl_internal_get_beatmapLevelDataVersion() const;

  constexpr ::GlobalNamespace::BeatmapLevelDataVersion& __cordl_internal_get_beatmapLevelDataVersion();

  constexpr ::StringW const& __cordl_internal_get_defaultLightshowJson() const;

  constexpr ::StringW& __cordl_internal_get_defaultLightshowJson();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& __cordl_internal_get_lightEventConverter() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get_lightEventConverter();

  constexpr ::StringW const& __cordl_internal_get_lightshowJson() const;

  constexpr ::StringW& __cordl_internal_get_lightshowJson();

  constexpr bool const& __cordl_internal_get_loadingForDesignatedEnvironment() const;

  constexpr bool& __cordl_internal_get_loadingForDesignatedEnvironment();

  constexpr ::GlobalNamespace::IEnvironmentInfo* const& __cordl_internal_get_originalEnvironmentInfo() const;

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_originalEnvironmentInfo();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::GlobalNamespace::IEnvironmentInfo* const& __cordl_internal_get_targetEnvironmentInfo() const;

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_targetEnvironmentInfo();

  constexpr void __cordl_internal_set_audioDataJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value);

  constexpr void __cordl_internal_set_defaultLightshowJson(::StringW value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set_lightshowJson(::StringW value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_originalEnvironmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_targetEnvironmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  /// @brief Method .ctor, addr 0x36362e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass0_0(BeatmapDataLoader___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass0_0(BeatmapDataLoader___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15380 };

  /// @brief Field audioDataJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___audioDataJson;

  /// @brief Field beatmapJson, offset: 0x18, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  /// @brief Field lightshowJson, offset: 0x20, size: 0x8, def value: None
  ::StringW ___lightshowJson;

  /// @brief Field defaultLightshowJson, offset: 0x28, size: 0x8, def value: None
  ::StringW ___defaultLightshowJson;

  /// @brief Field beatmapDifficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x34, size: 0x1, def value: None
  bool ___loadingForDesignatedEnvironment;

  /// @brief Field targetEnvironmentInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* ___targetEnvironmentInfo;

  /// @brief Field originalEnvironmentInfo, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* ___originalEnvironmentInfo;

  /// @brief Field beatmapLevelDataVersion, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion ___beatmapLevelDataVersion;

  /// @brief Field gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field lightEventConverter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* ___lightEventConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___audioDataJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___beatmapJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___lightshowJson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___defaultLightshowJson) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___beatmapDifficulty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___loadingForDesignatedEnvironment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___targetEnvironmentInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___originalEnvironmentInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___beatmapLevelDataVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___playerSpecificSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, ___lightEventConverter) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0, 0x68>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BeatmapDataLoader/<>c__DisplayClass1_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson)) ::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x36397e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x3636414, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass1_0(BeatmapDataLoader___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass1_0(BeatmapDataLoader___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15381 };

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0, ___beatmapJson) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BeatmapDataLoader/<>c__DisplayClass4_0
class CORDL_TYPE BeatmapDataLoader___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapSaveData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapSaveData, put = __cordl_internal_set_beatmapSaveData)) ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData;

  static inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJson>b__0, addr 0x36397ec, size 0x44, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapDataBasicInfoFromSaveDataJson_b__0(::BeatmapSaveDataVersion4::ChainBeatIndex* chainBeatIndex);

  constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData* const& __cordl_internal_get_beatmapSaveData() const;

  constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData*& __cordl_internal_get_beatmapSaveData();

  constexpr void __cordl_internal_set_beatmapSaveData(::BeatmapSaveDataVersion4::BeatmapSaveData* value);

  /// @brief Method .ctor, addr 0x3637e9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c__DisplayClass4_0(BeatmapDataLoader___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c__DisplayClass4_0(BeatmapDataLoader___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15382 };

  /// @brief Field beatmapSaveData, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion4::BeatmapSaveData* ___beatmapSaveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0, ___beatmapSaveData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0;

  using __c__DisplayClass4_0 = ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0;

  /// @brief Method ConvertBasicEvents, addr 0x3636b88, size 0x970, virtual false, abstract: false, final false
  static inline void ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                        ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                        ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method ConvertBeatmapObjects, addr 0x3637ea0, size 0x8dc, virtual false, abstract: false, final false
  static inline void ConvertBeatmapObjects(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData,
                                           ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method ConvertEventBoxGroups, addr 0x36374f8, size 0x808, virtual false, abstract: false, final false
  static inline void ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                           ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, bool ignoreColorEvents, bool ignoreRotationLoopCount);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x3637d00, size 0x19c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapDataJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x36362ec, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x36365e0, size 0x544, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(
      ::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
      ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, bool loadingForDesignatedEnvironment,
      ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x3636418, size 0x1c8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData*
  GetBeatmapDataFromSaveDataJson(::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                 bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
                                 ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                 ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x3636150, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
                                      ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method LoadLightshow, addr 0x3636b24, size 0x64, virtual false, abstract: false, final false
  static inline void LoadLightshow(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                   ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                   ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, bool ignoreColorEvents, bool ignoreRotationLoopCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapDataLoader*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader/<>c__DisplayClass0_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader/<>c__DisplayClass1_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader/<>c__DisplayClass4_0");
