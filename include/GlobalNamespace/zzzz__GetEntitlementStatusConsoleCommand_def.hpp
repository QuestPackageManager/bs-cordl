#pragma once
// IWYU pragma private; include "GlobalNamespace/GetEntitlementStatusConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetEntitlementStatusConsoleCommand)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
struct GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
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
class GetEntitlementStatusConsoleCommand;
}
namespace GlobalNamespace {
struct GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetEntitlementStatusConsoleCommand*);
MARK_VAL_T(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetEntitlementStatusConsoleCommand*, "", "GetEntitlementStatusConsoleCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9, "", "GetEntitlementStatusConsoleCommand/<ExecuteAsync>d__9");
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GetEntitlementStatusConsoleCommand/<ExecuteAsync>d__9
struct CORDL_TYPE GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32da300, size 0x7d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32daad4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GetEntitlementStatusConsoleCommand*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                  ::GlobalNamespace::GetEntitlementStatusConsoleCommand* __4__this,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GetEntitlementStatusConsoleCommand* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetEntitlementStatusConsoleCommand
class CORDL_TYPE GetEntitlementStatusConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__9 = ::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _entitlementModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _levelId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _levelId;

  /// @brief Field _packId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _packId;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32da0d4, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x32d9964, size 0x770, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::GetEntitlementStatusConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__levelId() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__levelId();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__packId() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__packId();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__levelId(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__packId(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32da1b0, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32d98dc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32d9920, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetEntitlementStatusConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetEntitlementStatusConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetEntitlementStatusConsoleCommand(GetEntitlementStatusConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetEntitlementStatusConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetEntitlementStatusConsoleCommand(GetEntitlementStatusConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19366 };

  /// @brief Field _entitlementModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _packId, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____packId;

  /// @brief Field _levelId, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand, ____entitlementModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand, ____packId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetEntitlementStatusConsoleCommand, ____levelId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetEntitlementStatusConsoleCommand) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
