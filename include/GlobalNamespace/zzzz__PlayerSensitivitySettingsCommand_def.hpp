#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSensitivitySettingsCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSensitivitySettingsCommand)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
struct PlayerSensitivitySettingsCommand__ExecuteAsync_d__9;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSensitivitySettingsCommand;
}
namespace GlobalNamespace {
struct PlayerSensitivitySettingsCommand__ExecuteAsync_d__9;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSensitivitySettingsCommand*);
MARK_VAL_T(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSensitivitySettingsCommand*, "", "PlayerSensitivitySettingsCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, "", "PlayerSensitivitySettingsCommand/<ExecuteAsync>d__9");
// [CompilerGenerated]
// Dependencies OculusStudios.Platform.Core.UserAgeCategory, PlayerSensitivityFlag, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSensitivitySettingsCommand/<ExecuteAsync>d__9
struct CORDL_TYPE PlayerSensitivitySettingsCommand__ExecuteAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x35677a8, size 0xb8c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3568334, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSensitivitySettingsCommand__ExecuteAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlayerSensitivitySettingsCommand*", modifiers: "", def_value: None, comment: None }, CppParam { name: "messages", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_previousSensitivityFlag_5__2", ty:
  // "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: None, comment: None }, CppParam { name: "_previousAgreementVersion_5__3", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr PlayerSensitivitySettingsCommand__ExecuteAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                ::GlobalNamespace::PlayerSensitivitySettingsCommand* __4__this,
                                                                ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                                ::GlobalNamespace::PlayerSensitivityFlag _previousSensitivityFlag_5__2, int32_t _previousAgreementVersion_5__3,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19745 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSensitivitySettingsCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <previousSensitivityFlag>5__2, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag _previousSensitivityFlag_5__2;

  /// @brief Field <previousAgreementVersion>5__3, offset: 0x34, size: 0x4, def value: None
  int32_t _previousAgreementVersion_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, _previousSensitivityFlag_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, _previousAgreementVersion_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [UsedImplicitly]
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSensitivitySettingsCommand
class CORDL_TYPE PlayerSensitivitySettingsCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__9 = ::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9;

  /// @brief Field _apply, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__apply, put = __cordl_internal_set__apply)) ::GlobalNamespace::OptionalArgument_1<bool>* _apply;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _platform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _setting, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__setting, put = __cordl_internal_set__setting)) ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* _setting;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// [AsyncStateMachine(typeof(PlayerSensitivitySettingsCommand::<ExecuteAsync>d__9))]
  /// @brief Method ExecuteAsync, addr 0x3567560, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::PlayerSensitivitySettingsCommand* New_ctor();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__apply() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__apply();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* const& __cordl_internal_get__setting() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>*& __cordl_internal_get__setting();

  constexpr void __cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* value);

  /// @brief Method .ctor, addr 0x3567650, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x35674d8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x356751c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSensitivitySettingsCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivitySettingsCommand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSensitivitySettingsCommand(PlayerSensitivitySettingsCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivitySettingsCommand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSensitivitySettingsCommand(PlayerSensitivitySettingsCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19746 };

  /// [Inject]
  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// [Inject]
  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// [Inject]
  /// @brief Field _platform, offset: 0x48, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _setting, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* ____setting;

  /// @brief Field _apply, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____apply;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand, ____platform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand, ____setting) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSensitivitySettingsCommand, ____apply) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSensitivitySettingsCommand) == 0x60, "Size mismatch!");

} // namespace GlobalNamespace
