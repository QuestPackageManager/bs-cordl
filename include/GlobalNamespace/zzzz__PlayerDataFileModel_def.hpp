#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataFileModel)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct ColorSchemesSettings_ColorOverrideType;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
namespace GlobalNamespace {
struct PlayerDataFileModel__LoadAsStringAsync_d__35;
}
namespace GlobalNamespace {
struct PlayerDataFileModel__LoadAsync_d__21;
}
namespace GlobalNamespace {
class PlayerDataFileModel___c;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
namespace GlobalNamespace {
struct PlayerSaveData_ColorOverrideType;
}
namespace GlobalNamespace {
class PlayerSaveData_PromoCounterData;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
class PlayerDataFileModel___c;
}
namespace GlobalNamespace {
struct PlayerDataFileModel__LoadAsStringAsync_d__35;
}
namespace GlobalNamespace {
struct PlayerDataFileModel__LoadAsync_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataFileModel);
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataFileModel___c);
MARK_VAL_T(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35);
MARK_VAL_T(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDataFileModel/<>c
class CORDL_TYPE PlayerDataFileModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlayerDataFileModel___c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0,
                      put = setStaticF___9__19_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>* __9__19_0;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0,
                      put = setStaticF___9__24_0)) ::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>* __9__24_0;

  static inline ::GlobalNamespace::PlayerDataFileModel___c* New_ctor();

  /// @brief Method <GetPlayerSaveData>b__19_0, addr 0x364f5c0, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSaveData_PromoCounterData* _GetPlayerSaveData_b__19_0(::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t> pair);

  /// @brief Method <LoadFromCurrentVersion>b__24_0, addr 0x364f660, size 0x50, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::StringW, int32_t> _LoadFromCurrentVersion_b__24_0(::GlobalNamespace::PlayerSaveData_PromoCounterData* pc);

  /// @brief Method .ctor, addr 0x364f5bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerDataFileModel___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>* getStaticF___9__19_0();

  static inline ::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>* getStaticF___9__24_0();

  static inline void setStaticF___9(::GlobalNamespace::PlayerDataFileModel___c* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataFileModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataFileModel___c(PlayerDataFileModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataFileModel___c(PlayerDataFileModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15148 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerDataFileModel/<LoadAsStringAsync>d__35
struct CORDL_TYPE PlayerDataFileModel__LoadAsStringAsync_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x364f6b0, size 0x3cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x364fa7c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataFileModel__LoadAsStringAsync_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr PlayerDataFileModel__LoadAsStringAsync_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                         ::GlobalNamespace::IFileStorage* fileStorage, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15149 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field fileStorage, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, fileStorage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerDataFileModel/<LoadAsync>d__21
struct CORDL_TYPE PlayerDataFileModel__LoadAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x364fafc, size 0x29c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x364fd98, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataFileModel__LoadAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlayerDataFileModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
  // def_value: None }]
  constexpr PlayerDataFileModel__LoadAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder,
                                                 ::GlobalNamespace::PlayerDataFileModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies StoragePreference, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDataFileModel
class CORDL_TYPE PlayerDataFileModel : public ::System::Object {
public:
  // Declarations
  using _LoadAsStringAsync_d__35 = ::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35;

  using _LoadAsync_d__21 = ::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21;

  using __c = ::GlobalNamespace::PlayerDataFileModel___c;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _colorSchemesSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings, put = __cordl_internal_set__colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _environmentsListModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _eulaUpdateVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__eulaUpdateVersion, put = setStaticF__eulaUpdateVersion)) ::System::Version* _eulaUpdateVersion;

  /// @brief Field _fileStorage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _lastVersionWithoutArcsOptions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lastVersionWithoutArcsOptions, put = setStaticF__lastVersionWithoutArcsOptions)) ::System::Version* _lastVersionWithoutArcsOptions;

  /// @brief Field _playerDataFileManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileManager, put = __cordl_internal_set__playerDataFileManager)) ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>
      _playerDataFileManager;

  /// @brief Field _playerDataFileName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__playerDataFileName, put = setStaticF__playerDataFileName)) ::StringW _playerDataFileName;

  /// @brief Method ColorOverrideTypeFromSaveData, addr 0x364e868, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType ColorOverrideTypeFromSaveData(::GlobalNamespace::PlayerSaveData_ColorOverrideType c);

  /// @brief Method ColorOverrideTypeToSaveData, addr 0x364c6b4, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSaveData_ColorOverrideType ColorOverrideTypeToSaveData(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType c);

  /// @brief Method CreateDefaultOverrideEnvironmentSettings, addr 0x364e874, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* CreateDefaultOverrideEnvironmentSettings();

  /// @brief Method CreateDefaultPlayerData, addr 0x364cbb0, size 0xc8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* CreateDefaultPlayerData();

  /// @brief Method GetBeatmapCharacteristicFromV_1_0_1LevelId, addr 0x364eee4, size 0x39c, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                                                ::StringW levelId);

  /// @brief Method GetEnvironmentInfoBySerializedName, addr 0x364f300, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedName(::StringW environmentName);

  /// @brief Method GetLevelIdFromV_1_0_1LevelId, addr 0x364f280, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetPlayerSaveData, addr 0x364b418, size 0xf74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSaveData* GetPlayerSaveData(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method Init, addr 0x364b244, size 0x78, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method Load, addr 0x364c748, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* Load();

  /// @brief Method LoadAsString, addr 0x364c7b0, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW LoadAsString(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method LoadAsStringAsync, addr 0x364f318, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* LoadAsStringAsync(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method LoadAsync, addr 0x364c8fc, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* LoadAsync();

  /// @brief Method LoadCorrectedSongPackMask, addr 0x364e92c, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW LoadCorrectedSongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> songMaskPackBytes);

  /// @brief Method LoadFromCurrentVersion, addr 0x364d660, size 0x1060, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData* playerSaveData);

  /// @brief Method LoadFromJSONString, addr 0x364c9d8, size 0x1d8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromJSONString(::StringW jsonString);

  /// @brief Method LoadFromVersionV1_0_1, addr 0x364cc78, size 0x9e8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData);

  /// @brief Method LoadOrCreateFromJsonString, addr 0x364c8d8, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadOrCreateFromJsonString(::StringW jsonString);

  static inline ::GlobalNamespace::PlayerDataFileModel* New_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                                                                 ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                 ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  /// @brief Method Save, addr 0x364b2cc, size 0x14c, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SaveAsync, addr 0x364c38c, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method WipePlayerDataFiles, addr 0x364f3f4, size 0x7c, virtual false, abstract: false, final false
  static inline void WipePlayerDataFiles();

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::GlobalNamespace::ColorSchemesSettings* const& __cordl_internal_get__colorSchemesSettings() const;

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __cordl_internal_get__colorSchemesSettings();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& __cordl_internal_get__playerDataFileManager() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& __cordl_internal_get__playerDataFileManager();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value);

  /// @brief Method .ctor, addr 0x364b2bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                    ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  static inline ::System::Version* getStaticF__eulaUpdateVersion();

  static inline ::System::Version* getStaticF__lastVersionWithoutArcsOptions();

  static inline ::StringW getStaticF__playerDataFileName();

  /// @brief Method get_PlayerDataFileName, addr 0x364b158, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW get_PlayerDataFileName();

  static inline void setStaticF__eulaUpdateVersion(::System::Version* value);

  static inline void setStaticF__lastVersionWithoutArcsOptions(::System::Version* value);

  static inline void setStaticF__playerDataFileName(::StringW value);

  /// @brief Method set_PlayerDataFileName, addr 0x364b1b4, size 0x90, virtual false, abstract: false, final false
  static inline void set_PlayerDataFileName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataFileModel(PlayerDataFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataFileModel(PlayerDataFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15151 };

  /// @brief Field kOverrideStoragePreference value: I32(1)
  static ::GlobalNamespace::StoragePreference const kOverrideStoragePreference;

  /// @brief Field kPlayerDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerDataFileName{ u"PlayerData.dat" };

  /// @brief Field kStorageLoadPreference value: I32(0)
  static ::GlobalNamespace::StoragePreference const kStorageLoadPreference;

  /// @brief Field kStorageSavePreference value: I32(0)
  static ::GlobalNamespace::StoragePreference const kStorageSavePreference;

  /// @brief Field _playerDataFileManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> ____playerDataFileManager;

  /// @brief Field _fileStorage, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _colorSchemesSettings, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemesSettings* ____colorSchemesSettings;

  /// @brief Field _environmentsListModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____playerDataFileManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____fileStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____beatmapCharacteristicCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____colorSchemesSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____environmentsListModel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileModel, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileModel*, "", "PlayerDataFileModel");
NEED_NO_BOX(::GlobalNamespace::PlayerDataFileModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileModel___c*, "", "PlayerDataFileModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35, "", "PlayerDataFileModel/<LoadAsStringAsync>d__35");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21, "", "PlayerDataFileModel/<LoadAsync>d__21");
