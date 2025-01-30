#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataModel)
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
struct PlayerDataModel__UndoUnsavedChangesAsync_d__11;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerDataModel__UndoUnsavedChangesAsync_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModel);
MARK_VAL_T(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerDataModel/<UndoUnsavedChangesAsync>d__11
struct CORDL_TYPE PlayerDataModel__UndoUnsavedChangesAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f6be0, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f6e08, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModel__UndoUnsavedChangesAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: None }]
  constexpr PlayerDataModel__UndoUnsavedChangesAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::UnityW<::GlobalNamespace::PlayerDataModel> __4__this,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13230 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPlayerDataModel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDataModel
class CORDL_TYPE PlayerDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UndoUnsavedChangesAsync_d__11 = ::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11;

  /// @brief Field _playerData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData)) ::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _playerDataFileModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileModel, put = __cordl_internal_set__playerDataFileModel)) ::GlobalNamespace::PlayerDataFileModel* _playerDataFileModel;

  __declspec(property(get = get_playerData)) ::GlobalNamespace::PlayerData* playerData;

  __declspec(property(get = get_playerDataFileModel)) ::GlobalNamespace::PlayerDataFileModel* playerDataFileModel;

  /// @brief Convert operator to "::GlobalNamespace::IPlayerDataModel"
  constexpr operator ::GlobalNamespace::IPlayerDataModel*() noexcept;

  /// @brief Method Inject, addr 0x26f6a00, size 0x28, virtual false, abstract: false, final false
  inline void Inject(::StringW playerDataJsonString, ::GlobalNamespace::PlayerDataFileModel* playerDataFileModel);

  static inline ::GlobalNamespace::PlayerDataModel* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x26f6a28, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDisable, addr 0x26f6a54, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ResetData, addr 0x26f6ad4, size 0x24, virtual false, abstract: false, final false
  inline void ResetData();

  /// @brief Method Save, addr 0x26f6a34, size 0x20, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method SaveAsync, addr 0x26f6bb8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method UndoUnsavedChangesAsync, addr 0x26f6af8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UndoUnsavedChangesAsync();

  constexpr ::GlobalNamespace::PlayerData* const& __cordl_internal_get__playerData() const;

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::GlobalNamespace::PlayerDataFileModel* const& __cordl_internal_get__playerDataFileModel() const;

  constexpr ::GlobalNamespace::PlayerDataFileModel*& __cordl_internal_get__playerDataFileModel();

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value);

  /// @brief Method .ctor, addr 0x26f6bd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playerData, addr 0x26f69f8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerData* get_playerData();

  /// @brief Method get_playerDataFileModel, addr 0x26f69f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerDataFileModel* get_playerDataFileModel();

  /// @brief Convert to "::GlobalNamespace::IPlayerDataModel"
  constexpr ::GlobalNamespace::IPlayerDataModel* i___GlobalNamespace__IPlayerDataModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataModel(PlayerDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataModel(PlayerDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13231 };

  /// @brief Field kPlayerDataSaveInjectID offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerDataSaveInjectID{ u"SavedPlayerData" };

  /// @brief Field _playerData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _playerDataFileModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* ____playerDataFileModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerDataFileModel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__11, "", "PlayerDataModel/<UndoUnsavedChangesAsync>d__11");
