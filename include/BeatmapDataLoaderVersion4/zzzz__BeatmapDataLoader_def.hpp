#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BeatmapDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace BeatmapDataLoaderVersion4 {
class __BeatmapDataLoader____c__DisplayClass0_0;
}
namespace BeatmapDataLoaderVersion4 {
class __BeatmapDataLoader____c__DisplayClass1_0;
}
namespace BeatmapLevelSaveDataVersion4 {
class AudioSaveData;
}
namespace BeatmapSaveDataVersion4 {
class BeatmapSaveData;
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
class __BeatmapDataLoader____c__DisplayClass0_0;
}
namespace BeatmapDataLoaderVersion4 {
class __BeatmapDataLoader____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapDataLoader);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioDataJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioDataJson, put = __cordl_internal_set_audioDataJson))::StringW audioDataJson;

  /// @brief Field beatmapDifficulty, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapJson, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson))::StringW beatmapJson;

  /// @brief Field beatmapLevelDataVersion, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapLevelDataVersion, put = __cordl_internal_set_beatmapLevelDataVersion))::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field defaultLightshowJson, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLightshowJson, put = __cordl_internal_set_defaultLightshowJson))::StringW defaultLightshowJson;

  /// @brief Field environmentInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo))::GlobalNamespace::IEnvironmentInfo* environmentInfo;

  /// @brief Field gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field lightshowJson, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lightshowJson, put = __cordl_internal_set_lightshowJson))::StringW lightshowJson;

  /// @brief Field loadingForDesignatedEnvironment, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_loadingForDesignatedEnvironment, put = __cordl_internal_set_loadingForDesignatedEnvironment)) bool loadingForDesignatedEnvironment;

  /// @brief Field playerSpecificSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field startBpm, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_startBpm, put = __cordl_internal_set_startBpm)) float_t startBpm;

  static inline ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0* New_ctor();

  /// @brief Method <GetBeatmapDataFromSaveDataJsonAsync>b__0, addr 0x1508a18, size 0x40, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::IEnvironmentInfo*& __cordl_internal_get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const& __cordl_internal_get_environmentInfo() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::StringW const& __cordl_internal_get_lightshowJson() const;

  constexpr ::StringW& __cordl_internal_get_lightshowJson();

  constexpr bool const& __cordl_internal_get_loadingForDesignatedEnvironment() const;

  constexpr bool& __cordl_internal_get_loadingForDesignatedEnvironment();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr float_t const& __cordl_internal_get_startBpm() const;

  constexpr float_t& __cordl_internal_get_startBpm();

  constexpr void __cordl_internal_set_audioDataJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  constexpr void __cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value);

  constexpr void __cordl_internal_set_defaultLightshowJson(::StringW value);

  constexpr void __cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_lightshowJson(::StringW value);

  constexpr void __cordl_internal_set_loadingForDesignatedEnvironment(bool value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x1505f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass0_0(__BeatmapDataLoader____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass0_0(__BeatmapDataLoader____c__DisplayClass0_0 const&) = delete;

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

  /// @brief Field startBpm, offset: 0x34, size: 0x4, def value: None
  float_t ___startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x38, size: 0x1, def value: None
  bool ___loadingForDesignatedEnvironment;

  /// @brief Field environmentInfo, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* ___environmentInfo;

  /// @brief Field beatmapLevelDataVersion, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion ___beatmapLevelDataVersion;

  /// @brief Field gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, 0x60>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___audioDataJson) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___beatmapJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___lightshowJson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___defaultLightshowJson) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___beatmapDifficulty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___startBpm) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___loadingForDesignatedEnvironment) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___environmentInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___beatmapLevelDataVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0, ___playerSpecificSettings) == 0x58, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoader::<>c__DisplayClass1_0*
class CORDL_TYPE __BeatmapDataLoader____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapJson, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapJson, put = __cordl_internal_set_beatmapJson))::StringW beatmapJson;

  static inline ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0* New_ctor();

  /// @brief Method <GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0, addr 0x1508a58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* _GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_beatmapJson() const;

  constexpr ::StringW& __cordl_internal_get_beatmapJson();

  constexpr void __cordl_internal_set_beatmapJson(::StringW value);

  /// @brief Method .ctor, addr 0x1506050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataLoader____c__DisplayClass1_0(__BeatmapDataLoader____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataLoader____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataLoader____c__DisplayClass1_0(__BeatmapDataLoader____c__DisplayClass1_0 const&) = delete;

  /// @brief Field beatmapJson, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapJson;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0, ___beatmapJson) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Type: BeatmapDataLoaderVersion4::BeatmapDataLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::BeatmapDataLoader*
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0;

  /// @brief Method ConvertBasicEvents, addr 0x15064a0, size 0x6d0, virtual false, abstract: false, final false
  static inline void ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                        ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  /// @brief Method ConvertBeatmapObjects, addr 0x1506ed4, size 0x98c, virtual false, abstract: false, final false
  static inline void ConvertBeatmapObjects(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData,
                                           ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  /// @brief Method ConvertEventBoxGroups, addr 0x1506b70, size 0x270, virtual false, abstract: false, final false
  static inline void ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJson, addr 0x1506de0, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapDataJson);

  /// @brief Method GetBeatmapDataBasicInfoFromSaveDataJsonAsync, addr 0x1505f60, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson);

  /// @brief Method GetBeatmapDataFromSaveData, addr 0x15061fc, size 0x264, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData,
                                                                           ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                           ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData,
                                                                           ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
                                                                           ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                                                           ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method GetBeatmapDataFromSaveDataJson, addr 0x1506058, size 0x1a4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveDataJson(::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson,
                                                                               ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
                                                                               ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                               ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method GetBeatmapDataFromSaveDataJsonAsync, addr 0x1505e00, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*
  GetBeatmapDataFromSaveDataJsonAsync(::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                      float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                      ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method LoadLightshow, addr 0x1506460, size 0x40, virtual false, abstract: false, final false
  static inline void LoadLightshow(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                   ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapDataLoader, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapDataLoader*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader/<>c__DisplayClass0_0");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*, "BeatmapDataLoaderVersion4", "BeatmapDataLoader/<>c__DisplayClass1_0");
