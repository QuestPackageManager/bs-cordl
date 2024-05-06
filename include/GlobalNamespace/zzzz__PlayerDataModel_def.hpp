#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataModel)
namespace GlobalNamespace {
class IPlayerDataModel;
}
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
struct __PlayerDataModel___UndoUnsavedChangesAsync_d__11;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __PlayerDataModel___UndoUnsavedChangesAsync_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModel);
MARK_VAL_T(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11);
// Type: ::<UndoUnsavedChangesAsync>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerDataModel::<UndoUnsavedChangesAsync>d__11
struct CORDL_TYPE __PlayerDataModel___UndoUnsavedChangesAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14ea018, size 0x1d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14ea1ec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataModel___UndoUnsavedChangesAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: None }]
  constexpr __PlayerDataModel___UndoUnsavedChangesAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::UnityW<::GlobalNamespace::PlayerDataModel> __4__this,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDataModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataModel*
class CORDL_TYPE PlayerDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UndoUnsavedChangesAsync_d__11 = ::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11;

  /// @brief Field _playerData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _playerDataFileModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileModel, put = __cordl_internal_set__playerDataFileModel))::GlobalNamespace::PlayerDataFileModel* _playerDataFileModel;

  __declspec(property(get = get_playerData))::GlobalNamespace::PlayerData* playerData;

  __declspec(property(get = get_playerDataFileModel))::GlobalNamespace::PlayerDataFileModel* playerDataFileModel;

  /// @brief Convert operator to "::GlobalNamespace::IPlayerDataModel"
  constexpr operator ::GlobalNamespace::IPlayerDataModel*() noexcept;

  /// @brief Method Inject, addr 0x14e9e30, size 0x28, virtual false, abstract: false, final false
  inline void Inject(::StringW playerDataJsonString, ::GlobalNamespace::PlayerDataFileModel* playerDataFileModel);

  static inline ::GlobalNamespace::PlayerDataModel* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x14e9e58, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDisable, addr 0x14e9e84, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ResetData, addr 0x14e9f04, size 0x24, virtual false, abstract: false, final false
  inline void ResetData();

  /// @brief Method Save, addr 0x14e9e64, size 0x20, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method SaveAsync, addr 0x14e9ff0, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method UndoUnsavedChangesAsync, addr 0x14e9f28, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UndoUnsavedChangesAsync();

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __cordl_internal_get__playerData() const;

  constexpr ::GlobalNamespace::PlayerDataFileModel*& __cordl_internal_get__playerDataFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataFileModel*> const& __cordl_internal_get__playerDataFileModel() const;

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value);

  /// @brief Method .ctor, addr 0x14ea010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playerData, addr 0x14e9e28, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerData* get_playerData();

  /// @brief Method get_playerDataFileModel, addr 0x14e9e20, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _playerData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _playerDataFileModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* ____playerDataFileModel;

  /// @brief Field kPlayerDataSaveInjectID offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerDataSaveInjectID{ u"SavedPlayerData" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerDataFileModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataModel___UndoUnsavedChangesAsync_d__11, "", "PlayerDataModel/<UndoUnsavedChangesAsync>d__11");
