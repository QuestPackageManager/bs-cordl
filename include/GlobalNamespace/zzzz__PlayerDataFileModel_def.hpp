#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class PlayerData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace GlobalNamespace {
struct __PlayerDataFileModel___LoadAsync_d__13;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
struct __PlayerDataFileModel___LoadAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataFileModel);
MARK_VAL_T(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13);
// Type: ::<LoadAsync>d__13
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerDataFileModel::<LoadAsync>d__13
struct CORDL_TYPE __PlayerDataFileModel___LoadAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14efb2c, size 0x29c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14efdc8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataFileModel___LoadAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlayerDataFileModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
  // def_value: None }]
  constexpr __PlayerDataFileModel___LoadAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder,
                                                    ::GlobalNamespace::PlayerDataFileModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDataFileModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataFileModel*
class CORDL_TYPE PlayerDataFileModel : public ::System::Object {
public:
  // Declarations
  using _LoadAsync_d__13 = ::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _colorSchemesSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings, put = __cordl_internal_set__colorSchemesSettings))::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _environmentsListModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel))::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _eulaUpdateVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__eulaUpdateVersion, put = setStaticF__eulaUpdateVersion))::System::Version* _eulaUpdateVersion;

  /// @brief Field _fileStorage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _lastVersionWithoutArcsOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lastVersionWithoutArcsOptions, put = setStaticF__lastVersionWithoutArcsOptions))::System::Version* _lastVersionWithoutArcsOptions;

  /// @brief Field _playerDataFileManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileManager, put = __cordl_internal_set__playerDataFileManager))::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> _playerDataFileManager;

  /// @brief Method CreateDefaultOverrideEnvironmentSettings, addr 0x14ef044, size 0xa8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* CreateDefaultOverrideEnvironmentSettings();

  /// @brief Method CreateDefaultPlayerData, addr 0x14ed084, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* CreateDefaultPlayerData();

  /// @brief Method GetBeatmapCharacteristicFromV_1_0_1LevelId, addr 0x14ef63c, size 0x3a0, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                                                ::StringW levelId);

  /// @brief Method GetEnvironmentInfoBySerializedName, addr 0x14efa44, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetEnvironmentInfoBySerializedName(::StringW environmentName);

  /// @brief Method GetLevelIdFromV_1_0_1LevelId, addr 0x14ef9dc, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetPlayerSaveData, addr 0x14eb8f8, size 0x1090, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSaveData* GetPlayerSaveData(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method Load, addr 0x14ecd58, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* Load();

  /// @brief Method LoadAsync, addr 0x14ecdd8, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* LoadAsync();

  /// @brief Method LoadCorrectedSongPackMask, addr 0x14ef0ec, size 0x94, virtual false, abstract: false, final false
  inline ::StringW LoadCorrectedSongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> songMaskPackBytes);

  /// @brief Method LoadFromCurrentVersion, addr 0x14edc70, size 0x10e0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData* playerSaveData);

  /// @brief Method LoadFromJSONString, addr 0x14ecec8, size 0x1bc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromJSONString(::StringW jsonString);

  /// @brief Method LoadFromVersionV1_0_1, addr 0x14ed140, size 0xb30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData);

  /// @brief Method LoadOrCreateFromJsonString, addr 0x14ecdb4, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* LoadOrCreateFromJsonString(::StringW jsonString);

  static inline ::GlobalNamespace::PlayerDataFileModel* New_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                                                                 ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                 ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  /// @brief Method Save, addr 0x14eb888, size 0x70, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SaveAsync, addr 0x14ec988, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::PlayerData* playerData);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __cordl_internal_get__colorSchemesSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& __cordl_internal_get__colorSchemesSettings() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& __cordl_internal_get__playerDataFileManager() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& __cordl_internal_get__playerDataFileManager();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value);

  /// @brief Method .ctor, addr 0x14eb838, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                    ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  static inline ::System::Version* getStaticF__eulaUpdateVersion();

  static inline ::System::Version* getStaticF__lastVersionWithoutArcsOptions();

  static inline void setStaticF__eulaUpdateVersion(::System::Version* value);

  static inline void setStaticF__lastVersionWithoutArcsOptions(::System::Version* value);

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

  /// @brief Field kPlayerDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerDataFileName{ u"PlayerData.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____playerDataFileManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____fileStorage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____beatmapCharacteristicCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____colorSchemesSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileModel, ____environmentsListModel) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileModel*, "", "PlayerDataFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13, "", "PlayerDataFileModel/<LoadAsync>d__13");
