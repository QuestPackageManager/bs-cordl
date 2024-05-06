#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardsGetScoreConsoleCommand)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13;
}
namespace GlobalNamespace {
class __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardsGetScoreConsoleCommand;
}
namespace GlobalNamespace {
class __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0;
}
namespace GlobalNamespace {
struct __LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0);
MARK_VAL_T(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13);
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardsGetScoreConsoleCommand::<>c__DisplayClass13_0*
class CORDL_TYPE __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic))::StringW characteristic;

  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  static inline ::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0* New_ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x2675b7c, size 0x54, virtual false, abstract: false, final false
  inline bool _ExecuteAsync_b__0(::GlobalNamespace::BeatmapKey entry);

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method .ctor, addr 0x2675b74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0(__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0(__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0 const&) = delete;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field difficulty, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0, ___characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0, ___difficulty) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteAsync>d__13
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LeaderboardsGetScoreConsoleCommand::<ExecuteAsync>d__13
struct CORDL_TYPE __LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2675bd0, size 0x600, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26761d0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LeaderboardsGetScoreConsoleCommand*",
  // modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "",
  // def_value: None }, CppParam { name: "_callCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_delay_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_beatmapKey_5__4", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                      ::GlobalNamespace::LeaderboardsGetScoreConsoleCommand* __4__this,
                                                                      ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages,
                                                                      int32_t _callCount_5__2, int32_t _delay_5__3, ::GlobalNamespace::BeatmapKey _beatmapKey_5__4, int32_t _i_5__5,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardsGetScoreConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages;

  /// @brief Field <callCount>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _callCount_5__2;

  /// @brief Field <delay>5__3, offset: 0x34, size: 0x4, def value: None
  int32_t _delay_5__3;

  /// @brief Field <beatmapKey>5__4, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey _beatmapKey_5__4;

  /// @brief Field <i>5__5, offset: 0x50, size: 0x4, def value: None
  int32_t _i_5__5;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, _callCount_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, _delay_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, _beatmapKey_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, _i_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardsGetScoreConsoleCommand
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardsGetScoreConsoleCommand*
class CORDL_TYPE LeaderboardsGetScoreConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__13 = ::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0;

  /// @brief Field _beatmapLevelsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _callCount, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__callCount, put = __cordl_internal_set__callCount))::GlobalNamespace::OptionalArgument_1<int32_t>* _callCount;

  /// @brief Field _characteristic, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic))::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  /// @brief Field _delay, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay))::GlobalNamespace::OptionalArgument_1<int32_t>* _delay;

  /// @brief Field _difficulty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty))::GlobalNamespace::OptionalArgument_1<int32_t>* _difficulty;

  /// @brief Field _leaderboardsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsModel, put = __cordl_internal_set__leaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _leaderboardsModel;

  /// @brief Field _levelId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId))::GlobalNamespace::RequiredArgument_1<::StringW>* _levelId;

  __declspec(property(get = get_isAsyncCommand)) bool isAsyncCommand;

  /// @brief Method Execute, addr 0x2675688, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x267568c, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method GetCommandName, addr 0x2675648, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetCommandName();

  /// @brief Method GetLongUsageHelp, addr 0x2675604, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetShortHelpText, addr 0x26755c0, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText();

  /// @brief Method HandleLeaderboardsResultsReturned, addr 0x2675768, size 0x1d8, virtual false, abstract: false, final false
  inline void
  HandleLeaderboardsResultsReturned(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
                                    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
                                    int32_t playerScoreIndex);

  static inline ::GlobalNamespace::LeaderboardsGetScoreConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__callCount();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& __cordl_internal_get__callCount() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__characteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& __cordl_internal_get__characteristic() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__delay();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& __cordl_internal_get__delay() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__difficulty();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& __cordl_internal_get__difficulty() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__leaderboardsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__leaderboardsModel();

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__levelId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RequiredArgument_1<::StringW>*> const& __cordl_internal_get__levelId() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__callCount(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr void __cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__delay(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr void __cordl_internal_set__leaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2675940, size 0x234, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isAsyncCommand, addr 0x26755b8, size 0x8, virtual true, abstract: false, final false
  inline bool get_isAsyncCommand();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardsGetScoreConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardsGetScoreConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardsGetScoreConsoleCommand(LeaderboardsGetScoreConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardsGetScoreConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardsGetScoreConsoleCommand(LeaderboardsGetScoreConsoleCommand const&) = delete;

  /// @brief Field _leaderboardsModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____leaderboardsModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _levelId, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____levelId;

  /// @brief Field _characteristic, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  /// @brief Field _difficulty, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____difficulty;

  /// @brief Field _callCount, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____callCount;

  /// @brief Field _delay, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____leaderboardsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____beatmapLevelsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____characteristic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____difficulty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____callCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand, ____delay) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardsGetScoreConsoleCommand*, "", "LeaderboardsGetScoreConsoleCommand");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand____c__DisplayClass13_0*, "", "LeaderboardsGetScoreConsoleCommand/<>c__DisplayClass13_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardsGetScoreConsoleCommand___ExecuteAsync_d__13, "", "LeaderboardsGetScoreConsoleCommand/<ExecuteAsync>d__13");
