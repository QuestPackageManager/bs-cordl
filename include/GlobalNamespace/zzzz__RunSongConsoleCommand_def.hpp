#pragma once
// IWYU pragma private; include "GlobalNamespace\RunSongConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RunSongConsoleCommand)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
struct GameplayModifiers_SongSpeed;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
struct RunSongConsoleCommand__ExecuteAsync_d__26;
}
namespace GlobalNamespace {
class RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29;
}
namespace GlobalNamespace {
class RunSongConsoleCommand___c;
}
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class Barrier;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class RunSongConsoleCommand;
}
namespace GlobalNamespace {
class RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29;
}
namespace GlobalNamespace {
class RunSongConsoleCommand___c;
}
namespace GlobalNamespace {
struct RunSongConsoleCommand__ExecuteAsync_d__26;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RunSongConsoleCommand*);
MARK_REF_T(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*);
MARK_REF_T(::GlobalNamespace::RunSongConsoleCommand___c*);
MARK_VAL_T(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongConsoleCommand*, "", "RunSongConsoleCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29*, "", "RunSongConsoleCommand/<WaitUntilSongQueueEmptyCoroutine>d__29");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongConsoleCommand___c*, "", "RunSongConsoleCommand/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, "", "RunSongConsoleCommand/<ExecuteAsync>d__26");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongConsoleCommand/<>c
class CORDL_TYPE RunSongConsoleCommand___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::RunSongConsoleCommand___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* __9__26_0;

  static inline ::GlobalNamespace::RunSongConsoleCommand___c* New_ctor();

  /// @brief Method <ExecuteAsync>b__26_0, addr 0x32e4678, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _ExecuteAsync_b__26_0(::GlobalNamespace::BeatmapDifficulty x);

  /// @brief Method .ctor, addr 0x32e4674, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::RunSongConsoleCommand___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* getStaticF___9__26_0();

  static inline void setStaticF___9(::GlobalNamespace::RunSongConsoleCommand___c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongConsoleCommand___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongConsoleCommand___c(RunSongConsoleCommand___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongConsoleCommand___c(RunSongConsoleCommand___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RunSongConsoleCommand___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, EntitlementStatus, GameplayModifiers::SongSpeed, PlaymodeOptions, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RunSongConsoleCommand/<ExecuteAsync>d__26
struct CORDL_TYPE RunSongConsoleCommand__ExecuteAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e46e0, size 0x1340, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e5a20, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongConsoleCommand__ExecuteAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongConsoleCommand*", modifiers:
  // "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "_recordingRelativePath_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playmodeOptions_5__3", ty: "::GlobalNamespace::PlaymodeOptions", modifiers: "", def_value:
  // None }, CppParam { name: "_difficulty_5__4", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "_characteristic_5__5", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_songSpeedEnum_5__6", ty: "::GlobalNamespace::GameplayModifiers_SongSpeed", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__7", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr RunSongConsoleCommand__ExecuteAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                      ::GlobalNamespace::RunSongConsoleCommand* __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                      ::StringW _recordingRelativePath_5__2, ::GlobalNamespace::PlaymodeOptions _playmodeOptions_5__3,
                                                      ::GlobalNamespace::BeatmapDifficulty _difficulty_5__4, ::StringW _characteristic_5__5,
                                                      ::GlobalNamespace::GameplayModifiers_SongSpeed _songSpeedEnum_5__6, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__7,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19413 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <recordingRelativePath>5__2, offset: 0x30, size: 0x8, def value: None
  ::StringW _recordingRelativePath_5__2;

  /// @brief Field <playmodeOptions>5__3, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PlaymodeOptions _playmodeOptions_5__3;

  /// @brief Field <difficulty>5__4, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty _difficulty_5__4;

  /// @brief Field <characteristic>5__5, offset: 0x40, size: 0x8, def value: None
  ::StringW _characteristic_5__5;

  /// @brief Field <songSpeedEnum>5__6, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_SongSpeed _songSpeedEnum_5__6;

  /// @brief Field <beatmapLevel>5__7, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__7;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _recordingRelativePath_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _playmodeOptions_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _difficulty_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _characteristic_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _songSpeedEnum_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, _beatmapLevel_5__7) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongConsoleCommand/<WaitUntilSongQueueEmptyCoroutine>d__29
class CORDL_TYPE RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::RunSongConsoleCommand* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32e5aa4, size 0x148, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32e5bec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32e5bf4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32e5c2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32e5aa0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::RunSongConsoleCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::RunSongConsoleCommand*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::RunSongConsoleCommand* value);

  /// @brief Method .ctor, addr 0x32e3ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29(RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29(RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19414 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongConsoleCommand* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongConsoleCommand
class CORDL_TYPE RunSongConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__26 = ::GlobalNamespace::RunSongConsoleCommand__ExecuteAsync_d__26;

  using _WaitUntilSongQueueEmptyCoroutine_d__29 = ::GlobalNamespace::RunSongConsoleCommand__WaitUntilSongQueueEmptyCoroutine_d__29;

  using __c = ::GlobalNamespace::RunSongConsoleCommand___c;

  /// @brief Field _advancedHud, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__advancedHud, put = __cordl_internal_set__advancedHud)) ::GlobalNamespace::OptionalArgument_1<bool>* _advancedHud;

  /// @brief Field _barrier, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__barrier, put = __cordl_internal_set__barrier)) ::System::Threading::Barrier* _barrier;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _blockPause, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__blockPause, put = __cordl_internal_set__blockPause)) ::GlobalNamespace::OptionalArgument_1<bool>* _blockPause;

  /// @brief Field _characteristic, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  /// @brief Field _clearNotesOnStart, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__clearNotesOnStart, put = __cordl_internal_set__clearNotesOnStart)) ::GlobalNamespace::OptionalArgument_1<bool>* _clearNotesOnStart;

  /// @brief Field _coroutineStarter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _difficulty, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* _difficulty;

  /// @brief Field _levelId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _levelId;

  /// @brief Field _playDurationSec, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__playDurationSec, put = __cordl_internal_set__playDurationSec)) ::GlobalNamespace::OptionalArgument_1<float_t>* _playDurationSec;

  /// @brief Field _recordingRelativePath, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingRelativePath, put = __cordl_internal_set__recordingRelativePath)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _recordingRelativePath;

  /// @brief Field _reportKey, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__reportKey, put = __cordl_internal_set__reportKey)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _reportKey;

  /// @brief Field _runAutoplay, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__runAutoplay, put = __cordl_internal_set__runAutoplay)) ::GlobalNamespace::OptionalArgument_1<bool>* _runAutoplay;

  /// @brief Field _runUnityProfiler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__runUnityProfiler, put = __cordl_internal_set__runUnityProfiler)) ::GlobalNamespace::OptionalArgument_1<bool>* _runUnityProfiler;

  /// @brief Field _songRunningHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songRunningHelper, put = __cordl_internal_set__songRunningHelper)) ::GlobalNamespace::SongRunningHelper* _songRunningHelper;

  /// @brief Field _songSpeed, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__songSpeed, put = __cordl_internal_set__songSpeed)) ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* _songSpeed;

  /// @brief Field _startTimeSec, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__startTimeSec, put = __cordl_internal_set__startTimeSec)) ::GlobalNamespace::OptionalArgument_1<float_t>* _startTimeSec;

  /// @brief Field _wait, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__wait, put = __cordl_internal_set__wait)) ::GlobalNamespace::OptionalArgument_1<bool>* _wait;

  /// @brief Field _zenMode, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__zenMode, put = __cordl_internal_set__zenMode)) ::GlobalNamespace::OptionalArgument_1<bool>* _zenMode;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32e393c, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x32e33e4, size 0x558, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::RunSongConsoleCommand* New_ctor();

  /// @brief Method TryGetLevelCharacteristic, addr 0x32e3a30, size 0x118, virtual false, abstract: false, final false
  inline bool TryGetLevelCharacteristic(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic, ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristicEnum);

  /// @brief Method WaitUntilSongQueueEmpty, addr 0x32e3b48, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitUntilSongQueueEmpty();

  /// @brief Method WaitUntilSongQueueEmptyCoroutine, addr 0x32e3c94, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* WaitUntilSongQueueEmptyCoroutine();

  /// @brief Method <WaitUntilSongQueueEmptyCoroutine>b__29_0, addr 0x32e45cc, size 0x54, virtual false, abstract: false, final false
  inline bool _WaitUntilSongQueueEmptyCoroutine_b__29_0();

  /// @brief Method <WaitUntilSongQueueEmpty>b__28_0, addr 0x32e45a4, size 0x28, virtual false, abstract: false, final false
  inline bool _WaitUntilSongQueueEmpty_b__28_0();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__advancedHud() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__advancedHud();

  constexpr ::System::Threading::Barrier* const& __cordl_internal_get__barrier() const;

  constexpr ::System::Threading::Barrier*& __cordl_internal_get__barrier();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__blockPause() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__blockPause();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__characteristic() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__characteristic();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__clearNotesOnStart() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__clearNotesOnStart();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficulty();

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__levelId() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__levelId();

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& __cordl_internal_get__playDurationSec() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& __cordl_internal_get__playDurationSec();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__recordingRelativePath() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__recordingRelativePath();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__reportKey() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__reportKey();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__runAutoplay() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__runAutoplay();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__runUnityProfiler() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__runUnityProfiler();

  constexpr ::GlobalNamespace::SongRunningHelper* const& __cordl_internal_get__songRunningHelper() const;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get__songRunningHelper();

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* const& __cordl_internal_get__songSpeed() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>*& __cordl_internal_get__songSpeed();

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& __cordl_internal_get__startTimeSec() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& __cordl_internal_get__startTimeSec();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__wait() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__wait();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__zenMode() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__zenMode();

  constexpr void __cordl_internal_set__advancedHud(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__barrier(::System::Threading::Barrier* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__blockPause(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__clearNotesOnStart(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr void __cordl_internal_set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__playDurationSec(::GlobalNamespace::OptionalArgument_1<float_t>* value);

  constexpr void __cordl_internal_set__recordingRelativePath(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__reportKey(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__runAutoplay(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value);

  constexpr void __cordl_internal_set__songSpeed(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* value);

  constexpr void __cordl_internal_set__startTimeSec(::GlobalNamespace::OptionalArgument_1<float_t>* value);

  constexpr void __cordl_internal_set__wait(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__zenMode(::GlobalNamespace::OptionalArgument_1<bool>* value);

  /// @brief Method .ctor, addr 0x32e3cf0, size 0x8b4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32e335c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32e33a0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongConsoleCommand(RunSongConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongConsoleCommand(RunSongConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19415 };

  /// @brief Field kSkipSongQueueCommand offset 0xffffffff size 0x8
  static constexpr ::ConstString kSkipSongQueueCommand{ u"skip" };

  /// @brief Field kStopSongQueueCommand offset 0xffffffff size 0x8
  static constexpr ::ConstString kStopSongQueueCommand{ u"stop" };

  /// @brief Field _songRunningHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* ____songRunningHelper;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _coroutineStarter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _levelId, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____levelId;

  /// @brief Field _runAutoplay, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runAutoplay;

  /// @brief Field _runUnityProfiler, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runUnityProfiler;

  /// @brief Field _difficulty, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* ____difficulty;

  /// @brief Field _characteristic, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  /// @brief Field _advancedHud, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____advancedHud;

  /// @brief Field _zenMode, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____zenMode;

  /// @brief Field _songSpeed, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::GameplayModifiers_SongSpeed>* ____songSpeed;

  /// @brief Field _blockPause, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____blockPause;

  /// @brief Field _wait, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____wait;

  /// @brief Field _recordingRelativePath, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____recordingRelativePath;

  /// @brief Field _reportKey, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____reportKey;

  /// @brief Field _startTimeSec, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<float_t>* ____startTimeSec;

  /// @brief Field _clearNotesOnStart, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____clearNotesOnStart;

  /// @brief Field _playDurationSec, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<float_t>* ____playDurationSec;

  /// @brief Field _barrier, offset: 0xc8, size: 0x8, def value: None
  ::System::Threading::Barrier* ____barrier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____songRunningHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____coroutineStarter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____levelId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____runAutoplay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____runUnityProfiler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____difficulty) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____characteristic) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____advancedHud) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____zenMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____songSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____blockPause) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____wait) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____recordingRelativePath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____reportKey) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____startTimeSec) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____clearNotesOnStart) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____playDurationSec) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____barrier) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongConsoleCommand) == 0xd0, "Size mismatch!");

} // namespace GlobalNamespace
